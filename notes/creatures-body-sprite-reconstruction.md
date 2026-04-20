# Creatures.exe Body-Sprite Reconstruction

## Recovered semantics
- `FUN_0041a860` performs the common body-sprite base initialization and clears the frame-band selection state.
- `FUN_0041a990` derives the active frame-table band from the sprite's body-slot group and the requested selection mode, then updates the current frame index by adding the pose selector.
- `FUN_0041aa30` constructs a linked quad-table body sprite, copies ten dwords of anchor data, assigns body-slot group `1`, and selects the default frame band.
- `FUN_0041aca0` constructs the root pair-table body sprite, copies the full 10x6 paired anchor table, and stores the frame set, pose selector, and render-depth base.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_sprites.c`
- Public API:
  - `creatures_body_sprite_init_base`
  - `creatures_body_sprite_select_frame_band`
  - `creatures_body_quad_sprite_init`
  - `creatures_body_pair_sprite_init`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - base-state zeroing for the common sprite initializer
  - frame-band selection for normal, alternate, and override cases
  - quad-sprite construction, next-link preservation, and copied anchor data
  - pair-sprite construction, copied paired anchor data, and stored render-depth base

## Limitation
- These lifts cover the first runtime object layer below the main body compositor.
- The higher-level body-layout and positioning callers, especially `FUN_0040e700`, `FUN_0040f900`, and `FUN_0040f922`, are still pending recovery.
