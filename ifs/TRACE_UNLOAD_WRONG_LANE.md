# Trace: lane 2 retracted instead of lane 1

## Root cause (certain for the deployed IFS_LOAD macro)

`IFS_LOAD` in `ad5x-fs/.../AFC/ifs_macros.cfg:63-71` runs `ADX_LOAD_HEAD LANE=n`, not `TOOL_LOAD`.
`cmd_ADX_LOAD_HEAD` (`AFC_IFS.py:327`) never looks at what is already loaded:

- :328-:331 `lane = lane2`
- :347 `lane.get_toolhead_pre_sensor_state()` is the shared `fill_sensor`, true because lane 1's strand is in the head
- :349 `do_tool_cut_tip_form(lane2, ...)` cuts (ADX_CUT / ADX_PARK take only EXTRUDER=, no lane involved)
- :350 `_retract_until_clear(lane2, 1200)` -> :373 `lane.select_lane()` selects lane 2, syncs the shared drive stepper and retracts lane 2's strand. Lane 1's strand stays in the head.
- :355 `lane.move_to(1000, ...)` then feeds lane 2 against lane 1's filament.
- :361 `SET_LANE_LOADED lane2` -> `unset_lane_loaded` (AFC_functions.py:629) just marks lane1 unloaded without moving it.

## Log fit

- Selector rested at slot 1 (0 deg, on the home switch) after the previous `SET_LANE_LOADED lane1` (AFC_lane.py:1966 `select_lane`).
- `select_lane(lane2)`: `_ensure_homed(True)` -> `_home` (AFC_IFS.py:623). `home_state` is true, so it backs off 90 (to 270 deg) and homes forward: "trigger after 90.044mm". `_move_to(90)` selects slot 2 (:695).
- Retract (about 12 s with cut, park, 60 mm retract) ends with `_release` only. The selector stays at slot 2 and `return_to_home` is not called.
- `lane.move_to(1000)` -> `select_lane` -> `rehome_on_select` is true -> homes from 90 deg: "trigger after 269.978mm". Exactly the second line.
- With the TOOL_LOAD path this signature is impossible. See below: the first select is lane 1, the homes would be 90 mm and again 90 mm.

## If the TOOL_LOAD path is really used (it is correct)

TOOL_LOAD(lane2), lane_loaded == lane1:
- AFC.py:1451 only blocks the same lane. :1503 `lane_loaded('lane1') != lane2` -> `TOOL_UNLOAD(self.lanes['lane1'])` (:1511).
- TOOL_UNLOAD :1914 `next_lookup_lane_name = lane1` (next_lane_load is None). The extruder is the same, so no tool_swap. `cur_lane` stays lane1.
- :1965 `unload_sequence` -> :2051 `unit_unload_lane(lane1, ...)` -> AFC_IFS.py:400 `do_tool_cut_tip_form(lane1)` -> :401 `_retract_until_clear(lane1)` -> `select_lane(lane1)`. Correct lane.
- unload_sequence calls no select_lane or move before the hook (:2032-:2052). `_check_extruder_temp` only touches the heater.

CHANGE_TOOL(lane2), self.current == lane1:
- :2388 `next_lane_load = lane2`. :2441 `TOOL_UNLOAD(lane1)`. In TOOL_UNLOAD the same extruder gives no swap. :1943 lane2 in `extruder.lanes` and != lane_loaded, so `unload_toolhead = True`. `cur_lane` stays lane1.
- Same hook path as above.

## IFS state review

Not the cause, no bug found:
- `selector_pos` is set to 0 after every home (:651) and to target after `_move_to`; the move wrapper release does not change it.
- `return_to_home` neutral = 45 + (last_index-1)*90 is correct; `rehome_on_select` re-homes before every select anyway, so a rest at a slot or neutral is handled (backoff covers the on-switch case).
- `_retract_until_clear`: the drive stepper is shared, so syncing is lane independent. `select_lane` runs first, `sync_to_extruder(th_extruder_name)` is on the extruder_stepper (not the lambda overridden in handle_connect), and cleanup unsyncs and releases. OK.
- `_handle_activate_extruder` (:583) and `unset_lane_loaded` call `return_to_home` / `select_lane` only for the loaded lane or other units. Harmless.

## Ranking

1. ADX_LOAD_HEAD skipping the unload of the loaded lane (certain, matches the logs). Test: AFC.log should have no "Unloading lane1" line and no TOOL_UNLOAD at all for that IFS_LOAD; "Loading lane2" absent too.
2. Deployed macro is a TOOL_LOAD variant: not supported by the code, ruled out by the 269.978 home.

## Minimal fix (ADX_LOAD_HEAD, after the temperature wait at :346, before :347)

```diff
+        loaded = lane.extruder_obj.lane_loaded
+        if loaded is not None and loaded != lane.name:
+            if not self.afc.TOOL_UNLOAD(self.afc.lanes[loaded], set_start_time=False):
+                raise gcmd.error("failed to unload {} before loading {}".format(loaded, lane.name))
         if lane.get_toolhead_pre_sensor_state():
```

(Alternative: make IFS_LOAD call `CHANGE_TOOL LANE=lane{n}` when something else is loaded.)
Heating is already satisfied there, and TOOL_UNLOAD uses `unit_unload_lane` which retracts the correct lane and returns to neutral. The existing :347 block remains for the case of filament in the head with no lane marked as loaded; in that case the lane to retract is unknown, so retracting the requested lane is still only right if the user inserted it.
