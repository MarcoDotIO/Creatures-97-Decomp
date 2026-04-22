# Status Guide

Use these files as the primary sources of truth for repository state.

## Authoritative Files

- `notes/decomp-status.md`
  High-level narrative summary of what has already been recovered.
- `notes/build-verification.md`
  Concrete command history and smoke-check outcomes for reconstructed targets.
- `notes/remaining-functions-to-humanize-and-test.md`
  Backlog-oriented function inventory for remaining cleanup and verification.
- `notes/shared-workspace.md`
  Collaboration board for active and completed work when multiple agents are
  landing changes in parallel.
- `manifests/reconstruction_naming_map.tsv`
  Master mapping from original exports to recovered public names and status.

## How To Read Status

1. Start with `notes/decomp-status.md` to understand subsystem coverage.
2. Use `manifests/reconstruction_naming_map.tsv` to map exact functions.
3. Check `notes/build-verification.md` before changing a verified area.
4. Use `notes/shared-workspace.md` to avoid stepping on currently active work.
5. Use `notes/remaining-functions-to-humanize-and-test.md` for backlog scans.

## Scope Of The Docs Layer

This docs pass does not replace the existing status files. It only makes the
organization clearer and easier to navigate.
