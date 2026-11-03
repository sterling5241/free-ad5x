# AFC_IFS code audit (read-only)

Checked against: AFC-Klipper-Add-On (scratchpad afc-repo/extras) and Kalico at Desktop\kalico-ad5x\klippy. The mirror copies of AFC_IFS.py, ad5x_filament_sensor.py, ad5x_power_loss.py and AFC_Hardware-IFS.cfg are byte-identical to the free-ad5x\ifs copies (diffed).

## BLOCKER

### B1. `_filament_used()` crashes during a print (runout path)
- AFC_IFS.py:274 `self.printer.lookup_object("print_stats").get_status(None)`.
- Kalico print_stats.py:127-136 does `eventtime - self.last_pause_time` / `eventtime - self.print_start_time` / `_update_filament_usage(eventtime)` whenever a print is active, so `None` gives `TypeError`.
- Hit at AFC_IFS.py:279 (`handle_runout`, inside the reactor callback from `handle_load_runout`) and at :287 (`_runout_tick`, a reactor timer). Every silk runout during a print raises; an exception in the timer is unhandled in the reactor.
- ad5x_power_loss.py:37 passes `eventtime` and is fine.
- Fix: `get_status(self.afc.reactor.monotonic())[...]` at line 274.

### B2. AFC macros not present in the ad5x-fs tree (deployment)
- AFC_Macro_Vars.cfg:1 is `[include macros/*.cfg]`, but `ad5x-fs\fs\usr\data\config-ad5x\AFC\` has no `macros\` folder (a wildcard include with no match is silently accepted).
- `ADX_CUT` (AFC_IFS.py:370) runs `AFC_CUT`, defined only in AFC `config/macros/Cut.cfg`. Without it every unload fails with "Unknown command".
- Fix: ship `macros/` (at least Cut.cfg) next to AFC_Macro_Vars.cfg, or confirm the installer copies it.
- Nothing in ad5x-fs copies the three .py files into klippy/extras either; confirm the installer does.

## LIKELY BUG

### L1. Failed runout swap then RESUME resumes cold
- AFC_IFS.py:294 uses `BASE_PAUSE`, which bypasses the PAUSE macro, so `variable_etemp/btemp/fan` in ad5x_print.cfg:63-65 stay 0 (or stale).
- On "no lane with same type and colour" (:308) `AFC_error(..., True)` calls PAUSE, then AFC_PAUSE sees `is_paused` already True and skips the user macro.
- The user's later RESUME runs ad5x_print.cfg:92-99 with `etemp=0` and executes `M104 S0 / M109 S0 / M190 S0`, resuming with heaters off.
- Fix: in `_runout_swap` call `PAUSE` (the macro), or have RESUME fall back to the current targets when the saved values are 0.

### L2. Runout swap does not remap the tool
- AFC_IFS.py:310-313 loads `sub` but never runs `SET_MAP LANE=<sub> MAP=<lane.map>` (AFC does this in AFC_lane.py:1021 for infinite spool).
- The next T command for that tool selects the empty lane.
- Fix: after `TOOL_LOAD` succeeds, `self._gcode("SET_MAP LANE=%s MAP=%s" % (sub.name, lane.map))`.

### L3. Runout watch dies on pause, and the toolhead sensor never reports runout
- `_runout_tick` (:285) returns NEVER whenever `is_printing()` is false, which includes `paused`. A user pause during the 600 mm window cancels the watch and nothing re-arms it after resume.
- ad5x_filament_sensor.py:22-23 `note_filament_present` only stores the state; AFC_extruder.py:313 `_runout_event_handler` / `handle_start_runout` is never invoked, so AFC's toolhead jam/runout detection is dead.
- Fix: keep ticking while `print_stats.state in (printing, paused)`, or re-arm on resume.

### L4. Power-loss save can throw every 2 s
- ad5x_power_loss.py:14 default path `/usr/data/config/kalico/ad5x_power_loss.json`. Nothing in ad5x-fs creates that directory (config lives in `config-ad5x`).
- `open(tmp, "w")` at :60 raises FileNotFoundError inside the reactor timer `_save`.
- Fix: `os.makedirs(os.path.dirname(self.path), exist_ok=True)` in `__init__`, and wrap the write in try/except OSError.

### L5. `_auto_load` can collide with motion
- AFC_IFS.py:444 guards only `is_printing()`. AFC itself uses `is_printing(check_movement=True)` (AFC_lane.py:1229) because loading during moves or homing crashes Klipper.
- Fix: `is_printing(check_movement=True)`; also skip if `self.afc.current_state` is not idle.

## MINOR

- ad5x_filament_sensor.py:49: `bool(None)` is False, so `home_start(triggered=False)` completes instantly before the first ADC report (~100 ms after MCU start). Guard with `if self._sensor.state is None: treat as not ready`.
- AFC_IFS.py:65 `rehome_on_select` defaults True, so the selector re-homes on every lane change (`select_lane` :531 calls `_ensure_homed(True)`). The comment at :497 says stock homes once. Consider default False.
- AFC_IFS.py:359-370 `ADX_CUT` hardcodes `park_x = pin_x + pin_park_dist` (correct only for `cut_direction: "left"`) and indexes `cut_vars["pin_loc_xy"]`, which raises KeyError if the user switches to `pin_loc_x/y` variables. After `tool_cut_cmd` is renamed to ADX_CUT, AFC.verify_macro_positions (AFC.py:553-554) no longer warns about the -99 default.
- AFC_IFS.py:296: `_runout_swap` uses `toolhead.get_position()[2]` (raw Z, includes gcode offset and mesh) with `G1 Z` (gcode Z), and does not force `G90`.
- `_flush_second` and `_brush_passes(True)` leave E shifted (`G92 E0`, `G1 E90`). This is fine where wrapped by SAVE/RESTORE_GCODE_STATE or a later restore, but `_clear_stale` (:345) runs unwrapped.
- Silk dead bands (:418-421): a reading in 0.2198-0.2444 or 0.732-0.757 at boot leaves `silk_state` None, so the lane keeps `_load_state=True` (set because the lane has no `load` pin, AFC_lane.py:233).
- AFC_Hardware-IFS.cfg:34 comment mentions `unload_ifs_retries`, which does not exist.
- A user `SET_TMC_CURRENT` on these steppers recomputes vsense/irun (tmc2130.py:262-266) and drops the raw driver_ values.

## VERIFIED OK

### 1. API names and signatures
- `lane.select_lane()` (AFC_lane.py:865).
- `lane.set_tool_unloaded(normal_toolchange=)` (:1532).
- `unit.lane_tool_unloaded(lane)` (AFC_unit.py:580).
- `lane.loaded_to_hub`.
- `afc.do_tool_cut_tip_form(lane, extruder)` (AFC.py:1978).
- `lane.move_to(distance, speed_mode, endstop=...)` returns `(homed, dist, warn)` (:886).
- `stepper.home_to(spec, dist, speed, accel, triggered, check_trigger, assist_active)` returns `(homed, dist, error)` (AFC_stepper.py:797).
- `lane.homing_overshoot` (set from the unit, :672).
- `lane.get_toolhead_endstop()` returns `"tool"` (AFCHomingPoints.TOOL), aliased to `'tool_start'` in `_resolve_endstop_pin` (AFC_stepper.py:505-511).
- `raw_load_state`, `load_state`, `material`, `color`, `index`, `need_purge`, `status`.
- `afc.toolhead` (AFC.py:434, set in handle_connect, only used at runtime).
- `afc.reactor` (AFC.py:82).
- `error.handle_lane_failure(lane, msg, pause=True)` (AFC_error.py:296).
- `error.AFC_error(msg, pause=True, stack_name=None)` (:162).
- `function.get_current_lane_obj` and `function.is_printing`.
- `afc.TOOL_LOAD(lane, purge_length=None, set_start_time=False)` and `TOOL_UNLOAD(lane, set_start_time=True, force_unload=False)`.
- `afc.next_lane_load`, `afc.in_toolchange`.
- `afc.save_vars()` returns early before PREP, so early silk callbacks are safe.

### 2. AD5XEndstop versus homing.py and FPSEndstopWrapper
- It is a line-for-line match with AFC_buffer.py:706-821: `get_mcu`, `add_stepper`, `get_steppers`, `home_start(print_time, sample_time, sample_count, rest_time, triggered)`, `home_wait`, `query_endstop`.
- The only extras are `self._triggered`, stored and used in `_poll`.
- Kalico HomingMove (homing.py:100-209) only needs `get_steppers`, `home_start` and `home_wait`. No trsync is used by either wrapper.
- `manual_home` takes `triggered` and `check_triggered` and has no `probe_pos` (homing.py:425), which matches AFC's fallback branch (AFC.py:441-443).
- Already-triggered at start behaves as FPS does (trigger_time = now, zero-distance). "No trigger on tool_start after full movement" is mapped by AFC_stepper to `(False, movepos)`.
- Registration is valid. `drive_stepper_obj` is an AFCExtruderStepper with `_endstops`, `_qes` and `_ppins` built in `__init__` (AFC_stepper.py:113-114, 524-529). `_add_endstop(..., mcu_endstop=)` accepts `pin=None` (:657-659).
- AFC.handle_connect runs first (AFC is loaded by the unit), then the unit's. Lanes' `handle_unit_connect` fires inside `super().handle_connect()`, before IFS adds the endstop, which is fine because the endstop is only read at homing time.
- The generic `_init_endstops` skips tool_start when `pin_tool_start` is None (:573), so there is no duplicate key.
- `tool_start` None is None-safe everywhere (grep of `.tool_start`). The IFS path never uses `if cur_extruder.tool_start:`.
- `query_endstops.register_endstop` accepts it; M119 works.

### 3. Ordering and re-entrancy
- The `move` and `do_homing_move` wrappers are safe: `home_to` calls `self.do_homing_move`, which resolves to the instance attribute. The extra `wait_moves` is redundant but harmless.
- The `sync_to_extruder` lambda is on the AFCExtruderStepper only. `_extrude_with_lane` calls the real Kalico `ExtruderStepper.sync_to_extruder(name)` and then `(None)` (extruder.py:86-100), so there is no conflict. `unsync_to_extruder` is a no-op because `_synced_to_extruder` stays False.
- M82 / G92 E0 / G1 E inside SAVE/RESTORE_GCODE_STATE is correct: RESTORE re-bases E by `e_diff`.
- `_silk_callback`, `on_filament_insert`, `_auto_load` and `_runout_swap` use `register_callback`, which gives a fresh greenlet, so they may block. `_runout_tick` does not block.
- `BASE_PAUSE` blocks until the SD worker stops (virtual_sdcard.py:138-142).

### 4. Configuration and TMC
- The `u1_filament_sensor_name` path (AFC_extruder.py:302-313) works: the AD5X RunoutHelper has every attribute AFC touches (`note_filament_present(state, force)`, `filament_present`, `sensor_enabled`, `min_event_systime`, `event_delay`, `runout_pause`, `runout_gcode`, `_runout_event_handler`).
- It relies on `[ad5x_filament_sensor fill_sensor]` (cfg line 9) appearing before `[AFC_extruder extruder]` (line 19). That holds today, and `add_object` makes `load_object` return the existing object.
- The tmc2209.py driver_ loop (lines 103-106) runs last in `__init__`, after `TMC2130CurrentHelper` (:63, sets vsense/ihold/irun), after TMCCommandHelper (:64) and after TMCStealthchopHelper (:70, sets tpwmthrs=0xFFFFF and en_spreadcycle). It therefore overrides all of them.
- `_init_registers` (tmc.py:461-467) writes `fields.registers` as-is at connect and on enable, so the final IHOLD_IRUN, GCONF (shaft, index_otpw), CHOPCONF (vsense) and TPWMTHRS values are written.
- `apply_current` only runs via SET_TMC_CURRENT or Homing.home_rails (homing.py:292), not `manual_home`.
- The field names exist in tmc2208.Fields.
- Dedicated enable pins mean no `toff` toggling; explicit `step_pulse_duration` means `dedge` stays 0.
- The `ifs` MCU is declared before the AFC include (printer.cfg:65-70).

### 5. Macros
- `rename_existing` targets exist: `[pause_resume]` (printer.base.cfg:129, loaded first) registers PAUSE, RESUME, CLEAR_PAUSE and CANCEL_PRINT (pause_resume.py:20-33).
- M106/M107 are macros, so no builtin collision (no `[fan]`).
- `fan_generic fanM106` status has `speed`.
- `printer.AFC.current_load` exists (AFC.py:2540).
- `SET_GCODE_VARIABLE MACRO=PAUSE` and the `variable_` names are valid.
- Jinja `set` inside `if` is visible afterwards.
- AFC defines no PAUSE, RESUME, END_PRINT, START_PRINT or CANCEL_PRINT.
- AFC renames the user's PAUSE and RESUME to `_AFC_RENAMED_*` at PREP (AFC_prep.py:54-55). AFC_PAUSE z-hops and then calls the user macro; AFC_RESUME calls the user RESUME and then restores the position. The double `PAUSE_state` / `PAUSE_STATE` restore is redundant but consistent.
