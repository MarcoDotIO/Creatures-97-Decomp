# Creatures.exe Layout Helper Reconstruction

## Recovered semantics
- `FUN_0040b1b0` wraps an X coordinate into Creatures' primary world-width interval by adding or subtracting one world width.
- `FUN_0040b450` merges two rectangles while accounting for wrapped horizontal world space.
- `FUN_0041a310` normalizes a body sprite's X coordinate and stores its X/Y position.
- `FUN_0041a9f0` applies a small conditional frame override on top of the sprite's already-selected frame band and optionally jumps into the extended frame bank.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_layout_helpers.c`
- Public API:
  - `creatures_wrap_world_x`
  - `creatures_merge_wrapped_bounds`
  - `creatures_body_sprite_set_position`
  - `creatures_body_sprite_apply_frame_override`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - positive and negative X-coordinate wrapping
  - ordinary and wrapped rectangle merges
  - position writes through the normalized X-coordinate path
  - conditional and extended-bank frame overrides

## Limitation
- These lifts cover the small geometry and frame-selection adapters consumed by the body-layout pass.
- The higher-level layout orchestrator `FUN_0040e700` is still pending recovery.
