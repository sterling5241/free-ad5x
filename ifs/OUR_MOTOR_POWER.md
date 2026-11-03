# IFS motor power: host enable/disable paths and currents

AFC source read: scratchpad copy `C:\Users\sterl\AppData\Local\Temp\claude\C--Users-sterl\d6eae722-efb2-4529-a483-420ce0dc62cb\scratchpad\afc-repo\extras\` (called `AFC/` below). Kalico: `C:\Users\sterl\Desktop\kalico-ad5x\klippy\` (called `K/`).

## 1. Enable / disable paths

How enabling really happens: Kalico auto-enables any stepper the moment steps are generated for it (`K/extras/stepper_enable.py:57` `add_active_callback(self.motor_enable)`, re-armed at :76 after a disable). So every `lane.move`, `selector.move`, `do_homing_move` enables the motor implicitly; nothing disables it afterwards except an explicit `do_enable(False)` (`AFC/AFC_stepper.py:268`), `SET_STEPPER_ENABLE`, M84/M18 or idle_timeout. `AFC_stepper._move` (`AFC_stepper.py:205-243`) never disables.

Explicit enables
- `AFC_functions.py:620` `handle_activate_extruder`: `cur_lane_loaded.do_enable(True)` then `:623 sync_to_extruder()`. Our lambda (`AFC_IFS.py:88`) turns the feed back off right away. OK.
- `AFC_stepper.py:898` `AFC_STEPPER_HOME ENABLE=1`, SET_STEPPER_ENABLE: manual.
- Implicit (auto-enable) on any move: `AFC_lane.move` -> `AFC_lane.py:884 drive_stepper.move`; selector `_move_to` (`AFC_IFS.py:281`), `_home` (`:246,:255`).

Disables with a matching path
- `AFC.py:1059` (LANE_MOVE), `:1313` (LANE_UNLOAD), `:2278,:2287` (end of TOOL_UNLOAD), `AFC_BoxTurtle.py:150` (end of `system_Test`, but ours overrides it and calls `super(AFC_HTLF,self).system_Test` at `AFC_IFS.py:152`, so :150 still runs; it is the only PREP disable), `AFC_functions.py:596` (non-active lanes in `handle_activate_extruder`), `:1741`, `AFC_lane.py:1251,1871,1904,1912`.
- Selector: only `return_to_home(disable_selector=True)` (`AFC_IFS.py:293`), and `select_lane(disable_selector=True)` (`:314`).

Paths with NO disable that leave the motor enabled
1. `AFC_IFS._auto_load` (`AFC_IFS.py:215-236`): up to 65 x 10 mm feed moves; `finally: return_to_home()` disables only the selector. Feed motor stays on until something else disables it. Confirmed gap.
2. `AFC_IFS._stock_unload` (`:110-126`): 2-5 `lane.move` calls, no disable after. Relies on TOOL_UNLOAD's `AFC.py:2278/2287`; if ADX_CUT is run alone, or AFC_CUT/extruder move raises, it stays on.
3. TOOL_LOAD error returns: `AFC.py:1700,1708,1724,1750,1765,1786,1815` all `return False` after lane moves with no `do_enable(False)`. TOOL_UNLOAD/CHANGE_TOOL exceptions and `AFC_error(pause=True)` likewise.
4. `select_lane` default `disable_selector=False` (`AFC_IFS.py:302`): after `handle_activate_extruder` -> `select_lane` (`AFC_functions.py:625`) and `select_loaded_lane` (:649) the selector stays enabled for the whole print (at IHOLD current, see 2).
5. Selector `_home` failure returns (`:252,:264`) leave it enabled.
6. `AFC_lane.py:1964` SET_LANE_LOADED -> our lambda disables; fine.

Auto-disable: `[idle_timeout]` exists in Kalico (always loaded by toolhead), default `timeout: 600`, default gcode `TURN_OFF_HEATERS` + `M84` (`K/extras/idle_timeout.py:8-13,26`). M84 -> `stepper_enable.motor_off` -> `set_motors_enable(get_steppers())`, and `get_steppers()` is every registered `enable_lines` key (`stepper_enable.py:174`), which includes the `AFC_stepper IFS_*` steppers even though they are on the IFS MCU. So the IFS motors are released only after 600 s of toolhead inactivity (I found no printer.cfg override of `[idle_timeout]` in free-ad5x; the real printer.cfg was not checked). Nothing else (no per-stepper auto-disable).

## 2. Currents (Kalico calc: R = sense 0.500 + 0.020 = 0.520; `K/extras/tmc2130.py:212-241`, TMC2209 uses TMC2130CurrentHelper)

Full-scale per CS step: `0.32 or 0.18 V / (32 * 0.52 * sqrt2) = 0.01360 A (vsense0), 0.00765 A (vsense1)`, A = (CS+1) x that.

| state | registers | A rms (nominal) |
|---|---|---|
| Kalico at startup, run 0.25 | vsense=1, irun=31 (0.25 clamps; vsense0 would give 0.2448 too, not strictly better so stays vsense1) | 0.2448 |
| Kalico hold 0.01 | ihold=0 (vsense1) | 0.0077 |
| After `ifs_stock_current` (2 s after ready) | vsense=0, irun=9 | 10 x 0.0136 = 0.136 (0.141 with plain 0.5 ohm; peak ~0.19) |
| standstill after trim | ihold=0 stays, vsense=0 | 0.0136 (CS0 = 1/32 scale, not zero) |

Same registers as stock (IRUN 9, IHOLD 0, vsense 0), so nominal current equals stock. Standstill timing: TPOWERDOWN 128 x 2^18 / 12 MHz = 2.8 s at IRUN after the last step, then IHOLDDELAY 10 x 2^18 / 12 MHz = 0.22 s ramp to IHOLD. Spreadcycle (no stealthchop threshold set), so no PWM current regulation.

Does Kalico change irun at runtime? Only through `SET_TMC_CURRENT` (`tmc.py:501`, `apply_current` recalculates from `actual_current` = 0.25 -> back to vsense1/irun31, 0.245 A), the homing current swap (`set_current_for_homing`, only for diag-pin virtual endstops; not used, home == run anyway) and a config reload/FIRMWARE_RESTART (until the delayed_gcode runs again). AFC only sends SET_TMC_CURRENT if `print_current`/`global_print_current` is set (`AFC_stepper.py:147,334`; unset here). `_do_enable` re-sends all cached fields (`tmc.py:461,602`) so the trimmed irun/vsense survive re-enable. No current boosting.

Assessment: the numbers are stock's. If the housing melted, a stock-equal 0.136 A is only dangerous if it flowed for hours (IRUN never dropping to IHOLD), or the clone does not honour IHOLD/TPOWERDOWN, or the clone delivers more than nominal in vsense=0 (you already measured they deviate from spec in vsense=1). Needs a measurement (shunt on a coil, or coil temperature at standstill) to separate those.

## 3. Proposed edits (not applied)

a) Release after every move (stock behaviour), `AFC_IFS.handle_connect`, after the `drive = ...` lines:
```diff
         drive = self.drive_stepper_obj
         drive.sync_to_extruder = lambda *args, **kwargs: drive.do_enable(False)
+        for stp in (drive, self.selector_stepper_obj):
+            for name in ("move", "do_homing_move"):
+                def wrapped(*a, _o=getattr(stp, name), _s=stp, **k):
+                    try:
+                        return _o(*a, **k)
+                    finally:
+                        _s.do_enable(False)
+                setattr(stp, name, wrapped)
```
Caveat: `_home` does move-off then homing; the selector re-enables per call (TMC re-init each enable, ~ms of UART). Selector held-by-mechanism per stock. Auto-load re-enables every 10 mm (fine, or raise `auto_load_step`).

b) Selector released after selecting:
```diff
-    def select_lane(self, lane, disable_selector=False):
+    def select_lane(self, lane, disable_selector=True):
```
(redundant with (a), keeps intent explicit.)

c) Explicit drive release at the end of auto-load and stock unload:
```diff
         finally:
+            self.drive_stepper_obj.do_enable(False)
             self.return_to_home()
```
and in `_stock_unload` before `self.stock_unloaded = True`: `lane.do_enable(False)`.

d) Idle watchdog in `AFC_Hardware-IFS.cfg` (backstop independent of AFC paths and of the 600 s idle_timeout):
```
[delayed_gcode ifs_release]
initial_duration: 10
gcode:
  {% if printer.idle_timeout.state != "Printing" %}
    SET_STEPPER_ENABLE STEPPER="AFC_stepper IFS_Drive" ENABLE=0
    SET_STEPPER_ENABLE STEPPER="AFC_stepper IFS_Selector" ENABLE=0
  {% endif %}
  UPDATE_DELAYED_GCODE ID=ifs_release DURATION=15
```
and optionally `[idle_timeout] timeout: 60`.

## 4. Where this session could have left the feed powered

- PREP: our `system_Test` runs `return_to_home` (selector only), then BoxTurtle `system_Test` ends with `do_enable(False)` per lane (:150), so PREP itself releases the feed. But a PREP that errors out (`AFC_IFS.py:150-151` or lane_check False at BoxTurtle:~140) returns before :150.
- Any `_auto_load` (insert a spool): feed stays on after (gap 1). Most likely culprit.
- Manual `AFC_STEPPER_HOME ENABLE=1` / `SET_STEPPER_ENABLE ... ENABLE=1` tests, force-move style tests, and any `lane.move` from G-code/`LANE_MOVE` variants other than AFC.py:1059 (e.g. `AFC_LANE ... ` / calibration commands, `_move_lane` with enable_movement) with no disable.
- ADX_CUT run standalone for testing (gap 2), aborted TOOL_LOAD/TOOL_UNLOAD (gap 3).
- Seeing `enn=0` in IOIN after the fact means the pin was still low (enabled); notes line 228 say IOIN reads lag the enable, so confirm with `SET_STEPPER_ENABLE` state / `printer.stepper_enable.steppers` in status rather than IOIN.
- Restarts: after a Klipper restart the host re-sends registers at connect with irun 31 / vsense 1 (0.245 A) until `ifs_stock_current` fires 2 s after ready; the pin is inactive then, so harmless unless a motor was enabled in that window.
