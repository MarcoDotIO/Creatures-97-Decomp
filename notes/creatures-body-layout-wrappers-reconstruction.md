# Creatures.exe Body-Layout Wrapper Reconstruction

## Recovered semantics
- `FUN_0040e9e0` flips the facing variant when the alternate layout needs more vertical space than the current limit allows, updates the target coordinate, rebuilds the layout, and emits a `step` notification.
- `FUN_0040ea40` tries to shift the current layout horizontally into a requested interval and falls back to a centered correction when a direct left/right shift would still overflow.
- `FUN_0040eb10` sequences the wrapper layer by rebuilding the layout, applying the facing-switch heuristic, and then recentring horizontally.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_layout.c`
- Public API:
  - `creatures_body_layout_toggle_facing_if_needed`
  - `creatures_body_layout_recenter_horizontally`
  - `creatures_body_layout_refresh_posture`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - facing flip from variant `0` to variant `1`
  - emitted `step` event notification
  - target-coordinate update after the facing switch
  - successful horizontal recenter into the requested interval
  - final bounds after the full wrapper sequence

## Limitation
- These lifts cover the wrapper/control layer immediately above the body-layout pass.
- The next higher-level body assemblers, especially `FUN_0040f900` and `FUN_0040f922`, are still pending recovery.
