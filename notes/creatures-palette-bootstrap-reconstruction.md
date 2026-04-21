# Creatures Palette Bootstrap Reconstruction

## Covered entries
- `FUN_00403e50` -> `creatures_palette_table_load`
- `FUN_00404220` -> `creatures_log_palette_seed_system_colors`
- `FUN_00404310` -> `creatures_palette_handle_create`
- `FUN_00405380` -> `creatures_palette_bootstrap`

## Reconstruction notes
- `PALETTE.DTA` is read with the original `0x1e` seek before the 236 RGB triples are consumed.
- Each file byte is scaled back to 8-bit space with the original `<< 2` expansion.
- The LOGPALETTE seed path preserves the original system-palette behavior:
  - zero all 256 entries
  - mark all entries `PC_NOCOLLAPSE`
  - snapshot the low 10 and high 10 system colors
  - restore flags so only the middle 236 entries remain game-controlled
- The final palette-handle create path copies the recovered RGB triples into entries `10..245`.
- The bootstrap wrapper preserves the original four-table load sequence before creating the primary palette handle from the first table.

## Verification
- Added slice coverage in `reconstruction/creatures_slice/tests/test_main.c` for:
  - exact file-open/seek/read/close sequencing
  - reserved system-color preservation
  - LOGPALETTE middle-band population
  - final palette-handle creation after four table loads
- Verified through:
  - `bash scripts/build_reconstruction_native.sh slice`
  - `./build/reconstruction_native/reconstruction_native`
  - `bash scripts/build_reconstruction_windows.sh slice`
  - `bash scripts/stage_and_run_creatures_slice_in_vm.sh`
- The executable-oriented `creatures_reconstruction` target now also exercises the recovered palette bootstrap against the staged live fixture after `scripts/normalize_reconstruction_fixture.sh` repairs the palette file placement expected by the recovered code.
