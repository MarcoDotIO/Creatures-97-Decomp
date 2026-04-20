# Creatures.exe Body-Assembly Recipe Reconstruction

## Recovered semantics
- `FUN_0040f900` begins by clearing the temporary sprite-file cache and builder-owned assets, then scanning the genome stream three times to recover the body-assembly recipe.
- The subtype `1` scan yields:
  - the body-variant group-base digit
  - two 32-bit body-gene values stored on the runtime object
- The subtype `2` scan fans one variant digit out across one or more body slots through the recovered static mapping table at `DAT_004360e0`.
- Group `4` in the subtype `2` scan enables the final two extended body slots, increasing the active-slot count from `12` to `14`.
- The subtype `6` scan accumulates palette-channel values and averages them per channel, defaulting untouched channels to `0x80`.
- The recipe pass also derives the packed sprite-bank entry count from the recovered 14-slot frame-count table at `DAT_00436158`.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_gene_parser.c`
- Public API:
  - `creatures_body_assembly_parse_recipe`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - subtype `1` body-gene extraction
  - subtype `2` slot-variant propagation
  - extended-slot enablement from group `4`
  - derived active-slot and total-frame-entry counts
  - averaged subtype `6` palette channels

## Limitation
- This lift covers the recipe-parsing front end of `FUN_0040f900`, not the full sprite-bank build and object-construction body.
- The larger assembly path that turns the recovered recipe into a bootable runtime creature body, especially the packed sprite-bank build and the final `FUN_0040f922` object setup, is still pending recovery.
