# Repo Layout

The repository is organized around the reconstruction pipeline rather than
around a single executable.

## Top Level

- `analysis/`
  Structured exports from Ghidra. This is the machine-readable reverse
  engineering input layer.
- `recovered_src/`
  Raw per-function decompiler output exported from Ghidra. This is the
  line-for-line starting point before human cleanup.
- `manifests/`
  Cross-cutting inventories such as binary lists, scope files, and the
  reconstruction naming map.
- `notes/`
  Human-maintained status, verification notes, and reconstruction writeups.
- `reconstruction/`
  Human-readable C code plus probe applications.
- `scripts/`
  Existing shell entry points for native, Windows, and VM workflows.
- `docs/`
  Orientation material for contributors and maintainers.

## Reconstruction Tree

- `reconstruction/creatures_slice/`
  Core portable reconstruction modules and the shared slice harness.
- `reconstruction/engine/`
  Shared runtime helpers used by higher-level probes and app surfaces.
- `reconstruction/apps/`
  Standalone probe targets and small executable surfaces built around recovered
  modules.

## Status And Tracking

The main status files are not duplicated elsewhere:

- `notes/decomp-status.md`
- `notes/build-verification.md`
- `notes/remaining-functions-to-humanize-and-test.md`
- `notes/shared-workspace.md`
- `manifests/reconstruction_naming_map.tsv`

Those files remain the authoritative status layer even after this docs
organization pass.
