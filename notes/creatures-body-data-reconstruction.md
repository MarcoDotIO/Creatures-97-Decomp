# Creatures.exe Body-Data Reconstruction

## Recovered semantics
- `FUN_0040b5c0` builds a `Body data\\<token><suffix>` asset path by copying a four-byte token and appending a three-character file suffix.
- `FUN_0040f590` probes body-data variants in descending row/column order and flips the group-digit offset once before giving up.
- `FUN_0040f680` resolves a matching body-data asset and parses it into a fixed-size 10x6 paired-byte table.
- `FUN_0040f770` resolves a matching body-data asset and parses it into a fixed-size 10-row four-byte table.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_data.c`
- Public API:
  - `creatures_body_data_make_token`
  - `creatures_body_data_build_path`
  - `creatures_body_data_find_existing_variant_token`
  - `creatures_body_data_load_pair_table`
  - `creatures_body_data_load_quad_table`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - direct path construction for a synthetic `Body data\\A110att` asset
  - second-pass variant resolution after the first group-digit pass fails
  - 10x6 paired-byte parsing through `creatures_body_data_load_pair_table`
  - 10-row four-byte parsing through `creatures_body_data_load_quad_table`

## Limitation
- The current lift stops at body-data token/path resolution and fixed-size text table loading.
- The higher-level creature body compositor callers around `FUN_0040f900` and `FUN_0040f922` are still pending recovery.
