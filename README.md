# Creatures-97-Decomp

Decompilation and source-reconstruction work for `Creatures` (1997) and its
shipped companion executables.

## Scope

This repository contains the decompilation-facing project surface:

- `analysis/ghidra_exports/`
  Ghidra export artifacts used as the source of truth for function inventories,
  call graphs, strings, imports, and decompiler output indexing.
- `recovered_src/`
  Per-function raw decompiler output exported from Ghidra.
- `reconstruction/`
  The compilable reconstruction slice and its tests.
- `manifests/`
  Naming maps, binary inventories, and reconstruction coverage tables.
- `notes/`
  Reconstruction notes, coverage tracking, and build-verification status.
- `scripts/`
  Build and inventory helpers that are directly relevant to the decompilation
  workflow.

## Intentionally excluded

This repo does not carry local support environments or proprietary extracted
assets, including:

- full Ghidra installs and user settings
- MCP/server tooling
- VM staging helpers
- extracted game media and install trees
- build outputs and local machine state

## Current reconstruction status

The active compilable slice lives under `reconstruction/creatures_slice/`.
Recent verified `Creatures.exe` lifts include:

- `FUN_00420b20` -> `creatures_creature_start_waiting_behavior`
- `FUN_004224c0` -> `creatures_creature_update_attention_and_growth`
- `FUN_004230c0` -> `creatures_creature_rebuild_from_export_genome`
- `FUN_00422db0` -> `creatures_creature_refresh_body_assets`
- `FUN_00422aa0` -> `creatures_choose_population_balanced_sex`

See `notes/decomp-status.md` and
`notes/remaining-functions-to-humanize-and-test.md` for the running status.

## Build

Native host build:

```bash
bash scripts/build_reconstruction_native.sh
build/reconstruction_native/reconstruction_native
```

Windows cross-build:

```bash
bash scripts/build_reconstruction_windows.sh
```

## Layout rule

Recovered subsystems should be split into focused `.c` / `.h` pairs that mirror
the reconstruction source layout. Avoid rebuilding a monolithic catch-all
header.
