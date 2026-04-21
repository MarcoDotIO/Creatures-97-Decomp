# Creatures Boot Registry Reconstruction

## Covered entries
- `FUN_00408150` -> `creatures_registry_handler_init`
- `FUN_00408300` -> `creatures_registry_read_value`
- `FUN_00408370` -> `creatures_registry_read_rect`
- `FUN_00408390` -> `creatures_registry_read_pair32`
- `FUN_00408460` -> `creatures_registry_read_or_default_rect`
- `FUN_004084c0` -> `creatures_registry_read_or_default_pair32`
- `FUN_00408550` -> `creatures_registry_write_string`
- `FUN_004085e0` -> `creatures_registry_write_rect`
- `FUN_00408620` -> `creatures_registry_write_pair32`
- `FUN_00411790` -> `creatures_window_bootstrap_placement`
- `FUN_00411ac0` -> `creatures_main_window_save_placement_and_shutdown`
- `FUN_00429000` -> `creatures_eye_window_save_position_and_destroy`
- `FUN_00429250` -> `creatures_registry_bootstrap_main_handler`

## Reconstruction notes
- The recovered registry handler keeps the original split between `HKEY_CURRENT_USER` and `HKEY_LOCAL_MACHINE`.
- The registry path is reconstructed as `SOFTWARE\\Millennium Interactive\\Creatures\\1.0`.
- `WindowPosn` persists a full 16-byte `RECT`.
- `EyePosn` persists the leading 8-byte pair used by the eye-window save/restore path.
- The recovered main-window bootstrap preserves the original screen-metric gate:
  - keep the saved rectangle only when `left < SM_CXFULLSCREEN` and `top < SM_CYFULLSCREEN`
  - otherwise reset to `(0, 0, 0x280, 0x1e0)`
- The main-window shutdown path preserves the original `IsIconic` guard before writing `WindowPosn`.

## Verification
- Added slice coverage in `reconstruction/creatures_slice/tests/test_main.c` for:
  - HKCU/HKLM key creation
  - raw string and binary registry reads
  - default writeback for missing `WindowPosn` and `EyePosn`
  - window-placement clamp/reset behavior
  - iconic main-window shutdown suppression
  - eye-window left/top writeback before destroy
- Verified through:
  - `bash scripts/build_reconstruction_native.sh slice`
  - `./build/reconstruction_native/reconstruction_native`
  - `bash scripts/build_reconstruction_windows.sh slice`
  - `bash scripts/stage_and_run_creatures_slice_in_vm.sh`
