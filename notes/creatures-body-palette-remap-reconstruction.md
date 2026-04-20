# Creatures.exe Body Palette-Remap Reconstruction

## Recovered semantics
- `FUN_00403fb0` builds a 256-entry channel curve from five control points by filling four 64-entry segments with signed accumulator math and truncating division.
- `FUN_00403f40` searches the 236-color body palette for the nearest RGB triplet by squared Euclidean distance.
- `FUN_00404090`:
  - derives three control-point triplets from the requested RGB digits
  - builds per-channel remap curves for red, green, and blue
  - preserves slots `0..9` and `246..255`
  - remaps the 236 body-palette colors back onto the nearest existing palette entries
  - increments the global remap-generation counter at `DAT_00435234`

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_palette_map.c`
- Public API:
  - `creatures_palette_build_channel_curve`
  - `creatures_palette_find_nearest_color`
  - `creatures_palette_build_body_remap`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - identity landmarks on a 0/64/128/192/255 channel curve
  - nearest-color lookup in a synthetic grayscale body palette
  - preserved outer identity slots
  - stable remap generation for an identity-color request
  - increment of the global remap-generation counter

## Limitation
- This lift covers the palette-remap dependency used by the higher-level body assemblers.
- The surrounding packed sprite-bank build and final body-object assembly logic in `FUN_0040f900` and `FUN_0040f922` are still pending recovery.
