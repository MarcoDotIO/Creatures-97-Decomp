# Build Verification

## Current verified target
- A reconstruction slice now builds and runs on both macOS ARM and Windows.
- Source location: `reconstruction/creatures_slice/`
- Higher-level executable targets now build from:
  - `reconstruction/apps/creatures/`
  - `reconstruction/apps/launcher/`
  - `reconstruction/apps/remove/`
  - `reconstruction/engine/`
- Native build script: `scripts/build_reconstruction_native.sh`
- Windows build script: `scripts/build_reconstruction_windows.sh`
- VM staging/run script: `scripts/stage_and_run_creatures_slice_in_vm.sh`
- Windows 11 live-asset smoke script: `scripts/stage_and_run_creatures_reconstruction_in_vm.sh`

## Verified loop
1. Build natively on macOS ARM with `clang`.
2. Build a Windows PE on the host with the MinGW cross-compiler.
3. Stage the produced PE into `~/Downloads`, which is visible inside the Parallels guest as `C:\Mac\Home\Downloads`.
4. Execute the PE inside the running Windows VM.

## Verified result
- Native artifact: `build/reconstruction_native/reconstruction_native`
- Native execution result:
  - `creatures_slice.exe: all slice checks passed`
- Additional native artifacts now build cleanly:
  - `build/reconstruction_native/creatures_reconstruction`
  - `build/reconstruction_native/launcher_reconstruction`
  - `build/reconstruction_native/remove_reconstruction`
- Native executable-smoke results:
  - `creatures_reconstruction` passes a fixture-backed startup asset probe
  - `creatures_reconstruction` now also runs the recovered world-load bootstrap, stages `World.sfc` into `TempBu`, refreshes the recovered title and score panes against the live asset tree, and parses the live `MapData` / `CGallery` archive prefix through the next `PointerTool` class boundary
  - `launcher_reconstruction` initializes the recovered launcher registry path and enumerates pipe-delimited applets
  - `remove_reconstruction` prints the recovered uninstall cleanup plan and registry cleanup set
- Built artifact: `build/creatures_slice/creatures_slice.exe`
- Guest execution result:
  - `creatures_slice.exe: all slice checks passed`
- Additional Windows artifacts now build cleanly:
  - `build/creatures_slice/creatures_reconstruction.exe`
  - `build/creatures_slice/launcher_reconstruction.exe`
  - `build/creatures_slice/remove_reconstruction.exe`
- Windows 11 live-asset smoke result:
  - `creatures_reconstruction.exe` passes from inside the Parallels guest when staged beside the normalized live asset tree from `build/reconstruction_native/` and launched with `--genetics NORN.GNO`
  - the guest run now also exercises the recovered TempBu staging path, the recovered title and score-pane refresh callbacks, and the live `World.sfc` class-boundary parse through `PointerTool`

## What is verified so far
- The host can produce Windows PE binaries from reconstructed code.
- The host can also build and run the same reconstruction slice natively on macOS ARM.
- The Windows 11 ARM VM can run the produced x86 PE through its compatibility layer.
- A small set of recovered functions can already be turned into compilable, runnable code with provenance preserved.
- The repo now supports executable-oriented milestone targets in addition to the low-level slice harness.
- The `Creatures.exe` milestone target can already validate startup-directory seeding and required-asset discovery against a synthetic install tree.
- The `Creatures.exe` milestone target now also exercises the recovered palette bootstrap path, TempBu world staging path, first title/status refresh path, and the first archive-backed live `World.sfc` prefix parse against the staged live asset tree.
- The slice harness now also verifies the recovered fixed-size `MapData` container serializer around that world-source prefix, including its room-table, boundary-table, and embedded-object slot ordering.

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
- `FUN_00402950` with human-readable wrapper `creatures_display_surface_reset_backbuffer`
- `FUN_004029b0` with human-readable wrapper `creatures_display_surface_resize_backbuffer`
- `FUN_00402a10` with human-readable wrapper `creatures_display_surface_sync_palette_window`
- `FUN_00402a30` with human-readable wrapper `creatures_display_surface_realize_palette`
- `FUN_00402ab0` with human-readable wrapper `creatures_display_surface_prepare_and_redraw_region`
- `FUN_00402b90` with human-readable wrapper `creatures_display_surface_redraw_region`
- `FUN_00402c30` with human-readable wrapper `creatures_display_surface_present_region`
- `FUN_00402f00` with human-readable wrapper `creatures_display_surface_render_scene`
- `FUN_00403110` with human-readable wrapper `creatures_display_surface_world_to_client_rect`
- `FUN_004031e0` with human-readable wrapper `creatures_display_surface_scroll_by`
- `FUN_00403200` with human-readable wrapper `creatures_display_surface_scroll_horizontally`
- `FUN_00403230` with human-readable wrapper `creatures_display_surface_scroll_vertically`
- `FUN_00403260` with human-readable wrapper `creatures_display_surface_scroll`
- `FUN_004022a0` with human-readable wrapper `creatures_viewport_sync_scrollbars`
- `FUN_00402680` with human-readable wrapper `creatures_viewport_follow_controller_update`
- `FUN_00402700` with human-readable wrapper `creatures_viewport_follow_controller_force_recenter`
- `FUN_00406880` with human-readable wrapper `creatures_capture_centered_viewport_region`
- `FUN_00403640` with human-readable wrapper `creatures_camera_follow_seek_target`
- `FUN_00403700` with human-readable wrapper `creatures_camera_follow_set_target`
- `FUN_0040b300` with human-readable wrapper `creatures_display_intersect_wrapped_rect`
- `FUN_0040cb70` with human-readable wrapper `creatures_frame_entry_draw_clipped_to_buffer`
- `FUN_0040d1b0` with human-readable wrapper `creatures_copy_masked_pixels`
- `FUN_0040d230` with human-readable wrapper `creatures_copy_opaque_pixels`
- `FUN_00410520` with human-readable wrapper `creatures_capture_8bit_bitmap_region`
- `FUN_0041a370` with human-readable wrapper `creatures_renderable_sprite_collect_visible`
- `FUN_0041a400` with human-readable wrapper `creatures_renderable_sprite_draw`
- `FUN_00403c90` with human-readable wrapper `creatures_wing_surface_release`
- `FUN_00403cf0` with human-readable wrapper `creatures_wing_surface_create_8bit_bitmap`
- `FUN_00403dc0` with human-readable wrapper `creatures_wing_surface_refresh_palette`
- `FUN_00408760` with human-readable wrapper `creatures_audio_voice_slot_reset`
- `FUN_00408780` with human-readable wrapper `creatures_audio_output_create_primary_buffer`
- `FUN_00408960` with human-readable wrapper `creatures_audio_output_destroy`
- `FUN_00408980` with human-readable wrapper `creatures_audio_output_shutdown`
- `FUN_00409020` with human-readable wrapper `creatures_audio_output_release_registered_streams_and_slots`
- `FUN_00409050` with human-readable wrapper `creatures_audio_output_release_registered_streams`
- `FUN_004091b0` with human-readable wrapper `creatures_audio_output_release_voice_slot`
- `FUN_00409210` with human-readable wrapper `creatures_audio_output_release_owner_chain`
- `FUN_004092d0` with human-readable wrapper `creatures_audio_output_release_registered_owners`

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

## Creatures.exe registry/window-state coverage
- The shared Creatures registry bootstrap layer is now verified through:
  - `creatures_registry_bootstrap_main_handler`
  - `creatures_registry_handler_init`
  - `creatures_registry_read_value`
  - `creatures_registry_read_rect`
  - `creatures_registry_read_pair32`
  - `creatures_registry_read_or_default_rect`
  - `creatures_registry_read_or_default_pair32`
  - `creatures_registry_write_string`
  - `creatures_registry_write_rect`
  - `creatures_registry_write_pair32`
- The first boot-adjacent window-state callers above that registry layer are now verified through:
  - `creatures_window_bootstrap_placement`
  - `creatures_main_window_save_placement_and_shutdown`
  - `creatures_eye_window_save_position_and_destroy`
- The shared harness checks:
  - recovered `Millennium Interactive\\Creatures\\1.0` registry-path construction for both HKCU and HKLM
  - 16-byte `WindowPosn` read/default/write behavior
  - 8-byte `EyePosn` read/default/write behavior
  - saved-window rejection when the stored origin is outside the current screen metrics
  - main-window save suppression while the window is iconic
  - eye-window left/top persistence before the recovered destroy callback

## Creatures.exe world-file staging coverage
- The world-file staging layer above the palette bootstrap is now verified through:
  - `creatures_world_directory_delete_mask`
  - `creatures_world_directory_copy_mask`
  - `creatures_world_stage_temp_backup`
  - `creatures_world_restore_backup_to_temp`
- The shared harness checks:
  - glob-based delete and copy behavior inside world directories
  - TempBu staging order for `World.sfc`, `*.spr`, and extra file masks
  - Backup-to-TempBu restore ordering
- The milestone executable now also verifies that the recovered world-load bootstrap creates `TempBu` and stages `World.sfc` from the live asset tree.

## Creatures.exe world-source archive coverage
- The world-source archive prefix layer is now verified through:
  - `creatures_archive_read_u32`
  - `creatures_mfc_archive_read_new_class_header`
  - `creatures_mfc_archive_read_count`
  - `creatures_mfc_archive_read_cstring`
  - `creatures_mfc_archive_find_next_new_class_header`
  - `creatures_world_source_parse_header`
- The shared harness checks:
  - the `MapData` top-level class header and its two zeroed state dwords
  - the inline `CGallery` class header
  - gallery count `464`
  - fixed eight-byte gallery name `Back`
  - the first preserved descriptor bytes `04 00 00 90`
  - the next valid archive class header scan reaching `PointerTool`
- The milestone executable now also prints the live next-class boundary:
  - `next_class_offset: 0x24a7`
  - `next_class: PointerTool`

## Creatures.exe MapData archive coverage
- The fixed-size `MapData` container serializer is now verified through:
  - `creatures_map_data_archive_load`
  - `creatures_map_data_archive_save`
- The shared harness checks:
  - two leading state dwords
  - the nested gallery callback position
  - the bounded 40-record room table layout
  - the full `0x105` scanline/boundary table
  - the final 100 embedded object callback slots

## Creatures.exe selected-creature UI coverage
- The selected-creature UI/status cluster above the world-load bootstrap is now verified through:
  - `creatures_selected_creature_set`
  - `creatures_main_window_refresh_title`
  - `creatures_selected_creature_history_push`
  - `creatures_selected_creature_history_remove`
  - `creatures_status_bar_refresh_history_and_metrics`
  - `creatures_status_bar_refresh_selected_metrics`
- The shared harness checks:
  - four-slot history push and remove behavior
  - active/inactive/non-creature status-pane labeling
  - right-aligned health and score text formatting
  - title composition from the base `Creatures` caption and selected-creature name
  - selected-creature setter ordering for title refresh, eye-window handling, main-surface refresh, and final invalidation
- The milestone executable now also uses the recovered title and score-pane callbacks during the world-load bootstrap instead of no-op placeholders.

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

## Creatures.exe media-bootstrap coverage
- WinG backbuffer bootstrap is now verified through:
  - `creatures_wing_surface_create_8bit_bitmap`
  - `creatures_wing_surface_refresh_palette`
  - `creatures_wing_surface_release`
- Palette bootstrap is now verified through:
  - `creatures_palette_table_load`
  - `creatures_log_palette_seed_system_colors`
  - `creatures_palette_handle_create`
  - `creatures_palette_bootstrap`
- The shared harness checks:
  - recovered 8-bit DIB header configuration
  - recovered `PALETTE.DTA` 0x1e-byte seek and 236-entry RGB load
  - reserved low/high system-palette entry preservation
  - mid-band LOGPALETTE population for the 236 game-controlled colors
  - four-table palette bootstrap sequencing before the final palette handle create
  - palette-entry to RGBQUAD translation
  - WinG bitmap creation and selection into the backing DC
  - teardown of the retained bitmap/DC handles
- DirectSound bootstrap is now verified through:
  - `creatures_audio_voice_slot_reset`

## Creatures.exe viewport-controller coverage
- Scrollbar midpoint resynchronization is now verified through `creatures_viewport_sync_scrollbars`.
- The next follow-controller caller chain above the recovered camera integrator is now verified:
  - `creatures_viewport_follow_controller_set_mode`
  - `creatures_camera_follow_seek_target`
  - `creatures_camera_follow_set_target`
  - `creatures_viewport_handle_vertical_scroll`
  - `creatures_viewport_follow_controller_update`
  - `creatures_viewport_follow_controller_force_recenter`
- The shared harness now checks:
  - midpoint scrollbar range/position refresh for both axes
  - follow-mode demotion and whole-window invalidation on direct scrollbar movement
  - pending follow-state reset when follow mode is disabled explicitly
  - smoothed recentering on an active tracked target
  - immediate wrapped recentering when the target crosses the horizontal seam
  - the twenty-tick settle gate that promotes follow mode into active tracking
  - whole-window invalidation on forced recenter and on settle completion
  - `creatures_audio_output_create_primary_buffer`
  - `creatures_audio_output_release_registered_streams`
  - `creatures_audio_output_release_registered_streams_and_slots`
  - `creatures_audio_output_release_voice_slot`
  - `creatures_audio_output_release_owner_chain`
  - `creatures_audio_output_release_registered_owners`
  - `creatures_audio_output_shutdown`
  - `creatures_audio_output_destroy`
- The shared harness checks:
  - recovered primary-buffer descriptor values
  - cooperative-level request
  - stereo 22050 Hz 16-bit PCM format rewrite
  - ready-flag behavior on both success and format-set failure
  - active voice-slot shutdown and owner refcount drops
  - linked-owner chain release behavior
  - registered-stream release and mixer-idle notifications
  - optional self-destroy behavior on the destructor wrapper

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
