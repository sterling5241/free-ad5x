# AD5X installer: what was built (2026-10-24)

The AD5X installs through the OpenCreator stack, as per-machine branches in
the shared repos ("if C5 then ..., if AD5X then ..."), never as separate AD5X
copies. The repos merge into one ecosystem; openad5x retires once the live
printer migrates to LoopScript boot.

## Repos

| Repo | AD5X work |
|---|---|
| touchscreen-installer (branch `ad5x`) | `detect_model` AD5X:0026; `kernel_supported` AD5X = no NAN_ADDR (NaN2008 kernel + userland, never poke the C5 devmem address); entware step skips the devmem when NAN_ADDR empty; `install-stack.sh` clones kalico-ad5x and copies `config-ad5x/`; `install-loopscript.sh` also overlays `loadcell` and `afc-ifs`; `installgrumpy.sh` AD5X = grumpy-ff tarball (gunzip+tar: the printer's tar cannot decompress); `flash-mcu-firmware.sh` AD5X = verify the `AD5X-kalico-*.tgz` sidecar and stage it in /usr/data for stock's updater (skips when all three boards already report the version) |
| opencreator-fs (branch `ad5x` to make) | `fs/usr/data/config-ad5x/` (proven printer config, calibration stripped, opencreator paths, moonraker.conf = C5 file + webcam); `opencreator/loadcell/loadcell.sh`, `opencreator/afc-ifs/{AFC_IFS.py,ad5x_filament_sensor.py}`; startup scripts branch on MACHINE (01-fixnan exits, 08-mcu-wake eboard-only table ttyS5 230400 — ttyS4 is the IFS there, ttyS2 has no boot stage; 10-klipper AD5X model case + seeds AFC.var; 40-grumpyscreen DISPLAY_ROTATE=0 + mmu backend afc); firmwareExe skips the coprocessor (file check) and runs openad5x's network_start on AD5X; `mcu-flash/oc-mcu-flash` machine branch (NationsCommand ttyS2 / IFS capture+request+XMODEM ttyS4 / eboard staged in mcu-flash-pending for the power-on window); `mcu-firmware/ad5x/` AD5X-mainboard.bin, AD5X-eboard.hex, AD5X-ifs.hex at kalico-ad5x 8ee87b51 (clean builds, reproducible checksums) |
| ad5x-update-creator (new repo) | builds `AD5X-kalico-<ver>-<date>.tgz` in FlashForge's stock update format from a reference stock package (vendor tools come from it, not from git) + the mcu-firmware/ad5x images under vendor filenames (AD5X.bin, ADM_App.hex, ifs.hex). Plain tar at both levels: the printer's busybox tar fails on gzip (verified). Round-trips and re-verifies itself |
| kalico-ad5x | 8ee87b51 on main (half-duplex RS485 IFS + N32 PLL reset), pushed |

## Why the stock-format firmware package

Works on a completely stock printer with FlashForge's own updater and tools:
drop the tgz in /usr/data, power-cycle twice. Boot 1: stock app_startup.sh
unpacks it, flashforge_init.sh md5-verifies and installs the control part
with the Update/UpdateM markers. Boot 2: app_startup sees the markers and
runs the control run.sh — eboard (IAPCommand, power-on bootloader window),
mainboard (NationsCommand, ROM bootloader), IFS (ifsF37 drops the app to its
bootloader, then IFSCommand) — the tools clear the markers and it reboots.
Back to stock = the same flow with an official FlashForge package. The path
survives conversion: LoopScript only replaces the firmwareExe binary.

`oc-mcu-flash` (AD5X branch) is the live-update path for an already-converted
machine; the C5 keeps its tgz-at-install / oc-mcu-flash-after split the same
way.

## Still open

- End-to-end installer test on real AD5X hardware (nothing has run it yet)
- The live printer's migration from openad5x boot to LoopScript
- Installer UI (src/) review for machine naming
- opencreator-fs tests/ not extended for AD5X
