# Creatures.exe Body Compositor Reconstruction

## Recovered semantics
- `FUN_0042da20` scans the boundary-span table and selects the span whose horizontal range contains the requested X coordinate and whose bottom edge is vertically closest to the requested Y coordinate.
- `FUN_00417f60` shifts a cached local rectangle into world space by adding the owning sprite's current X/Y position.
- `FUN_00414f10` refreshes the compositor's allowed-placement bounds from one of several source modes:
  - default/world bounds
  - unbounded sentinels
  - attached-source bounds
  - copied peer bounds
  - forced world-bounds override
- `FUN_0040f240` stores a requested target coordinate, performs an eager layout rebuild, refreshes the allowed bounds source, and then reruns the higher-level posture wrapper.
- `FUN_0040f270` translates the root sprite, every appendage chain, the requested target coordinate, cached chain-end coordinates, and both wrapped bounds rectangles.
- `FUN_0040f3d0` snapshots the previous wrapped bounds, refreshes posture at a new target coordinate, and invalidates both the previous and current compositor rectangles.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_compositor.c`
- Public API:
  - `creatures_boundary_map_find_closest_span`
  - `creatures_attached_bounds_resolve_world_rect`
  - `creatures_body_bounds_refresh_source`
  - `creatures_body_layout_set_target_and_refresh`
  - `creatures_body_layout_translate`
  - `creatures_body_layout_set_target_and_invalidate`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - nearest-span selection from a concrete boundary map
  - attached-source bounds shifted into world space
  - copied peer bounds and forced world-bounds override
  - full target-setting refresh on top of the already verified body-layout wrapper layer
  - translated root position, target coordinate, cached chain ends, and wrapped bounds
  - invalidation of both the previous and refreshed compositor rectangles

## Limitation
- This lift covers the first compositor-facing caller layer above the body-layout wrappers.
- The larger body-assembly path that constructs a full body object from the parsed gene/body-data streams, especially `FUN_0040f900` and `FUN_0040f922`, is still pending recovery.
