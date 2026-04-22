# Reconstruction Engine

`reconstruction/engine/` contains shared helpers that sit above the narrow
portable slice modules and below the app entry points.

Typical contents:

- asset and gallery loaders
- bootstrap/runtime helpers
- preview-window scaffolding
- registry and settings helpers
- world or archive helpers reused by multiple probes

If a helper is shared across multiple reconstructed executables or probes and
does not belong to a single binary-local slice module, it usually belongs here.
