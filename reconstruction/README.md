# Reconstruction

This is the human-readable reconstruction tree.

The code here is meant to be maintained and compiled, unlike the raw decompiler
output in `recovered_src/`.

## Layout

- `creatures_slice/`
  Portable recovered modules and the shared slice harness.
- `engine/`
  Shared runtime helpers and higher-level app scaffolding.
- `apps/`
  Small standalone executables and probes that exercise recovered modules.

## Build Surfaces

You can build reconstruction targets in two ways:

- shell scripts in `scripts/`
- the additive CMake layout rooted at the repository `CMakeLists.txt`

The source layout remains the same either way.
