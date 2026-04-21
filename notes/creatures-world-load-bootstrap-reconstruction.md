# Creatures World-Load Bootstrap Reconstruction

## Covered entries
- `FUN_0040bb40` -> `creatures_window_timer_start`
- `FUN_0040bb60` -> `creatures_window_timer_stop`
- `FUN_0040d150` -> `creatures_world_reset_metrics`
- `FUN_004052f0` -> `creatures_world_load_bootstrap`

## Reconstruction notes
- The recovered timer wrappers preserve the original `timer id = 1` and `interval = 0x5a` semantics.
- `creatures_world_load_bootstrap` preserves the original order:
  1. stop the main timer
  2. clear the loading flag
  3. load the world source
  4. bootstrap the palette tables/handle
  5. stage the TempBu world backup
  6. zero the four recovered world metrics and forward into the reset callback
  7. refresh the recent-creature status panes
  8. refresh the numeric score/health pane
  9. restart the main timer
  10. set the loading flag back to one
  11. refresh the window title
- The recovered function preserves the original short-circuit behavior:
  - world-load failure returns immediately after the load callback
  - palette-bootstrap failure returns immediately after the palette callback

## Verification
- Added slice coverage in `reconstruction/creatures_slice/tests/test_main.c` for:
  - timer start/stop wrappers
  - four-counter reset plus reset callback
  - successful `004052f0` orchestration order
  - world-load failure short circuit
  - palette-bootstrap failure short circuit
- Verified through:
  - `bash scripts/build_reconstruction_native.sh slice`
  - `./build/reconstruction_native/reconstruction_native`
  - `bash scripts/build_reconstruction_windows.sh slice`
  - `bash scripts/stage_and_run_creatures_slice_in_vm.sh`
