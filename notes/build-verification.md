# Build Verification

## Current verified target
- A reconstruction slice now builds and runs on both macOS ARM and Windows.
- Source location: `reconstruction/creatures_slice/`
- Native build script: `scripts/build_reconstruction_native.sh`
- Windows build script: `scripts/build_reconstruction_windows.sh`
- VM staging/run script: `scripts/stage_and_run_creatures_slice_in_vm.sh`

## Verified loop
1. Build natively on macOS ARM with `clang`.
2. Build a Windows PE on the host with the MinGW cross-compiler.
3. Stage the produced PE into `~/Downloads`, which is visible inside the Parallels guest as `C:\Mac\Home\Downloads`.
4. Execute the PE inside the running Windows VM.

## Verified result
- Native artifact: `build/reconstruction_native/reconstruction_native`
- Native execution result:
  - `creatures_slice.exe: all slice checks passed`
- Built artifact: `build/creatures_slice/creatures_slice.exe`
- Guest execution result:
  - `creatures_slice.exe: all slice checks passed`

## What is verified so far
- The host can produce Windows PE binaries from reconstructed code.
- The host can also build and run the same reconstruction slice natively on macOS ARM.
- The Windows 11 ARM VM can run the produced x86 PE through its compatibility layer.
- A small set of recovered functions can already be turned into compilable, runnable code with provenance preserved.

## Verified slice contents
- `FUN_0041d030` with human-readable wrapper `pack_color_le`
- `FUN_00428b30` with human-readable wrapper `scale_component_if_mask_matches`
- `FUN_00402300` with human-readable wrapper `update_scroll_target`
- `FUN_004042c0` with human-readable wrapper `hatchery_registry_read`
- `FUN_004045a0` with human-readable wrapper `reset_hatchery_selection_state`
- `FUN_00404860` with human-readable wrapper `build_hatchery_sound_path`
- `FUN_00406920` with human-readable wrapper `set_hatchery_communicate_value`
- `FUN_004017e0` with human-readable wrapper `remove_read_install_value`
- `FUN_00401890` with human-readable wrapper `remove_delete_files_matching_pattern`
- String-table-derived `remove.exe` reconstruction:
  - `remove_collect_install_layout`
  - `remove_build_cleanup_plan`
  - `remove_execute_cleanup_plan`
  - `remove_execute_registry_cleanup`
  - `remove_launch_uninstaller`
- `FUN_00401180` with human-readable wrapper `launcher_registry_handler_init`
- `FUN_00401410` with human-readable wrapper `launcher_registry_read_value`
- `FUN_00401470` with human-readable wrapper `launcher_registry_read_or_default`
- `FUN_004014e0` with human-readable wrapper `launcher_registry_write_string`
- `FUN_00402330` with human-readable wrapper `launcher_warn_if_low_color_depth`
- `FUN_00402b90` with human-readable wrapper `launcher_launch_applets`
- `FUN_00429920` with human-readable wrapper `creatures_refresh_directory_table`
- `FUN_0040b670` with human-readable wrapper `creatures_resolve_data_path`
- `FUN_0040b5c0` with human-readable wrapper `creatures_body_data_build_path`
- `FUN_0040f590` with human-readable wrapper `creatures_body_data_find_existing_variant_token`
- `FUN_0040f680` with human-readable wrapper `creatures_body_data_load_pair_table`
- `FUN_0040f770` with human-readable wrapper `creatures_body_data_load_quad_table`
- `FUN_0040c580` with human-readable wrapper `creatures_frame_cache_acquire`
- `FUN_0040c640` with human-readable wrapper `creatures_frame_set_release`
- `FUN_0040c890` with human-readable wrapper `creatures_frame_set_apply_palette_map`
- `FUN_0040cb50` with human-readable wrapper `creatures_frame_entry_pixels`
- `FUN_0040ce80` with human-readable wrapper `creatures_frame_entry_apply_palette_map`
- `FUN_0040f870` with human-readable wrapper `creatures_choose_unique_render_depth_base`
- `FUN_0041a860` with human-readable wrapper `creatures_body_sprite_init_base`
- `FUN_0041a990` with human-readable wrapper `creatures_body_sprite_select_frame_band`
- `FUN_0041aa30` with human-readable wrapper `creatures_body_quad_sprite_init`
- `FUN_0041aca0` with human-readable wrapper `creatures_body_pair_sprite_init`
- `FUN_0040b1b0` with human-readable wrapper `creatures_wrap_world_x`
- `FUN_0040b450` with human-readable wrapper `creatures_merge_wrapped_bounds`
- `FUN_0041a310` with human-readable wrapper `creatures_body_sprite_set_position`
- `FUN_0041a9f0` with human-readable wrapper `creatures_body_sprite_apply_frame_override`
- `FUN_0040e700` with human-readable wrapper `creatures_body_layout_rebuild`
- `FUN_0040e9e0` with human-readable wrapper `creatures_body_layout_toggle_facing_if_needed`
- `FUN_0040ea40` with human-readable wrapper `creatures_body_layout_recenter_horizontally`
- `FUN_0040eb10` with human-readable wrapper `creatures_body_layout_refresh_posture`
- `FUN_0042da20` with human-readable wrapper `creatures_boundary_map_find_closest_span`
- `FUN_00417f60` with human-readable wrapper `creatures_attached_bounds_resolve_world_rect`
- `FUN_00414f10` with human-readable wrapper `creatures_body_bounds_refresh_source`
- `FUN_0040f240` with human-readable wrapper `creatures_body_layout_set_target_and_refresh`
- `FUN_0040f270` with human-readable wrapper `creatures_body_layout_translate`
- `FUN_0040f3d0` with human-readable wrapper `creatures_body_layout_set_target_and_invalidate`
- `FUN_0041bd90` with human-readable wrapper `creatures_gene_cursor_reset`
- `FUN_0041bda0` with human-readable wrapper `creatures_gene_cursor_read_bounded_byte`
- `FUN_0041bde0` with human-readable wrapper `creatures_gene_cursor_read_u32`
- `FUN_0041bdf0` with human-readable wrapper `creatures_gene_cursor_next_entry`
- `FUN_0041bf20` with human-readable wrapper `creatures_gene_cursor_match_switch_case`
- `FUN_0041be70` with human-readable wrapper `creatures_gene_cursor_seek_record`
- `FUN_0040c0f0` with human-readable wrapper `creatures_sprite_file_cache_acquire`
- `FUN_0040c118` with human-readable wrapper `creatures_sprite_file_cache_acquire_before_or_at_stamp`
- `FUN_0040c1f0` with human-readable wrapper `creatures_sprite_file_cache_flush`
- `FUN_004102a0` with human-readable wrapper `creatures_body_builder_release_assets`

## remove.exe reconstruction coverage
- Install-path lookup recovered from the original HKLM Creatures key.
- File cleanup plan recovered into explicit glob/file targets:
  - `TempBU\\*.sfc`
  - `Backup\\*.photo album`
  - `chemicals.str`
  - `creatures.fts`
  - `creatures.gid`
  - `Images\\*.spr`
  - `Genetics\\*.gno`
  - `Genetics\\*.gen`
- Registry cleanup table recovered from `remove.exe` string anchors for document classes, CLSIDs, OLE handlers, and the uninstall key.
- The reconstructed semantics are verified through the shared native/Windows test harness.

## Launcher.exe reconstruction coverage
- Registry path construction recovered for `SOFTWARE\\<company>\\<product>\\<section>`.
- HKCU/HKLM launcher value read, write, and default-fallback behavior recovered.
- Pipe-delimited applet launch behavior recovered from the `Applets` launcher setting.
- Low-color warning behavior recovered from the launcher display-depth check.

## Creatures.exe reconstruction coverage
- Directory-table seeding recovered for:
  - `Main Directory`
  - `Sound Directory`
  - `Macro Directory`
  - `Palette Directory`
  - `Image Directory`
  - `Genetics Directory`
  - `Body Data`
  - `Programs`
- Default relative directory values recovered from the main executable string table:
  - `Sounds\\`
  - `Macros\\`
  - `Palettes\\`
  - `Images\\`
  - `Genetics\\`
  - `Body data\\`
  - empty `Programs` default
- Executable-path-driven seeding is now verified through the shared native/Windows test harness.
- Missing-file fallback through the configured `CD Drive` setting is now verified, including the retry loop that probes `Genetics` before rebuilding the requested asset path.

## Creatures.exe body-data reconstruction coverage
- Body-data asset token construction is now verified for the four-byte `family/group/row/column` naming scheme consumed by the main creature-body loaders.
- Body-data path construction is now verified for the `Body data\\<token><suffix>` layout used by `FUN_0040b5c0`.
- Variant probing is now verified for the descending row/column search order and the one-time group-digit flip recovered from `FUN_0040f590`.
- Two fixed-size text table loaders are now verified:
  - `creatures_body_data_load_pair_table` reconstructs the 10x6 paired-byte load performed by `FUN_0040f680`.
  - `creatures_body_data_load_quad_table` reconstructs the 10-row four-byte load performed by `FUN_0040f770`.
- The shared harness now checks both probe paths:
  - a second-pass body-data variant hit after the initial group-digit search fails
  - an immediate first-pass hit for the quad-table loader

## Creatures.exe compositor-helper reconstruction coverage
- Frame-set cache acquisition is now verified for the linear `primary_key` / `secondary_key` lookup path that increments the reference count on a hit and delegates construction on a miss.
- Frame-set release is now verified for the decrement-and-destroy behavior recovered from `FUN_0040c640`.
- Frame-entry pixel access is now verified for the access-serial stamp update and decode-on-demand behavior recovered from `FUN_0040cb50` / `FUN_0040ceb0`.
- Palette remapping is now verified at two levels:
  - `creatures_frame_entry_apply_palette_map` remaps a single frame through a 256-byte palette table.
  - `creatures_frame_set_apply_palette_map` iterates an entire frame set and remaps each entry.
- The compositor's random depth chooser is now verified for the collision-and-retry loop recovered from `FUN_0040f870`, including rejection of an occupied eight-slot depth band.

## Creatures.exe body-sprite construction coverage
- The common body-sprite base initializer is now verified for the reset of frame-band state and pose-selection state.
- The frame-band selection helper is now verified for:
  - group-driven band selection
  - alternate band selection for mode `3`
  - the special overrides for body-slot groups `4` and `5`
- Two object-construction paths that sit directly under the main body compositor are now verified:
  - `creatures_body_quad_sprite_init` copies the 10-row quad anchor table, links the next sprite, assigns body-slot group `1`, and selects the default frame band.
  - `creatures_body_pair_sprite_init` copies the 10x6 paired anchor table and stores the frame set, pose selector, and render-depth base.

## Creatures.exe layout-helper coverage
- Wrapped X-coordinate normalization is now verified against the one-world-width adjustment recovered from `FUN_0040b1b0`.
- Sprite position writes are now verified through `creatures_body_sprite_set_position`, which normalizes X before storing the X/Y pair.
- Wrapped-rectangle merging is now verified for:
  - ordinary left/top/right/bottom union
  - wrapped horizontal spans that already cover the second rectangle
- The compositor's small post-band frame override is now verified for both:
  - the conditional increment path
  - the extended-bank jump that adds `13` to the selected frame

## Creatures.exe body-layout pass coverage
- The first higher-level body-layout pass is now verified through `creatures_body_layout_rebuild`, which reconstructs the control flow of `FUN_0040e700`.
- The verified pass now covers:
  - reselection of the root and appendage frame bands from the shared selection mode
  - root placement against the requested layout target using the facing-dependent alignment chain
  - appendage-chain placement from the root anchor table
  - merged wrapped bounds across the root sprite and its chain sprites
  - stored chain-end coordinates for all six appendage groups
  - the late frame override applied to chain `0`

## Creatures.exe body-layout wrapper coverage
- The facing-switch wrapper is now verified through `creatures_body_layout_toggle_facing_if_needed`, including:
  - alternate-facing target selection
  - vertical-limit comparison
  - rebuild after the facing flip
  - emitted `step` notification
- The horizontal recenter wrapper is now verified through `creatures_body_layout_recenter_horizontally`, including:
  - direct corrective shift when the current bounds can be moved into the interval cleanly
  - `horizontal_shift_fits` tracking
- The full wrapper sequence from `FUN_0040eb10` is now verified through `creatures_body_layout_refresh_posture`, which runs:
  - the main layout rebuild
  - the facing-switch heuristic
  - the horizontal recenter pass

## Creatures.exe compositor wrapper coverage
- The terrain-span chooser is now verified through `creatures_boundary_map_find_closest_span`, including:
  - horizontal containment filtering against the requested source X coordinate
  - vertical nearest-span selection using the candidate bottom edge
- Attached-world bounds are now verified through `creatures_attached_bounds_resolve_world_rect`, which shifts cached local bounds by an owning sprite's current X/Y pair.
- The bounds-source multiplexer is now verified through `creatures_body_bounds_refresh_source`, including:
  - boundary-map driven default bounds
  - attached-source bounds
  - copied peer bounds
  - forced world-bounds override
- The first compositor-facing callers above the body-layout wrappers are now verified through:
  - `creatures_body_layout_set_target_and_refresh`
  - `creatures_body_layout_translate`
  - `creatures_body_layout_set_target_and_invalidate`
- The shared harness checks:
  - refreshed allowed bounds before the posture pass
  - translated root position, target coordinate, chain-end coordinates, and wrapped bounds
  - invalidation of both the previous and refreshed compositor rectangles

## Creatures.exe genome/body parser coverage
- The genome cursor reset/read helpers are now verified through:
  - `creatures_gene_cursor_reset`
  - `creatures_gene_cursor_read_bounded_byte`
  - `creatures_gene_cursor_read_u32`
  - `creatures_gene_cursor_next_entry`
  - `creatures_gene_cursor_match_switch_case`
  - `creatures_gene_cursor_seek_record`
- The static body-assembly tables consumed by `FUN_0040f900` are now modeled through:
  - `creatures_body_slot_frame_count`
  - `creatures_body_total_frame_entry_count`
  - `creatures_body_slot_variant_map_reset`
  - `creatures_body_slot_variant_map_apply_group`
- The shared harness checks:
  - the recovered per-slot frame counts and total-entry sums
  - group-to-slot variant propagation from the recovered static mapping table
  - aligned `gene`/`gend` scanning semantics
  - selector filtering and sex-flag acceptance in the record seeker

## Creatures.exe body-assembly recipe coverage
- The first higher-level `FUN_0040f900` recipe pass is now verified through:
  - `creatures_body_assembly_parse_recipe`
- The shared harness checks:
  - body-variant group-base recovery from subtype `1`
  - 32-bit body-gene value recovery from subtype `1`
  - subtype `2` slot-variant propagation into the 14-slot variant table
  - extended-slot enablement from group `4`
  - total active-slot and packed-frame-entry counts derived from the recovered slot tables
  - averaged palette-channel extraction from subtype `6`

## Creatures.exe palette-remap coverage
- The per-channel curve builder is now verified through:
  - `creatures_palette_build_channel_curve`
- The nearest-body-palette search is now verified through:
  - `creatures_palette_find_nearest_color`
- The shared body palette-remap builder is now verified through:
  - `creatures_palette_build_body_remap`
- The shared harness checks:
  - recovered control-point landmarks on an identity channel curve
  - nearest-color selection against a synthetic grayscale body palette
  - preserved identity slots `0..9` and `246..255`
  - stable remap generation for an identity-color request
  - increment of the global remap-generation counter

## Creatures.exe temporary SPR image coverage
- The temporary sprite-file image size arithmetic is now verified through:
  - `creatures_sprite_file_image_size`
- The temporary sprite-file writer is now verified through:
  - `creatures_sprite_file_writer_init`
  - `creatures_sprite_file_writer_append_frame`
  - `creatures_sprite_file_writer_finalize`
- The shared harness checks:
  - recovered total image size for a two-frame payload
  - zeroed outer count field and inner reserved header field during initialization
  - 8-byte per-frame directory entry layout
  - payload offsets relative to the post-count blob base
  - little-endian width/height storage
  - sequential pixel payload packing
  - final little-endian frame-count writeback

## Creatures.exe body-bank assembly coverage
- The first executable body-bank assembler layer above the recipe parser is now verified through:
  - `creatures_body_sprite_bank_build`
- The shared harness checks:
  - per-slot `SPR` token resolution through the recovered descending variant search
  - per-slot frame-start bookkeeping for slot `0` and slot `1`
  - palette-remapped frame-bank acquisition through the normal frame-cache path
  - packed temporary `SPR` image generation for a 36-frame two-slot bank
  - final image size, directory offsets, and payload ordering
  - release of each acquired frame set after packing

## Creatures.exe body-sprite constructor coverage
- The constructor tail that turns the packed body bank into the root and appendage sprite graph is
  now verified through:
  - `creatures_body_layout_construct_sprites`
- The table-loading wrapper above that constructor tail is now verified through:
  - `creatures_body_layout_load_and_construct_sprites`
- The immediate pose-applying tail above that wrapper is now verified through:
  - `creatures_body_layout_load_construct_and_apply_pose_string`
- The shared harness checks:
  - root pair-sprite construction from slot `1`
  - recovered fixed chain topology:
    - chain `0`: slot `0`
    - chain `1`: slots `2 -> 3 -> 4`
    - chain `2`: slots `5 -> 6 -> 7`
    - chain `3`: slots `8 -> 9`
    - chain `4`: slots `10 -> 11`
    - chain `5`: slots `12 -> 13`
  - per-slot pose-selector assignment from the slot frame-start table
  - linkage order from head to tail in each constructed appendage chain
  - root render-depth base and root slot-group initialization
  - root `ATT` anchor loading and per-slot `QAD` anchor loading through the recovered body-data resolver
  - copied anchor contents in the constructed sprite graph after loading through the real text-table path
  - immediate application of the stored 15-byte pose string on top of the freshly reconstructed graph

## Creatures.exe pose-string wrapper coverage
- The selection-mode chain-group applier is now verified through:
  - `creatures_body_layout_apply_selection_mode`
- The higher-level pose-string wrapper is now verified through:
  - `creatures_body_layout_apply_pose_string`
- The shared harness checks:
  - chain body-slot-group reassignment from the recovered signed delta table at `DAT_00436000`
  - root and appendage pose-digit application from the 15-character posture string
  - stored non-`X` posture digits in the runtime pose-string buffer
  - full wrapper sequencing through the existing posture refresh path after the pose update

## Creatures.exe body-builder lifecycle coverage
- The sprite-file cache is now verified through:
  - `creatures_sprite_file_cache_acquire`
  - `creatures_sprite_file_cache_acquire_before_or_at_stamp`
  - `creatures_sprite_file_cache_flush`
- The temporary body-builder asset cleanup path is now verified through
  - `creatures_body_builder_release_assets`
- The shared harness checks:
  - cache hit behavior without a reload
  - threshold-constrained LRU replacement in a fully occupied cache
  - flush-time release of all live sprite resources
  - reverse-order chain release from tail to head
  - release of the root sprite and owned frame set

## Creatures.exe higher-level body refresh coverage
- The first higher-level caller above the body builder is now verified through:
  - `creatures_creature_refresh_body_assets`
- The automatic sex-balancing helper used by the larger constructor path is now verified through:
  - `creatures_choose_population_balanced_sex`
- The shared harness checks:
  - genome/body scratch-state initialization sequencing
  - optional default-seed preparation only for non-variant bodies
  - body-build, appearance-apply, runtime-apply, and voice-assign call order
  - male, female, and grendel voice token selection
  - population-biased sex choice toward the underrepresented non-excluded side
  - empty-population fallback to a parity split from the random source

## Creatures.exe higher-level creature lifecycle coverage
- The waiting-behavior bootstrap above the body-refresh path is now verified through:
  - `creatures_creature_start_waiting_behavior`
- The runtime attention/growth updater is now verified through:
  - `creatures_creature_update_attention_and_growth`
- The imported-genome rebuild path is now verified through:
  - `creatures_creature_rebuild_from_export_genome`
- The shared harness checks:
  - seeding of the recovered sixteen primary and three auxiliary behavior-script slots with reset state codes
  - stage-0 body bootstrap into stage `1` plus queued emission of the literal `WAIT FOR 40 SECS!` script line
  - signed orientation-delta splitting, focus-target clearing/reacquisition, target-distance biasing, and enabled body-stage advancement
  - both stage-boundary finalization and force-finalize control flow in the growth updater
  - duplicate-identity regeneration during imported-genome rebuild, imported placement at the recovered fixed world coordinates, bounds-refresh sequencing, and final global event notification

## Important limitation
- This is not yet a whole-program build of `Creatures.exe`.
- The exported Ghidra output is still mostly raw decompiler text, with unresolved globals, labels, anonymous types, and MFC/runtime boundaries.
- The current verified slice proves the reconstruction workflow, not full binary equivalence.

## Next scaling step
- Convert the larger constructor and state-management callers above the recovered creature lifecycle wrappers, especially the full `FUN_00422aa0` constructor path and the surrounding import/export plumbing, into compilable slices.
- Replace `DAT_` / `FUN_` / ordinal-driven surfaces with named structures and interfaces as each slice becomes buildable.
- Push the verification boundary outward from isolated loaders into executable subsystems that assemble images, animation tables, and creature body state.
