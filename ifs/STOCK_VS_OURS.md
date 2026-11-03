# Stock AD5X filament handling vs our Kalico/AFC implementation

Read-only comparison (2026-10-25). Nothing was run on the printer, nothing was applied. All edits below are proposals shown as diffs.

## Legend and sources

Stock (cited by section):
- SI = `STOCK_SPEC_IFS.md` (IFS firmware 3.0.7)
- SH = `STOCK_SPEC_HOST.md` (firmwareExe 3.1.6)
- SM = `STOCK_MOTOR_DRIVE.md`, SR = `STOCK_HOST_RELEASE.md`, OM = `OUR_MOTOR_POWER.md`, N = `NOTES.md`

Ours (file:line):
- `IFS.py` = `ifs/AFC_IFS.py`
- `HW` = `ifs/AFC_Hardware-IFS.cfg`
- `MV` = `ifs/AFC_Macro_Vars.cfg` (identical to the printer mirror, checked with diff)
- `FS` = `ifs/ad5x_filament_sensor.py`
- `PRINT` = `ad5x-fs/fs/usr/data/config-ad5x/ad5x_print.cfg`
- `BASE` = same folder, `printer.base.cfg`
- `AFCCFG` = same folder, `AFC/AFC.cfg`
- `AFC.py`, `AFC_lane.py`, `AFC_extruder.py`, `AFC_functions.py` = the scratchpad copy of AFC `afc-repo/extras/` (ArmoredTurtle `5ea84ea`)
- `tmc.py` = `kalico-ad5x/klippy/extras/tmc.py`

Verdict: MATCH / DIFFERENT / MISSING.

Risk: H = hardware safety, Q = print quality or function, with level L/M/H.

## Assumptions (read first)

1. The mirror `AFCCFG` and `BASE` are the live config. `AFCCFG` has `VarFile: /usr/data/opencreator/...`, while N says the live file is `/usr/data/config/kalico/AFC/AFC.cfg`, so the mirror may be stale. In particular I assume `homing_enabled`, `home_to_tool` and `z_hop 5` are what the mirror shows.
2. "Clamped" means the selector sits on a slot (the cam presses the feed roller on that lane) and "neutral" means 45 degrees between slots (released). This comes from SI §2.5 and §1.5 (F24/F39), not from a photo.
3. The stock Z cap of 220 (SH §5.3 step 3, §5.5, §5.6, §5.7) is taken to be the physical limit. `BASE` has `[stepper_z] position_endstop 220, position_max 230`.
4. The 12 s nominal limit of the first-load F10 poll (SH §5.1) really takes 25-35 s, because each F13 poll also costs `usleep(100000)` plus a reply wait (SH conventions). This is inferred.
5. `lane.material`, `lane.color` (hex string) and `self.afc.current` exist as in the AFC copy. The diffs are not compiled.
6. Stock `CANCEL_PRINT`, `PAUSE` and `RESUME` are assumed not to be overridden elsewhere in the live `printer.cfg` (only `PRINT` and `BASE` were read).
7. Stock values are from static analysis. "Inferred" items in SI/SH remain inferred.

## Matrix

### A. IFS command protocol and states

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| A1 | Host is bus master, 115200 8N1 RS485, IFS never talks unasked, replies dropped if TX busy (SI §1.1, §1.3, §5) | Kalico MCU on the same link, half-duplex gap and hold patched in serialqueue.c and serial.c (N "Half-duplex host link") | DIFFERENT (by design) | Q-L. A lost shutdown message once left klippy waiting (N:207) |
| A2 | Command set F10/F11/F12/F13/F15/F18/F23/F24/F30/F39/F112/F37 (SI §1.4-1.5) | Not implemented. Kalico stepper, endstop and ADC primitives driven by AFC (`IFS.py`, `HW`) | MISSING (by design) | Q-M. Every protocol-level safety below depends on AFC logic instead |
| A3 | Status 5 idle / 0x7e busy-or-error / 0x7f driver-reset (SI §2.1); F10/F11 refused unless state 5 (SI §2.4) | No state machine. Moves are queued by AFC in order. Failures raise `AFC_error` (`IFS.py:233, 252, 264`) | MISSING | Q-L |
| A4 | F112 resets the planner and drops both ENs. Only way to abort an in-flight feed (SI §2.4, §1.5) | No abort. A queued `lane.move` runs to the end. Only `M112` or `SET_STEPPER_ENABLE` stops it | MISSING | H-L (stock itself calls F112 only at sensor trips) |
| A5 | Driver-reset handler: GCONF low byte != 0xdc triggers stop, re-init of both TMCs and re-home (SI §2.8, SM §1) | Kalico polls DRV_STATUS/GSTAT about once a second and shuts klippy down on OT, short or reset (`tmc.py:121-247`) | DIFFERENT (superset, fatal instead of silent) | Safe. Q-L |
| A6 | F37 enters the bootloader (SI §4) | Kalico bootloader request is planned or patched (N:188, 250). Not verified in the files I read | DIFFERENT / unverified | Q-M (re-flash path) |
| A7 | LEDs: PB5 high / PB6 low at boot, error state swaps them (SI §3.4) | `HW:6-7` boot state only; no error LED | DIFFERENT | none |
| A8 | No watchdog, no timeouts in the IFS (SI §5) | Kalico MCU: not examined | n/a | not verified |

### B. Selector homing, slots, clamp, release

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| B1 | Slot 1 at home edge (0), slots every 90 degrees, neutral +45 degrees after each (SI §2.5) | `slot_angle 90`, `neutral_angle 45`, `calculate_lobe_movement` (`IFS.py:29, 32, 299-300`) | MATCH | - |
| B2 | 6410 usteps/s = 140.86 deg/s constant, no ramp (SI §2.5) | 140 deg/s, accel 4000 (`HW:36-37`) | MATCH (close) | - |
| B3 | Home sensor PB9, 0 = triggered. If triggered at start, back off exactly 4096 steps (90 degrees), error if still triggered. Seek forward at most 16384 steps (360 degrees), error 0x7e if not found (SI §2.6) | `home_pin ^!PB9`, `home_backoff 90`, `home_search 360`, same fail checks (`HW:31`, `IFS.py:30-31, 244-270`) | MATCH | - |
| B4 | No homing at power-up. Host homes on the first F18/F24. Every F24 re-homes then moves to the slot (SI §1.5, §2.6) | Homes once at PREP, then tracks `selector_pos` open loop (`IFS.py:147-153, 272-285`) | DIFFERENT | H-M. A lost step on the cam is never corrected and the roller may press a lane half-engaged or the feed may run unclamped |
| B5 | Homing failure: host sends F15 and re-sends F24 (SH §3.3). A new F18/F24 recovers (SI §2.6) | `failed_to_home` set, `AFC_error`, re-home at the next select (`IFS.py:251-264, 273-275`) | DIFFERENT | Q-L |
| B6 | Move uses the shortest direct count difference, no wrap (SI §2.5) | `_move_to` linear from tracked position (`IFS.py:278-285`) | MATCH | - |
| B7 | Selector EN on only while stepping, off on arrival (SI §2.5, SM §2) | `select_lane` default `disable_selector=False` (`IFS.py:302`). `_move_to` never disables. Selector stays enabled for the whole print (OM §1 item 4). `BASE` `[idle_timeout] timeout:1800` plus `M18` is the only backstop | DIFFERENT | H-L (ihold 0.01 gives about 0.008 A) |
| B8 | After load and flush the lane is released: F39 to neutral, F23. Same after auto-insert and end of print (SH §3.10, §5.1, §5.7) | Lane stays clamped while printing (`AFC_functions.py:624, 650` select the loaded lane). Neutral only via `return_to_home` after unload (`IFS.py:287-297`) | MISSING | Q-M (extruder drags the clamped strand). H-L |
| B9 | F24 re-clamp before every F11/F10 retry (SH §3.7, §3.8) | None. AFC `select_lane` skips if `current_selected_lane == lane` (`IFS.py:306`) | DIFFERENT | Q-L |

### C. Sensors

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| C1 | Silk per lane: avg < 900 or > 3100 = present, 1001..2999 = absent, 900-1000 and 3000-3100 hold. 12-bit, 20-sample average (SI §3.2) | Same thresholds as fractions of 4095, 20 samples at 1 ms, report every 0.1 s (`IFS.py:22-24, 33-36, 189-200`) | MATCH | - |
| C2 | Boot state "present" for all lanes, so no insert event at boot. Insert bit sets on 0 -> 1 only (SI §3.2) | State starts `None`, first reading applied; AFC ignores insert events before `_afc_prep_done` (`AFC_lane.py:1134-1136`) | MATCH | - |
| C3 | Speed (odometer) sensors give "stall"/movement flags, F14/F40. Host raises E0109 "roller not moving" (SI §3.3, SH §6). Never stops motors | Speed pins not read at all | MISSING | Q-M. A jammed or slipping feed is never reported (H-L) |
| C4 | Toolhead fill sensor (eboard PA3): present iff `value <= 0.3 \|\| >= 0.72` (SH conventions) | `present_below 0.3`, `present_above 0.72`, ADC every 0.1 s (`FS:41-47`, `HW:9-12`) | MATCH | - |
| C5 | Cutter sensor (eboard PA2) is only reported (`query_adc.cut`); no interlock found (SH conventions) | Defined (`HW:14-17`, pressed 0.007, idle 0.516) but nothing reads it | MATCH (unused both sides) | - |
| C6 | Toolhead sensor stops the feed within about 0.2-0.3 s (F13 + sensor poll, then F112) (SH §3.8) | `fill_sensor` is an ADC, not an MCU endstop. AFC homes to `tool_endstop_name` with `pin_tool_start` unset, so `home_to` cannot resolve it (`AFC_extruder.py:226, 302-313`, `AFC_stepper.py:727-734`) | DIFFERENT / likely broken | Q-H. See T9 |

### D. Motor power

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| D1 | TMC init: GCONF 0x1dc, IRUN 9, IHOLD 0, IHOLDDELAY 10, TPOWERDOWN 128, vsense 0, spreadCycle, 8 usteps (SM §1) | Same registers after `ifs_stock_current` (`HW:57-65, 116-122`); GCONF 0x1c4 (shaft, index_otpw differ, harmless, SM §5) | MATCH after trim | - |
| D2 | IRUN 9, vsense 0 (about 0.138 A) from power-up | Startup is CS31 / vsense 1 (about 0.245 A, 1.8x current, 3.2x heat) until the delayed_gcode fires (`HW:56-57, 82, 116`; OM §2). Both `afc_welcome` (`AFCCFG`, 2 s, runs PREP and homes) and `ifs_stock_current` use `initial_duration: 2`; includes sort `AFC.cfg` before `AFC_Hardware-IFS.cfg`, so PREP probably runs first | DIFFERENT | H-M (the melted housing is consistent with this plus D4) |
| D3 | Feed EN low only while a move is queued. Stays on after F10 until F112 (host sends F112 at the sensor trip). F11 end always releases both (SM §2, SR §1-2) | Kalico auto-enables on any step and nothing disables it except explicit `do_enable(False)`. Not released after `_auto_load` (`IFS.py:215-236`), `_stock_unload` (`IFS.py:110-126`), TOOL_LOAD error returns (`AFC.py` about 1700-1815), aborted PREP (OM §1) | DIFFERENT | H-H. Backstop is `idle_timeout 1800` + `M18` (`BASE`), 30 min, and not reached while "Printing" |
| D4 | Feed motor off while printing, extruder pulls the lane (N:284) | `drive.sync_to_extruder` replaced by `do_enable(False)` (`IFS.py:86-88`) | MATCH | - |
| D5 | Registers written once at boot. Never rewritten per move (SM §1) | Kalico re-sends cached fields on every enable (`tmc.py:461, 602` per OM §2) | DIFFERENT | none (trimmed values survive) |
| D6 | Stall / overtemp never stops motors (SM §4) | Kalico shuts down on driver OT or short (`tmc.py:161-168, 247`) | DIFFERENT (safer) | - |
| D7 | Standstill: IHOLD 0 after 2.8 s + 0.22 s ramp (SM §2) | `hold_current 0.01` -> ihold 0, IHOLDDELAY 10, TPOWERDOWN 128 (`HW:58-65`) | MATCH | - |

### E. First insert / auto-load

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| E1 | Trigger: silk rising edge while not printing (SH §5.1) | `on_filament_insert` -> `_auto_load`, skipped if printing (`IFS.py:209-218`) | MATCH | - |
| E2 | Toolhead already has filament: refuse, dialog E0113 (SH §5.1) | Logs info and returns (`IFS.py:218-220`) | DIFFERENT | Q-L |
| E3 | Sequence: F24 clamp, `F10 C L650 S1200`, poll F13 about 100 ms until the toolhead sensor (limit ~12 s nominal), F112, `F11 L100 S1200`, F23, F39 (SH §5.1, SR §3a) | Clamp via `lane.move` select, 10 mm steps at 20 mm/s with 0.2 s pause, max 650 mm, then `-70` park, selector to neutral (`IFS.py:39-42, 215-236`) | DIFFERENT | Q-L. 10 mm granularity vs about 4 mm overshoot |
| E4 | Park 100 mm back from the sensor trip (SH §5.1 step 3) | `park_dist 70` (`IFS.py:42`), matched to `dist_hub 70` (`HW:95`) | DIFFERENT (deliberate) | Q-L |
| E5 | Failure: 0x7e for more than 10 polls -> E0114 and F112 (SH §5.1) | Message only (`AFC_error(..., False)`), then `finally` releases the selector only (`IFS.py:232-236`) | DIFFERENT | H-M (feed left enabled, D3) |
| E6 | Pause-time insert variant `F10 L200` (SH §5.1) | None | MISSING | Q-L |

### F. Load at print start

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| F1 | Bed heat, then nozzle to the job temperature, then `serialPrint` (SH §5.2) | `START_PRINT`: `M140`, `M104 S150`, `G28`, `M190`, bed mesh, `M109` (`PRINT:5-19`) | DIFFERENT | Q-L |
| F2 | `checkPurgeOldFilament`: if the toolhead has filament, flush `G1 E90` + brush + clear (SH §3.10, §5.2 step 4) | None | MISSING | Q-M |
| F3 | `checkPrintUnLoad`: cut and unload a stale filament or abort with E0113 (SH §5.2 step 4) | None. AFC `TOOL_LOAD` only unloads a lane AFC knows about (`AFC.py:~1500`) | MISSING | Q-M |
| F4 | `changeChannel(mode 1)`: load first lane, flush 1-2 passes, brush, fan restore, `SDCARD_CLEAR_REFUELLING` (SH §5.2 step 5) | Not in `START_PRINT`. Depends on the slicer emitting `T0` into AFC's macro | MISSING / unverified | Q-M |

### G. Toolchange sequence

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| G1 | Z lift `min(z+5, 220)` at F800 before unload (SH §5.3 step 3); restore Y, X, Z at F12000/F12000/F800 | AFC `z_hop 5` (`AFCCFG`), `move_z_pos` capped at `axis_maximum - 1` = 229 (`AFC.py:1077-1096`), speed `resume_z_speed 30` mm/s (F1800), restore Z first then XY (`AFC.py:1162-1200`) | DIFFERENT | H-M (can drive Z past 220), Q-L |
| G2 | Cut: `M400`, `G90`, `G1 Y10 F18000`, `G1 Y(CutY-7.5) F1800`, `G1 X20 F12000`, `G1 X(CutX-2.5) F600`, `G92 E0`, `G1 E-5 F600` (SH §3.2) | `ADX_CUT`: `Y10 F18000`, `Y pin_y` with no F (inherits F18000), `X pin_x+6 F12000` (`IFS.py:129-138`), then `AFC_CUT` | DIFFERENT | H-M. The Y approach is 10x faster than stock |
| G3 | Cut X position: 20 -> -0.8 (CutX 1.7 - 2.5) at F600 = 10 mm/s | `pin 14, park 6, move 14.8` -> 20 -> -0.8 (match) but fast and slow speed 200 mm/s, 85% fast fraction, dwell 50 ms, +200 ms (`MV:35, 52, 60, 68-71`; `Cut.cfg` `_DO_CUT_MOTION`) | DIFFERENT | H-M (blade/lever, X stall) / Q-M |
| G4 | `E-5 F600` after the cut at the cutter (SH §3.2) | `rip_length 5`, `rip_speed 10` (`MV:96-97`) | MATCH | - |
| G5 | No quick pull before the cut | AFC adds `E-2` at `tool_unload_speed` (`AFC.py` unload_sequence) | DIFFERENT | none |
| G6 | One cut, no dwell (SH §3.2) | `cut_count 1` (`MV:92`) | MATCH | - |
| G7 | Chute park: `X52.5 F12000`, `Y220 F12000`, `Y229+py F3000` (SH §3.1) | `_chute_park`: same, 230.5 (`IFS.py:156-166`, `MV:164`) | MATCH | - |
| G8 | Lane clamp (F24) after the park, then `F11 L60 S<type>` sent first and `G1 E-60 F<type>` immediately after, overlapping (SH §3.5) | `_stock_unload`: lane -60, then E-60 (`M400`), then lane -70, sequential (`IFS.py:116-121`) | DIFFERENT | Q-L |
| G9 | Unload speed by type: PLA 600, PETG 300, TPU 200, SILK 300, others 600 (SH §2) | Constant 10 mm/s = 600 (`IFS.py:62`, `HW:24`) | MISSING | H-L (TPU), Q-M |
| G10 | Toolchange path is `doLoadAndUnload`: poll toolhead sensor each 1 s and F112 as soon as it clears (aborts the L60), then `F11 L70 S1200`, second pass, `F11 L50 S1200` on errors (SH §5.4, SR §3b) | Copies `fourInOneUnLoad` (print-start path): fixed 60 + 70 at S600, then up to 3 x 70 more (`IFS.py:58-63, 122-125`) | DIFFERENT | Q-M (park position differs, up to 340 mm total) |
| G11 | State-5-with-filament for more than 10 polls -> second cut; still stuck -> E0104..E0107 + F39 + pause (SH §3.6, §5.4) | No second cut. After 3 retries AFC raises "Failed to unload" with `tool_max_unload_attempts 0` (`HW:34`, `AFC.py` unload_sequence) | MISSING (second cut) | Q-M |
| G12 | Load: `F10 C<new> L1000 S1200` then `checkFeeding` until the toolhead sensor (SH §5.4) | `load_sequence`: `load_then_home` dist_hub 70, creep loop only `if cur_extruder.tool_start` (`AFC.py:~1700-1735`). `tool_start` is None for the analog sensor | DIFFERENT / likely broken | Q-H. See T9 |
| G13 | Nozzle temperature: not touched by the host (comes from the file) (SH §5.3 step 5) | `_check_extruder_temp` returns without change when printing and the nozzle can extrude (`AFC.py:698-720`), but sets per-tool temps if `print_tool_temperatures` exists, and heats to `default_material_temps` if cold | MATCH (mostly) | Q-L |
| G14 | Wait for nozzle >= target, no tolerance (SH §5.3 step 5) | AFC `_wait_for_temp_within_tolerance` only when it changes temps | DIFFERENT | Q-L |

### H. Flush, brush, volume

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| H1 | Flush volume from colours: `lum`, HSV distance, `sqrt(hs^2+lumi^2+hs*lumi)`, clamped 60..800 (SH §4) | Constant `purge_length 90`, minimum 60.999; `PURGE_LENGTH` only if the caller passes it (`MV:191-195`) | MISSING | Q-M |
| H2 | Passes = `1 + (vol > 400)`; each pass is 90 (lane pushing 90) + 90 = 180 mm extruded (SH §4, §3.10) | One purge of 90 mm | MISSING | Q-M (about half stock, no pass 2) |
| H3 | First flush speed by type (`G1 E90 F`): PLA/PETG 300, TPU 100, SILK 150, others 300 (SH §2) | `purge_spd 6.5` mm/s constant = F390 (`MV:165`) | DIFFERENT | H-L (TPU/SILK 4x fast), Q-M |
| H4 | Lane pushes 90 in step with the extruder during the first flush (`F10 L90 S<spd>`) (SH §3.10) | Lane drive is off, extruder pulls alone | MISSING | Q-M |
| H5 | Brush #1 (`flushFilamentBrush(false)`): 3 s cooldown, `Y220 F12000`, `Y229+py F3000` x2, `Y220`, then `X52.5`, `Y229+py` back into the chute (SH §3.10) | `ADX_BRUSH` is the resume X-brush `clear_brush` pattern: Y220 F3000, X78, Y230.5 (F12000 inherited), X65/X73 x2, X78, Y220 (`IFS.py:176-187`) | DIFFERENT | Q-M (brush touched differently), H-L (Y230.5 entered at F12000, stock F3000) |
| H6 | Second flush `G1 E90` (3 s fan-on wait first) after brush #1 (SH §3.10) | None | MISSING | Q-M |
| H7 | Brush #2: 3 s cooldown, `G92 E0`, `G1 E-3 F300`, `M400`, `G92 E0`, then Y-brush x3 (SH §3.10) | Second `AFC_BRUSH` is the same X-brush; no retract; no cooldown (`AFC.py:1386-1424`) | MISSING (E-3) | Q-M (strings) |
| H8 | Fans: first flush `M106` by type (0 PLA, 51 PETG/TPU/SILK), after `M106 S125/102`, finally `SET_FAN_SPEED fanM106 <saved>` (SH §2, §5.3 step 9) | `AFC_POOP` sets `M106 S255`, then restores `printer.fan.speed`, undefined here -> `M106 S0` (`Poop.cfg`; no `[fan]` section in `BASE`) | DIFFERENT | Q-M (print fan off after the change) |
| H9 | `F23 C<new>` after each pass (SH §3.10) | None | MISSING | none |

### I. Timeouts, retries, errors, recovery

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| I1 | Feed to sensor: 301 polls (about 30 s), then `F11 L5 S1200`, another 30 s, then E0100..E0103 + F39 + pause (SH §3.8) | No timeout. Fixed distances only | MISSING | Q-M |
| I2 | `checkLoad` flush wait: 6 polls -> F39, 31 polls -> reclamp + `F10 L50`, then error (SH §3.9) | None | MISSING | Q-L |
| I3 | 0x7e more than 100 (feed) / 10 (load) times -> E0114 "IFS home error" (SH §3.8) | Homing failure -> `AFC_error` (`IFS.py:252, 264`) | DIFFERENT | Q-L |
| I4 | 0x7f (driver reset): `F15`, reclamp, re-send the command (SH §3.3-3.9) | None. Kalico shuts down instead (A5) | DIFFERENT | Q-L |
| I5 | Error codes E0100-E0114 dialogs (SH §6) | AFC text errors and pause | DIFFERENT | none |
| I6 | Cancel flag ends every wait; F112 sent only in listed branches (SH §5.6) | Klipper cancel only. A queued lane move still completes | DIFFERENT | H-L |

### J. Pause, runout, cancel, end of print

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| J1 | Pause: `M25`, save state, Z+5 (cap 220), `M104 S0`, `M106 S255`, park in chute, extruder off, idle timeout 864000; resume reheats, flushes, brushes (SH §5.6) | Klipper `pause_resume` + AFC `AFC_PAUSE` Z move (`AFC_error.py:249`). Nozzle stays on until `idle_timeout 1800`, no chute park | DIFFERENT | Q-M (ooze), H-L |
| J2 | Runout: 1 s after the lane silk clears; if the toolhead still has filament keep printing up to 600 mm, then pause, clear, try an auto-detect lane of the same type and colour (SH §5.5) | `handle_load_runout` -> `_perform_pause_runout` immediately (pause, optional unload) (`IFS.py:205-207`, `AFC_lane.py:1159-1198`) | DIFFERENT | Q-M (pauses with up to 600 mm of tube filament left) |
| J3 | Cancel: `CANCEL_PRINT`, then the end-of-print routine (SH §5.6-5.7) | `E-2`, heaters off, Z+5, `X52.5 Y220`, `M84`, base cancel (`PRINT` CANCEL_PRINT) | DIFFERENT | Q-L. `M84` disables the IFS motors, which is good |
| J4 | End of print: Z ladder to 100/150/200/220, chute park, cut + unload the lane, F39, F23 C1-C4, then heaters off (SH §5.7) | `E-2`, heaters off, Z+5 (cap at `axis_maximum`=230), `X52.5 Y220`, `M107`, `M84` (`PRINT:21-33`). Filament stays in the toolhead | MISSING | Q-M, H-L (Z beyond 220) |
| J5 | Power-loss recovery (SH §5.8) | None | MISSING | Q-L |

### K. Toolchange load (cross-reference)

| # | Stock behaviour | Ours | Verdict | Risk |
|---|---|---|---|---|
| T9 | See G12, C6 | `AFC.py` `load_sequence`: `homing_enabled` -> `lane.move_to(70, endstop=tool, use_homing=True)` raises "ENDSTOP could not be resolved" (`AFC_stepper.py:727-734`); with `homing_enabled False` it pushes a blind 70 mm. N shows only unload tests, no completed AFC load. The creep loop is skipped because `tool_start` is None | DIFFERENT / unverified | Q-H |

## (1) Ranked: differences that can damage hardware

1. D3 / B7 / E5: feed and selector motors stay energized after auto-load, unload, error returns and the whole print (selector). The only backstop is `idle_timeout 1800` and it never fires while "Printing". This is the most likely mechanism for the melted housing (OM §1, §4). Fix: diff P1.
2. D2: every start and restart runs the drivers at CS31 / vsense 1 (0.245 A, 3.2x stock heat) until `ifs_stock_current` fires, and PREP (homing) probably fires first. Fix: diff P2.
3. G2 / G3: cutter approach and cut at 200 mm/s and a Y approach at F18000, against stock F1800 and F600. Risk to the blade, lever, X axis and belts. Fix: diff P3.
4. G1 / J4: Z lift can exceed 220 (AFC `move_z_pos` up to 229, `END_PRINT` up to 230), stock caps at 220. Assumption 3. Fix: diff P4.
5. B4: open-loop selector, no re-home per select, no odometer stall detection (C3). A lost cam step means a half-engaged or wrong lane clamp with the feed stalling at IRUN. Fix: diff P5.
6. G9 / H3: TPU/SILK/PETG unload and flush run 2-6x stock speed (extruder grinding or clog). Fix: diff P8.
7. G10 / G11: unload retries move the lane up to 340 mm plus AFC 100 mm back-ups, with no second cut. A strand can be pulled out of the feed gear. No diff (needs an on-printer decision).
8. J1 / I6: pause leaves the nozzle hot over the print and a queued lane move cannot be aborted. No diff.

## (2) Ranked: differences that change behaviour

1. T9 / G12 / C6: AFC `TOOL_LOAD` has no feed-until-sensor step for the analog sensor (blind 70 mm or a pause on an unresolved endstop). Toolchange loads fail or under-feed. Fix: diff P6.
2. H1 / H2: purge is 90 mm instead of 180 or 360 mm by colour pair (colour contamination). Fix: diff P7.
3. H5-H7: wrong brush pattern, no second flush, no `E-3` retract, no 3 s cooldown. Fix: diff P9 (second flush stays missing).
4. B8: lane stays clamped through the print (drag on the extruder). Fix: diff P10.
5. G10 / G11: unload path and distances differ from the toolchange path in stock.
6. H8: part fan restored to 0 after every change. Fix: diff P11.
7. F2-F4 / J4: no stale-filament purge at start, no first-load in `START_PRINT`, no unload at the end of print. Fix: diff P12 for the end only.
8. J2: runout pauses at once instead of using up the tube filament.
9. G1: Z speed F1800 against F800, restore XY at 120 mm/s against 200. Fix: diff P4.
10. H4: no lane assist during the first flush.
11. E2-E4 / E6, I1-I5, J5, C3: smaller differences (park 70 against 100, timeouts, error dialogs, power-loss, odometer).

## (3) Proposed edits (not applied)

Paths are relative to `ifs/` unless noted. Diffs are against the files as read. Items marked "test" need a printer check before use.

### P1: release both motors after every move (OM §3a-c; fixes D3, B7)

```diff
--- AFC_IFS.py
+++ AFC_IFS.py
@@ def handle_connect
         drive = self.drive_stepper_obj
         drive.sync_to_extruder = lambda *args, **kwargs: drive.do_enable(False)
+        # stock: feed off after every move, selector off on arrival
+        for stp in (drive, self.selector_stepper_obj):
+            for name in ("move", "do_homing_move"):
+                def wrapped(*a, _o=getattr(stp, name), _s=stp, **k):
+                    try:
+                        return _o(*a, **k)
+                    finally:
+                        _s.do_enable(False)
+                setattr(stp, name, wrapped)
@@ def _auto_load
         finally:
+            self.drive_stepper_obj.do_enable(False)
             self.return_to_home()
@@ def select_lane
-    def select_lane(self, lane, disable_selector=False):
+    def select_lane(self, lane, disable_selector=True):
```
Test: confirm `do_enable(False)` waits for the queued move (`AFC_stepper.py:268`). The selector re-enables per call (TMC re-init, a few ms). If it cuts a move short, wrap with a `toolhead.wait_moves()` first.

Optional backstop in `AFC_Hardware-IFS.cfg` (OM §3d):
```diff
+[delayed_gcode ifs_release]
+initial_duration: 10
+gcode:
+  {% if printer.idle_timeout.state != "Printing" %}
+    SET_STEPPER_ENABLE STEPPER="AFC_stepper IFS_Drive" ENABLE=0
+    SET_STEPPER_ENABLE STEPPER="AFC_stepper IFS_Selector" ENABLE=0
+  {% endif %}
+  UPDATE_DELAYED_GCODE ID=ifs_release DURATION=15
```

### P2: trim the current before PREP (D2)

```diff
--- AFC_Hardware-IFS.cfg
 [delayed_gcode ifs_stock_current]
-initial_duration: 2
+initial_duration: 1
```
`afc_welcome` in `AFC/AFC.cfg` stays at 2 s, so the trim always runs first.

### P3: stock cut speeds (G2, G3)

```diff
--- AFC_Macro_Vars.cfg
-variable_cut_fast_move_speed      : 200        # Speed mm/s
-variable_cut_slow_move_speed      : 200        # Speed mm/s
+variable_cut_fast_move_speed      : 10         # stock G1 X F600
+variable_cut_slow_move_speed      : 10
--- AFC_IFS.py (cmd_ADX_CUT)
             "G1 Y%.3f F18000" % self.cut_approach_y,
-            "G1 Y%.3f" % pin_y,
+            "G1 Y%.3f F1800" % pin_y,
```
The cut then takes about 2.1 s for 20.8 mm, as stock. `cut_dwell_time` can stay.

### P4: Z cap 220 and stock Z speeds (G1, J4)

```diff
--- printer.base.cfg (config-ad5x)
 [stepper_z]
-position_max: 230
+position_max: 220
--- AFC/AFC.cfg
-resume_speed: 120
-resume_z_speed: 30
+resume_speed: 200
+resume_z_speed: 13.3
```
Check the live `printer.cfg` before touching `position_max`. The AFC `move_z_pos` limit becomes 219 and `END_PRINT` `zmax` becomes 220.

### P5: re-home on every select (B4; stock F24 always re-homes)

```diff
--- AFC_IFS.py
@@ __init__
+        self.rehome_on_select   = config.getboolean("rehome_on_select", True)
@@ def select_lane
-                if not self._ensure_homed():
+                if not self._ensure_homed(self.rehome_on_select):
```
Costs 1.5-3.2 s per change, the same as stock.

### P6: feed to the toolhead sensor (T9, G12, C6, I1)

AFC `load_sequence` calls a unit hook when present (`hasattr(cur_lane.unit_obj, "unit_load_lane")`).

```diff
--- AFC_IFS.py
-from extras.AFC_lane import MoveDirection, AFCMoveWarning
+from extras.AFC_lane import MoveDirection, AFCMoveWarning, AFCLaneState
@@ __init__
+        self.load_max           = config.getfloat("load_max", 650.)
+        self.load_step          = config.getfloat("load_step", 5.)
+    def unit_load_lane(self, lane, extruder):
+        fed = 0.
+        while not lane.get_toolhead_pre_sensor_state():
+            if fed >= self.load_max:
+                self.afc.error.handle_lane_failure(lane, "{}: toolhead sensor not reached after {:.0f}mm".format(lane.name, fed))
+                return False
+            lane.move(self.load_step, lane.long_moves_speed, lane.long_moves_accel)
+            fed += self.load_step
+            self.afc.reactor.pause(self.afc.reactor.monotonic() + 0.05)
+        lane.status = AFCLaneState.TOOL_LOADED
+        self.afc.save_vars()
+        self.afc.move_e_pos(extruder.tool_stn, extruder.tool_load_speed, "tool stn")
+        return True
```
The hook bypasses `load_then_home`, so the unresolved ADC endstop is not used. The `cur_lane.set_tool_loaded()` and `enable_buffer` after the `if/elif/else` in `load_sequence` still run.

### P7: stock flush volume and passes (H1, H2)

```diff
--- AFC_IFS.py
+import math, colorsys
+
+def _rgb(c):
+    c = (c or "#808080").lstrip("#")
+    return tuple(int(c[i:i+2], 16) / 255. for i in (0, 2, 4))
+
+def stock_flush_vol(src, dst):
+    h1, s1, v1 = colorsys.rgb_to_hsv(*src)
+    h2, s2, v2 = colorsys.rgb_to_hsv(*dst)
+    a1, a2 = h1 * 2 * math.pi, h2 * 2 * math.pi
+    dhs = min(math.hypot(math.cos(a1)*s1*v1 - math.cos(a2)*s2*v2,
+                         math.sin(a1)*s1*v1 - math.sin(a2)*s2*v2), 1.2)
+    ls = 0.3*src[0] + 0.59*src[1] + 0.11*src[2]
+    ld = 0.3*dst[0] + 0.59*dst[1] + 0.11*dst[2]
+    if ld >= ls:
+        lumi = (ld - ls) ** 0.7 * 560
+    else:
+        lumi = (ls - ld) * 80
+        dhs = min(dhs, 0.67*v2 + 0.33*v1)
+    hs = dhs * 230
+    return max(60, min(800, int(math.sqrt(hs*hs + lumi*lumi + hs*lumi))))
@@ def handle_connect
+        orig_change = self.afc.CHANGE_TOOL
+        def change_tool(cur_lane, purge_length=None, *a, **k):
+            old = self.afc.lanes.get(self.afc.current) if self.afc.current else None
+            if purge_length is None and old is not None:
+                vol = stock_flush_vol(_rgb(old.color), _rgb(cur_lane.color))
+                purge_length = 180. * (1 + (vol > 400))
+            return orig_change(cur_lane, purge_length, *a, **k)
+        self.afc.CHANGE_TOOL = change_tool
```
This is the clean formula, not the stock call-site quirk (SH §4: red only used as an on/off flag, blue fixed at 255). Reproduce the quirk only if exact stock numbers are wanted. `AFC_POOP` already splits into 40 mm steps.

### P8: speeds by filament type (G9, H3)

```diff
--- AFC_IFS.py
+STOCK_UNLOAD = {"PLA": 600, "PETG": 300, "TPU": 200, "SILK": 300}   # mm/min, others 600
+STOCK_FLUSH  = {"PLA": 300, "PETG": 300, "TPU": 100, "SILK": 150}   # mm/min, others 300
@@ def _stock_unload
-        lane.move(-self.unload_cut_dist, self.unload_ifs_speed, lane.short_moves_accel)
+        spd = STOCK_UNLOAD.get(str(lane.material).upper(), 600) / 60.
+        lane.move(-self.unload_cut_dist, spd, lane.short_moves_accel)
         ...
-            "G1 E-%.3f F%.0f" % (ext.tool_stn_unload, ext.tool_unload_speed * 60.),
+            "G1 E-%.3f F%.0f" % (ext.tool_stn_unload, spd * 60.),
@@ def cmd_ADX_POOP
         self._chute_park()
+        fs = STOCK_FLUSH.get(str(self.afc.function.get_current_lane_obj().material).upper(), 300) / 60.
+        self.ifs_gcode.run_script_from_command(
+            "SET_GCODE_VARIABLE MACRO=_AFC_POOP_VARS VARIABLE=purge_spd VALUE=%.3f" % fs)
```
Stock keeps the later `L70` passes at S600 (`fourInOneUnLoad`), so only the first 60 mm and `E-60` change. `get_current_lane_obj()` may be None at this point in the toolchange (the new lane is set after the load). Use the lane passed to `CHANGE_TOOL` (store `self._next_lane` in the P7 wrapper).

### P9: stock brush pattern, E-3 retract, cooldown (H5, H7)

```diff
--- AFC_IFS.py
     def cmd_ADX_POOP(self, gcmd):
+        self._brush_n = 0
         self._chute_park()
@@
     def cmd_ADX_BRUSH(self, gcmd):
-        cmds = ["SAVE_GCODE_STATE NAME=_ifs_brush", "G90",
-                "G1 Y%.3f F3000" % self.chute_y_out,
-                ...
+        self._brush_n = getattr(self, "_brush_n", 0) + 1
+        second = self._brush_n >= 2
+        yo, yi = self.chute_y_out, self.chute_y
+        cmds = ["SAVE_GCODE_STATE NAME=_ifs_brush", "G90", "G4 P3000"]
+        if second:
+            cmds += ["G92 E0", "G1 E-3 F300", "M400", "G92 E0"]
+        cmds += ["G1 Y%.3f F12000" % yo, "G1 Y%.3f F3000" % yi,
+                 "G1 Y%.3f F12000" % yo, "G1 Y%.3f F3000" % yi,
+                 "G1 Y%.3f F12000" % yo]
+        if not second:
+            cmds += ["G1 X%.3f F12000" % self.chute_x, "G1 Y%.3f F3000" % yi]
+        cmds += ["M400", "RESTORE_GCODE_STATE NAME=_ifs_brush"]
         self.ifs_gcode.run_script_from_command("\n".join(cmds))
```
Test the `G92 E0` / `RESTORE_GCODE_STATE` interaction on the printer. The second flush (E90 between the brushes) remains missing; with P7's 180 mm in one `AFC_POOP`, the total extrusion equals stock's single pass.

### P10: release the lane after the load (B8; stock F39)

```diff
--- AFC_IFS.py
@@ def handle_connect
+        orig_load = self.afc.TOOL_LOAD
+        def tool_load(*args, **kwargs):
+            ok = orig_load(*args, **kwargs)
+            if ok:
+                self.return_to_home()
+            return ok
+        self.afc.TOOL_LOAD = tool_load
```
Test only on the printer: `handle_activate_extruder` and `select_loaded_lane` (`AFC_functions.py:624, 650`) re-select the loaded lane on later events, so verify the lane is not re-clamped mid-print.

### P11: restore the part fan (H8)

```diff
--- AFC_IFS.py
     def cmd_ADX_POOP(self, gcmd):
         self._chute_park()
+        fan = self.printer.lookup_object("fan_generic fanM106", None)
+        saved = fan.get_status(self.afc.reactor.monotonic())["speed"] if fan else 0.
         params = ...
         self.ifs_gcode.run_script_from_command("AFC_POOP " + params)
+        self.ifs_gcode.run_script_from_command("SET_FAN_SPEED FAN=fanM106 SPEED=%.3f" % saved)
```

### P12: unload at the end of print (J4)

```diff
--- ad5x_print.cfg (END_PRINT)
 gcode:
   M400
   G92 E0
   G1 E-2 F600
-  TURN_OFF_HEATERS
   {% set z = printer.toolhead.position.z %}
   {% set zmax = printer.toolhead.axis_maximum.z %}
   G90
   G1 Z{[z + 5, zmax]|min} F600
   G1 X52.5 Y220 F12000
+  {% if printer.AFC.current_load is not none %}
+    TOOL_UNLOAD
+  {% endif %}
+  TURN_OFF_HEATERS
   M107
   M84
```
The nozzle must still be hot for the cut and unload, as in stock (SH §5.7 step 2 before step 3).

### Not given a diff (need a decision or a fork of AFC)

- Runout policy (J2): AFC `_perform_pause_runout` pauses at once. Matching the 600 mm rule needs a wrapper on `lane.handle_load_runout`.
- Pause (J1): AFC renames the user's `PAUSE`; reheat on resume needs the saved targets.
- Lane assist during the first flush (H4): needs a test of `lane.move` queued in parallel with `AFC_POOP` at 5 mm/s, with the IRUN hold effect noted in N:283.
- Second cut (G11), second flush (H6), odometer monitoring (C3), power-loss recovery (J5).
