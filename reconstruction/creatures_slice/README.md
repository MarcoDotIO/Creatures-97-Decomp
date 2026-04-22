# Creatures Slice

`reconstruction/creatures_slice/` is the main portable reconstruction surface.

## Subdirectories

- `include/`
  Public headers for recovered modules.
- `src/`
  Human-readable C implementations.
- `tests/`
  Shared slice harness entry points.

## Design Intent

This tree is kept module-oriented:

- small headers paired with focused `.c` files
- subsystem boundaries preserved where possible
- probe apps built from explicit source lists rather than giant monoliths

When in doubt, new recovered code should land here first, then be exercised from
`reconstruction/apps/`.
