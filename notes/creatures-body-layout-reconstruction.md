# Creatures.exe Body Layout Reconstruction

## Recovered semantics
- `FUN_0040e700` is the first higher-level body-layout pass above the sprite constructors and geometry helpers.
- It reselects the active frame bands for the root sprite and every appendage sprite from the current shared selection mode.
- It uses the facing-dependent alignment chain to place the root sprite against the requested target coordinate.
- It walks each appendage chain from the root anchor table, positions every chain sprite, merges the resulting wrapped bounds, and stores the final chain-end coordinates.
- It applies a late frame override to chain `0` after the position and bounds pass completes.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_layout.c`
- Public API:
  - `creatures_body_layout_rebuild`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - root placement against a concrete target coordinate
  - chain `0` and chain `1` sprite placement
  - merged bounds across the root and appendage chains
  - recorded chain-end coordinates
  - the late frame override on chain `0`

## Limitation
- This lift covers the main body-layout pass but not the surrounding orientation/recenter wrappers.
- `FUN_0040e9e0`, `FUN_0040ea40`, `FUN_0040eb10`, `FUN_0040f900`, and `FUN_0040f922` are still pending recovery.
