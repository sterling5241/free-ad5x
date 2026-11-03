# Stock vs ours: remaining differences (static read, nothing run)

Traced: ours = AFC_IFS.py, ad5x_print.cfg, AFC.cfg, AFC_Hardware-IFS.cfg, AFC_Macro_Vars.cfg, tmc2209.py patch. AFC = afc-repo extras (AFC.py, AFC_error.py, AFC_lane.py) and config/macros (Cut.cfg, Park.cfg). Host spec refs are STOCK_SPEC_HOST.md sections.

## 1. Table

| Stock step | Our behaviour | Verdict |
|---|---|---|
| 3.1 printClearGoPos: X52.5 F12000, Y220 F12000, Y230.5 F3000, M400 | `_chute_park`: same three moves + M400 (extra `Y220 F3000` first only if Y>220) | MATCH |
| 3.2 cut: M400, G90, Y10 F18000, Y-5.6 F1800, X20 F12000 | ADX_CUT: G90, Y10 F18000, Y-5.6 F1800, X20 F12000, M400 (pin 14/-5.6 + park 6) | MATCH |
| 3.2 cut: X-0.8 F600, M400, G92 E0, G1 E-5 F600, M400 | AFC_CUT: fast+slow move end at -0.8 F600 (cut_move_dist 14.8), then extras (below), G1 E-5 F600 | DIFF (extras) |
| (stock has none) | AFC_CUT adds: SET_VELOCITY_LIMIT ACCEL=2000, PA=0 toggle, `G4 P50` before E-5, `G4 P200`, evacuate `G1 X20 F9000`, `G4 P200` after E-5, RESPOND text | DIFF |
| 3.2 then printClearGoPos | AFC park_cmd -> ADX_PARK -> `_chute_park` (z_hop/park_z of AFC_PARK not used) | MATCH |
| 3.5 cutFilament: G92 E0, F11 L60 S<type> and G1 E-60 F<type> overlapped | E-60 first (M400), then lane home_to up to 60 until sensor clear, lane NOT synced, not overlapped | DIFF |
| 2 unload speed table 600/300/200/300 | STOCK_UNLOAD same, default 600 | MATCH |
| 3.6/5.4 wait toolhead clear, F112, then F11 L70 S1200 | home_to stops on clear; `lane.move(-70)` at 20 mm/s | MATCH (lane total retract is 60 less, see D4) |
| 5.4 second cut if still filament, E0104+ | loop of 2 cuts, `E010x` error | MATCH |
| 5.3.3 Z lift z+5 (max 220) F800 + M400 | TOOL_UNLOAD z_hop 5 at 13.3 mm/s (=F798) with wait; cap is axis max-1 = 219 | MATCH (219 vs 220) |
| 5.3.1-2 save X/Y/Z/E | AFC save_pos | MATCH |
| AFC extras on unload | Quick Pull E-2 skipped (unit_unload_lane branch), form_tip off, buffer none, LANE_UNLOAD not hit (hub direct) | MATCH |
| 5.3.5 wait nozzle >= target (target>0) before flush | nothing waits (AFC returns early while printing) | MISSING |
| 5.3 no M104/M109 in host | AFC `_check_extruder_temp` is skipped only if `not print_tool_temperatures` or disable_print_temp_check; moonraker metadata can make AFC set M104/wait. In paused state (runout swap, cancel) AFC sets default_material_temps and does not restore | DIFF |
| 5.4 load: F10 L1000 S1200, checkFeeding (30 s, back 5, L500) | move_to 600+overshoot, back 5, 500+overshoot, E010x on fail | MATCH (distance 600 vs 1000) |
| load: stock no E move before flush | tool_stn/Quick moves bypassed (unit_load_lane branch), no sync_to_extruder (patched to disable) | MATCH |
| 4 flush vol / passes (1 + vol>400) | stock_flush_vol replicates alpha/RGB quirk, clamp 60..800 | MATCH |
| 3.10 first flush: M106 first, G92 E0, G1 E90 F<spd> + lane L90, F39, M400, M106 second | fan, lane synced E90 F<spd>, M400, `return_to_home` (neutral move), M106 | MATCH |
| 3.10 Brush(false): 3 s, Y220/Y230.5 x2, Y220, X52.5 F12000, Y230.5 F3000, M400 | `_brush_passes(False)` identical | MATCH |
| 3.10 second flush: M106, 3 s, G92 E0, G1 E90, M400, M106 | `_flush_second` identical | MATCH |
| 3.10 Brush(true): 3 s, G92 E0, E-3 F300, M400, G92 E0, Y passes, M400 | identical | MATCH |
| fan table first/after | FLUSH_FAN / AFTER_FAN same, speeds same | MATCH |
| fanM106 restore after passes, M400 | done | MATCH |
| 5.3.10 restore Y F12000, M400, X F12000, M400, Z F800, G92 E | AFC restore_pos: Z first (already +5), then XY diagonal at 200 mm/s, then Z at 13.3 mm/s, E rebased | DIFF (low: diagonal not Y then X) |
| IFS F23 after flush, F39 after unload | no equivalent needed; `return_to_home` moves selector to fixed 45 deg | DIFF (neutral position) |
| 5.2 start: checkPurgeOldFilament, checkPrintUnLoad | not present | MISSING |
| 5.2 start: always changeChannel(mode 1) flush even if lane already loaded | AFC skips "already loaded"; no flush | MISSING |
| 5.2 start flush at homed Z, Z not lowered | START_PRINT lowers to Z0.3 before first T0 flush; first load has no unload so no z_hop | DIFF |
| 5.2 leveling not part of print start | BED_MESH_CALIBRATE every print | extra (ours) |
| 5.5 runout: 600 mm rule, SAVE state, M25, Z+5, clearCurrentChnFilament, autoDetect same type+colour, restore MOVE_SPEED=100 | `_runout_tick`/`_runout_swap` same order; TOOL_LOAD runs while print_stats is paused so AFC changes nozzle target (see temp row) | MATCH except temp |
| 5.5 new lane empty on normal change: 11 s wait, autoDetectLoad | AFC TOOL_LOAD errors "load trigger not triggered" and pauses | MISSING |
| 5.6 pause: M25, SAVE, idle 864000, M104 S0, M106 S255, Z+5 max 220, chute, extruder off, M106 S0 | AFC_PAUSE wraps PAUSE: it lifts z_hop 5 first, then our macro lifts +5 again (total +10); AFC then sets idle timeout 36000 | DIFF |
| 5.6 resume: M104/M140, 3 s, wait temp, extruder on, chute, second flush, brush(false), fan, G90, clear_brush, restore MOVE_SPEED=100, M400, M24 | RESUME macro same order | MATCH |
| clear_brush: Y220 F3000, X78 F12000, Y230.5 F3000, X65/73 x2, X65, X78, Y220 | ADX_BRUSH: Y chute entry has no F3000 (runs F12000) | DIFF |
| 5.7 end: Z ladder, chute, cut+unload loaded lane, F39, heaters off, M18 ... | END_PRINT same ladder/chute; ADX_END_UNLOAD runs TOOL_UNLOAD which adds z_hop +5 (219 cap) first; unload speed S600 loop only if sensor still reads | DIFF (extra Z move) |
| 5.7(a) lane empty but toolhead filament: heat to type temp, clear x7 | not implemented | MISSING |
| 5.8 recovery: chute, clearAllFilament, powerOffUnLoad, changeChannel(1) | ADX_END_UNLOAD + TOOL_LOAD; no clearAllFilament | MISSING (low) |
| 5.8 chute park BEFORE Z savedZ+10, then flush, E restore, X Y F6000, Z F900 | ours lowers Z first, then parks | DIFF (order) |
| 5.8 rest (G92 E, E-1 F1000, M220, M106, M82/M83, M23/M26/M24) | identical | MATCH |
| 5.1 auto insert: F24, F10 L650 S1200, stop at sensor (max 12 s), F112, F11 L100, F23, F39 | move_to 650, back 100, return_to_home; error if sensor not hit (stock silent) | MATCH (low DIFF: error) |
| IFS 2.5/2.6 selector: 8 usteps, 140.86 deg/s, no ramp, backoff 4096, seek 16384, slots 0/90/180/270 | selector 140 deg/s accel 0, backoff 90, search 360, slot_angle 90 | MATCH |
| IFS F24 always re-homes | rehome_on_select but skipped if lane already current_selected_lane (repeat select without return_to_home) | DIFF (low) |
| IFS F39 neutral after slot N = (N-1)*90+45 | always 45 deg | DIFF |
| IFS selector off on arrival; feed left on until F112/F11 end | both disabled after every move | MATCH (safer) |
| Silk thresholds 900/3100 hold, 1001/2999 | same, hysteresis kept | MATCH |
| No auto action at boot for loaded lanes | silk callback ignored until `_afc_prep_done` | MATCH |
| Motor registers (GCONF 0x1dc, IRUN 9 vsense 0, IHOLD 0, IHOLDDELAY 10, TPOWERDOWN 128, CHOPCONF 3/4/5/1, PWM 75/23, TPWMTHRS 0, MRES 8, intpol) | all set through driver_ raw fields after the current helper; cfg values match | MATCH |
| Feed accel 700, speed 20/10 mm/s, 343.7 steps/mm | 700, 20, 4.655 | MATCH |
| E0109 roller-not-moving, driver-reset (GCONF != 0xdc) recovery, error LED PB5/PB6 | none | MISSING (low) |

## 2. Ranked DIFFs with fixes

### D1 Pause lifts Z twice (+10 instead of +5), idle timeout 36000
AFC_PAUSE (AFC_error.cmd_AFC_PAUSE) raises Z by z_hop (5) before calling our PAUSE. Our PAUSE then lifts another 5, and AFC then sets `SET_IDLE_TIMEOUT` to max(error_timeout, idle) = 36000.
```
 # ad5x_print.cfg, PAUSE macro
-  {% set z = printer.toolhead.position.z %}
   G90
-  G1 Z{[z + 5, 220]|min} F800
   M400
```
and in AFC.cfg `error_timeout: 864000`.

### D2 AFC changes nozzle target when a load/unload runs while print_stats is not "printing"
Runout swap (after BASE_PAUSE) and cancel-while-paused call TOOL_LOAD/TOOL_UNLOAD; `_check_extruder_temp` sets default_material_temps (PLA 210) and nothing restores it. Also metadata temps can drive M104 during prints. Stock never touches temperature.
```
 # AFC.cfg [AFC]
+restore_extruder_temp_on_load_or_unload: True
+disable_print_temp_check: True
```

### D3 No wait for nozzle target before the flush (stock 5.3 step 5)
```
 # AFC_IFS.py _stock_flush, first lines
+        tgt = self.printer.lookup_object("extruder").get_status(None)["target"]
+        if tgt > 0:
+            self._gcode("M109 S%.0f" % tgt)
```

### D4 Unload: lane does not retract with the extruder, parks 60 mm shallower
Stock retracts lane L60 and E-60 at the same time. Ours pulls E-60 against the idle (dragging) feed motor, then the lane moves 0.
```
 # AFC_IFS.py _retract_until_clear
-        lane.select_lane()
-        self._gcode("SAVE_GCODE_STATE NAME=_adx_extrude", "M82", "G92 E0",
-                    "G1 E%.3f F%.0f" % (-self.unload_cut_dist, speed), "M400",
-                    "RESTORE_GCODE_STATE NAME=_adx_extrude")
+        self._extrude_with_lane(lane, lane.extruder_obj, -self.unload_cut_dist, speed)
```
(`_extrude_with_lane` syncs the lane to the extruder; the home_to afterwards then returns at once.)

### D5 Cut sequence has extra dwell/moves/accel
Replace the AFC_CUT call so the stock literals run (G1 X-0.8 F600, M400, G92 E0, G1 E-5 F600, M400):
```
 # AFC_IFS.py cmd_ADX_CUT, replace the last two lines
-        params = " ".join(...)
-        self.ifs_gcode.run_script_from_command("AFC_CUT " + params)
+        cut_x = pin_x - float(cut_vars["cut_move_dist"])
+        self.ifs_gcode.run_script_from_command("\n".join([
+            "SAVE_GCODE_STATE NAME=_ad5x_cut2", "G90", "M82",
+            "G1 X%.3f F600" % cut_x, "M400", "G92 E0", "G1 E-5 F600", "M400",
+            "RESTORE_GCODE_STATE NAME=_ad5x_cut2"]))
```
(Keep AFC's cut counter by leaving `increase_cut_total` in do_tool_cut_tip_form, which still runs.)

### D6 ADX_BRUSH chute entry missing F3000
```
-                "G1 Y%.3f" % self.chute_y]
+                "G1 Y%.3f F3000" % self.chute_y]
```

### D7 First load / recovery: Z and order
START_PRINT leaves Z0.3, first T0 has no z_hop, flush happens at Z0.3. Add a lift for the no-unload case:
```
 # _stock_flush start
+        if self.old_color is None:
+            z = self.printer.lookup_object("toolhead").get_position()[2]
+            self._gcode("G90", "G1 Z%.3f F800" % min(z + 5., 220.), "M400")
```
(AFC restore_pos then returns to Z.) For recovery, in ad5x_power_loss.py call `ADX_PARK` before the `G1 Z...` line (stock parks XY first, then Z savedZ+10).

### D8 End-of-print unload adds a z_hop (+5, capped 219)
```
 # AFC_IFS.py cmd_ADX_END_UNLOAD
-        self.end_unload = True
-        try:
+        self.end_unload = True
+        hop, self.afc.z_hop = self.afc.z_hop, 0.
+        try:
             self.afc.TOOL_UNLOAD(lane, set_start_time=False)
         finally:
+            self.afc.z_hop = hop
             self.end_unload = False
```

### D9 Selector neutral position
```
 # return_to_home
-            self._move_to(self.neutral_angle)
+            idx = self.current_selected_lane.index if self.current_selected_lane else 1
+            self._move_to((idx - 1) * self.slot_angle + self.neutral_angle)
```
Optionally in select_lane drop the `current_selected_lane != lane` skip of the re-home (stock F24 always re-homes).

### D10 Missing (no fix proposed, low)
Print-start purge when lane already loaded and checkPurgeOldFilament/checkPrintUnLoad; substitute lane (same type+colour) when the new lane is empty; clearAllFilament in recovery; end-of-print heat-and-clear for empty-lane case; E0109 roller monitor; driver-reset recovery; PB5/PB6 error LED; restore XY order Y then X (AFC restore_pos is diagonal); load_feed 600 vs 1000.
