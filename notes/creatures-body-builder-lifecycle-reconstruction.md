# Creatures.exe Body-Builder Lifecycle Reconstruction

## Recovered semantics
- `FUN_0040c0f0` finds or loads a sprite-file resource in the fixed-size LRU cache keyed by body token and loaded through the `spr` suffix.
- `FUN_0040c118` exposes the same cache behavior but constrains eviction to slots whose use-stamp is not newer than the caller's threshold.
- `FUN_0040c1f0` releases every live sprite resource in that fixed-size cache and clears the slots.
- `FUN_004102a0` releases all assembled chain sprites from tail to head, releases the root sprite, and then releases the owned frame set cached on the temporary assembled-body object.

## Current reconstruction target
- Source file: `reconstruction/creatures_slice/src/creatures_body_builder_lifecycle.c`
- Public API:
  - `creatures_sprite_file_cache_init`
  - `creatures_sprite_file_cache_acquire`
  - `creatures_sprite_file_cache_acquire_before_or_at_stamp`
  - `creatures_sprite_file_cache_flush`
  - `creatures_body_builder_release_assets`

## Verification
- Included in the shared reconstruction test harness at `reconstruction/creatures_slice/tests/test_main.c`.
- Verified natively on macOS ARM.
- Verified again as a Windows PE inside the Parallels `Windows 11` guest.
- The harness checks:
  - cache miss and hit behavior
  - threshold-constrained LRU replacement in a fully occupied cache
  - flush-time release of all live sprite resources
  - reverse-order release of linked chain sprites
  - release of the root sprite and owned frame set

## Limitation
- These lifts cover the cache and asset-release helpers directly below the higher-level body assembler.
- The larger body-assembly path that constructs a full bootable body object, especially `FUN_0040f900` and `FUN_0040f922`, is still pending recovery.
