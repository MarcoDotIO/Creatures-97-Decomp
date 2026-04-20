# Creatures.exe Body Sprite-Bank Reconstruction

## Recovered semantics
- `FUN_0040f900` contains a higher-level loop that walks the active body slots after the genome recipe and palette map are prepared.
- For each active slot, the original:
  - resolves the best matching slot `SPR` token through the descending variant search
  - loads that slot frame bank through the normal frame-cache path
  - applies the generated palette remap to the slot frame set
  - appends the slot's frames into the temporary packed `SPR` image while recording the frame-start index for that slot
- The packed temporary bank is then reopened through the normal frame-cache path and used to construct the root and appendage sprite objects.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_sprite_bank.c`
- Public API:
  - `creatures_body_sprite_bank_build`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - slot `0` and slot `1` token resolution through the recovered body-data search helper
  - frame-start bookkeeping for those slots
  - palette-remapped frame-bank acquisition through a fake frame-cache factory
  - generation of a 36-frame two-slot temporary `SPR` image
  - final directory offsets and payload ordering
  - release of each acquired slot frame set

## Limitation
- This lift covers the temporary bank construction layer, not the full object-construction tail of `FUN_0040f900`.
- The remaining constructor portion that instantiates the root pair sprite, appendage quad chains, render-depth base, and initial posture string is still pending, along with the larger `FUN_0040f922` setup path.
