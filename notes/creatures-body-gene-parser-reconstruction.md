# Creatures.exe Genome/Body Parser Reconstruction

## Recovered semantics
- `FUN_0041bd90` resets the active genome cursor back to the start of the loaded genome buffer.
- `FUN_0041bda0` consumes one byte and wraps it into the requested inclusive range when the source value falls outside that range.
- `FUN_0041bde0` consumes the next 32-bit little-endian word from the genome cursor.
- `FUN_0041bdf0` scans the genome stream for the next `gene` marker, skips the remaining three header words, and stops on `gend`.
- `FUN_0041bf20` applies the variant-selector filter used by the record scanner.
- `FUN_0041be70` finds the next record whose type/subtype pair matches, whose selector passes the filter, and whose sex flags admit the active cursor sex.
- The static data at `DAT_004360e0` is a five-row body-slot target map used to fan one variant digit out across one or more body slots.
- The static data at `DAT_00436158` is a 14-slot frame-count table used to size the packed sprite bank for the body assembler.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_gene_parser.c`
- Public API:
  - `creatures_gene_cursor_init`
  - `creatures_gene_cursor_reset`
  - `creatures_gene_cursor_read_bounded_byte`
  - `creatures_gene_cursor_read_u32`
  - `creatures_gene_cursor_next_entry`
  - `creatures_gene_cursor_match_switch_case`
  - `creatures_gene_cursor_seek_record`
  - `creatures_body_slot_frame_count`
  - `creatures_body_total_frame_entry_count`
  - `creatures_body_slot_variant_map_reset`
  - `creatures_body_slot_variant_map_apply_group`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - recovered slot counts and total packed-bank size
  - recovered group-to-slot mapping
  - aligned `gene`/`gend` scanning behavior
  - bounded-byte wrapping
  - selector filtering and sex-flag acceptance

## Limitation
- This lift covers the parser and recovered static data immediately below the larger body assembler.
- The higher-level assembly path that turns those parsed genome records into a full runtime body object, especially `FUN_0040f900` and `FUN_0040f922`, is still pending recovery.
