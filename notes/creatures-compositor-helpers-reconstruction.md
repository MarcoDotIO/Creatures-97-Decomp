# Creatures.exe Compositor Helper Reconstruction

## Recovered semantics
- `FUN_0040c580` performs a linear frame-set cache lookup by primary and secondary key, increments the reference count on a hit, and constructs a new frame set on a miss.
- `FUN_0040c640` decrements a frame-set reference count and destroys the set when the count reaches zero.
- `FUN_0040cb50` updates a frame entry's access serial and returns its decoded pixel buffer, invoking the decode path on demand when the entry is not yet materialized.
- `FUN_0040ce80` remaps every pixel in a decoded frame through a 256-byte palette table.
- `FUN_0040c890` applies that palette remap helper to every frame entry in a frame set.
- `FUN_0040f870` repeatedly chooses a random render-depth base in the range `[1000, 3000]` and retries when another participant already occupies any depth in its eight-slot band.

## Current reconstruction target
- Source files:
  - `reconstruction/creatures_slice/src/creatures_frame_cache.c`
  - `reconstruction/creatures_slice/src/creatures_render_depth.c`
- Public API:
  - `creatures_frame_cache_acquire`
  - `creatures_frame_set_release`
  - `creatures_frame_entry_pixels`
  - `creatures_frame_entry_apply_palette_map`
  - `creatures_frame_set_apply_palette_map`
  - `creatures_choose_unique_render_depth_base`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - a frame-cache hit that retains an existing set without allocating
  - miss and force-new paths that delegate to the frame-set constructor callback
  - reference-counted release and destroy-on-zero semantics
  - decode-on-demand pixel materialization
  - per-entry and whole-set palette remapping through a synthetic 256-byte palette map
  - render-depth collision rejection followed by a successful retry

## Limitation
- These lifts cover helper behavior immediately below the high-level body compositor.
- The object constructors and compositors that consume these helpers, especially `FUN_0040f900`, `FUN_0040f922`, `FUN_0041aa30`, and `FUN_0041aca0`, are still pending recovery.
