# Analysis

This directory holds structured reverse-engineering exports rather than
hand-edited reconstruction code.

## `ghidra_exports/`

Each executable has its own directory containing TSV exports from Ghidra such
as:

- `functions.tsv`
- `imports.tsv`
- `exports.tsv`
- `strings.tsv`
- `callgraph.tsv`
- `decomp_index.tsv`
- `program_metadata.tsv`

Use this tree when you need machine-readable inventory data or a structured
entry point for reconciling names, counts, and binary coverage.
