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
  The compilable reconstruction slice, shared engine scaffolding, and
  executable-oriented app targets.
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

The active low-level verification harness lives under
`reconstruction/creatures_slice/`.
Executable-oriented targets now sit alongside it under:

- `reconstruction/engine/`
  Shared settings and startup helpers for higher-level reconstructed apps.
- `reconstruction/apps/creatures/`
  The current `Creatures.exe` startup smoke target.
- `reconstruction/apps/launcher/`
  A small launcher-oriented CLI target wired to recovered launcher helpers.
- `reconstruction/apps/remove/`
  A small uninstall-plan CLI target wired to recovered `remove.exe` helpers.

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
bash scripts/build_reconstruction_native.sh slice
build/reconstruction_native/reconstruction_native
```

Windows cross-build:

```bash
bash scripts/build_reconstruction_windows.sh all
```

Windows 11 Parallels smoke run against a staged live asset tree:

```bash
bash scripts/stage_and_run_creatures_reconstruction_in_vm.sh
```

Executable smoke targets:

```bash
bash scripts/build_reconstruction_native.sh creatures
bash scripts/build_reconstruction_native.sh launcher
bash scripts/build_reconstruction_native.sh remove
```

## Layout rule

Recovered subsystems should be split into focused `.c` / `.h` pairs that mirror
the reconstruction source layout. Avoid rebuilding a monolithic catch-all
header.
