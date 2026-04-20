# Creatures.exe Path Reconstruction

## Recovered semantics
- `FUN_00429920` owns the main executable's shared directory table.
- `FUN_0040b670` retries missing asset paths against the configured `CD Drive`, probes `Genetics`, and rebuilds a relative fallback path when the original asset is missing.
- When asked to seed defaults, it derives `Main Directory` from the executable path and writes the remaining relative defaults:
  - `Sounds\\`
  - `Macros\\`
  - `Palettes\\`
  - `Images\\`
  - `Genetics\\`
  - `Body data\\`
  - empty `Programs`
- It then reloads all eight directory slots from the shared settings store into the executable's in-memory directory table.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_paths.c`
- Public API:
  - `creatures_directory_config_init`
  - `creatures_refresh_directory_table`
  - `creatures_directory_slot_name`
  - `creatures_resolve_data_path`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.

## Limitation
- The current lift covers settings-backed path management and the CD-drive fallback resolver.
- The next layer up, the body-data token/path builders and fixed-size table loaders, is now recovered separately.
- The higher-level body compositor and image assembly callers are still pending recovery.
