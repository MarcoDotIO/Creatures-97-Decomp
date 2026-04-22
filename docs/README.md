# Documentation Guide

This directory is the navigation layer for the repository. It is meant to make
the decompilation tree easier to browse without changing the authoritative
working paths that reconstruction work already uses.

Start here when you are orienting yourself:

- [Repo Layout](repo-layout.md): top-level map of the repository.
- [Status Guide](status-guide.md): which files are authoritative for progress,
  verification, and work coordination.
- [Building With CMake](building-with-cmake.md): the additive CMake build
  surface introduced on top of the existing shell scripts.
- [Windows VM CMake](windows-vm-cmake.md): the native Windows guest toolchain
  and host-side helper flow for testing the CMake surface in Parallels.

The current live working paths are still:

- `analysis/ghidra_exports/` for structured Ghidra exports
- `recovered_src/` for raw per-function decompiler output
- `manifests/` for inventories and naming maps
- `notes/` for progress, verification, and subsystem notes
- `reconstruction/` for human-readable C and probe apps
- `scripts/` for the existing build and VM staging helpers

This docs layer is intentionally additive. It should help contributors find the
right source of truth without forcing in-flight reconstruction work to move.
