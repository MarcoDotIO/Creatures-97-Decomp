# Raw Recovered Source

This directory contains the raw per-function C emitted from Ghidra exports.

Each executable is split into its own folder, and the `functions/` subdirectory
contains one file per exported/decompiled function. These files are the raw
starting point before the code is cleaned up into the human-readable
reconstruction tree.

Use `recovered_src/` when you need:

- original decompiler output
- direct comparison against cleaned reconstruction code
- exact per-function export naming and file-level provenance

Use `reconstruction/` when you need the maintained, human-readable codebase.
