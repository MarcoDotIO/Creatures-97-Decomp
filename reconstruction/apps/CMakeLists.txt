set(RECONSTRUCTION_APPS_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RECONSTRUCTION_ROOT_DIR "${CMAKE_SOURCE_DIR}/reconstruction")

set(SLICE_TEST_MAIN "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/tests/test_main.c")

set(CORE_BINARY_TARGETS)
set(PREVIEW_TOOL_TARGETS)
set(SCIENCE_TOOL_TARGETS)
set(HEALTH_TOOL_TARGETS)
set(BREEDER_TOOL_TARGETS)

if(CREATURES_BUILD_SLICE)
  creatures_add_reconstruction_executable(
    slice
    FOLDER "apps/harness"
    OUTPUT_NAME reconstruction_native
    SOURCES
      ${CREATURES_SLICE_ALL_SOURCES}
      ${CREATURES_ENGINE_ALL_SOURCES}
      "${SLICE_TEST_MAIN}")
  creatures_link_win32_graphics(slice)
  if(BUILD_TESTING)
    add_test(NAME slice_harness COMMAND $<TARGET_FILE:slice>)
  endif()
endif()

if(CREATURES_BUILD_CORE_BINARIES)
  creatures_add_reconstruction_executable(
    creatures_app
    FOLDER "apps/core"
    OUTPUT_NAME creatures_reconstruction
    SOURCES
      ${CREATURES_SLICE_ALL_SOURCES}
      ${CREATURES_ENGINE_ALL_SOURCES}
      "${RECONSTRUCTION_APPS_DIR}/creatures/main.c")
  creatures_link_win32_graphics(creatures_app)
  list(APPEND CORE_BINARY_TARGETS creatures_app)

  creatures_add_reconstruction_executable(
    launcher_app
    FOLDER "apps/core"
    OUTPUT_NAME launcher_reconstruction
    SOURCES
      ${CREATURES_SLICE_ALL_SOURCES}
      ${CREATURES_ENGINE_ALL_SOURCES}
      "${RECONSTRUCTION_APPS_DIR}/launcher/main.c")
  creatures_link_win32_graphics(launcher_app)
  list(APPEND CORE_BINARY_TARGETS launcher_app)

  creatures_add_reconstruction_executable(
    remove_app
    FOLDER "apps/core"
    OUTPUT_NAME remove_reconstruction
    SOURCES
      ${CREATURES_SLICE_ALL_SOURCES}
      ${CREATURES_ENGINE_ALL_SOURCES}
      "${RECONSTRUCTION_APPS_DIR}/remove/main.c")
  list(APPEND CORE_BINARY_TARGETS remove_app)
endif()

if(CREATURES_BUILD_PREVIEW_TOOLS)
  creatures_add_reconstruction_executable(
    asset_window_render_app
    FOLDER "apps/preview"
    OUTPUT_NAME asset_window_render_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_frame_cache.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_asset_preview.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_palette_bootstrap.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_preview_window_host.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_sprite_blit.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_sprite_file_view.c"
      "${RECONSTRUCTION_APPS_DIR}/asset_window_render/main.c")
  creatures_link_win32_graphics(asset_window_render_app)
  list(APPEND PREVIEW_TOOL_TARGETS asset_window_render_app)

  creatures_add_reconstruction_executable(
    body_asset_preview_app
    FOLDER "apps/preview"
    OUTPUT_NAME body_asset_preview_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_slice.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_paths.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_body_data.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_body_gene_parser.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_frame_cache.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_palette_map.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_sprite_file_image.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_body_sprite_bank.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/creatures_body_bank_preview.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_asset_preview.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_palette_bootstrap.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_preview_window_host.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_sprite_blit.c"
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_sprite_file_view.c"
      "${RECONSTRUCTION_APPS_DIR}/body_asset_preview/main.c")
  creatures_link_win32_graphics(body_asset_preview_app)
  list(APPEND PREVIEW_TOOL_TARGETS body_asset_preview_app)
endif()

if(CREATURES_BUILD_SCIENCE_TOOLS)
  creatures_add_reconstruction_executable(
    science_app
    FOLDER "apps/science"
    OUTPUT_NAME science_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_kit_registry.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_cell_grid_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_cell_grid_page_lifetime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_chemical_graph_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_decision_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_dde.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_dosage_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_bitmap_buffer_runtime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_gene_page_controller.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_gene_page_sprite_host.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_gene_page_ui_helpers.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_page_gdi_helpers.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_monitor_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_serialized_band.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_serialized_band_series.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_sheet_base_lifetime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_sheet_embedded_page_host.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_sheet_root_lifetime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_sheet_runtime_controller.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_subject_session.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_tool.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_window_session.c"
      "${RECONSTRUCTION_APPS_DIR}/science/main.c")
  list(APPEND SCIENCE_TOOL_TARGETS science_app)

  creatures_add_reconstruction_executable(
    decision_page_app
    FOLDER "apps/science"
    OUTPUT_NAME decision_page_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_decision_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_dde.c"
      "${RECONSTRUCTION_APPS_DIR}/decision_page/main.c")
  list(APPEND SCIENCE_TOOL_TARGETS decision_page_app)

  creatures_add_reconstruction_executable(
    science_monitor_page_app
    FOLDER "apps/science"
    OUTPUT_NAME science_monitor_page_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_monitor_page.c"
      "${RECONSTRUCTION_APPS_DIR}/science_monitor_page/main.c")
  list(APPEND SCIENCE_TOOL_TARGETS science_monitor_page_app)

  creatures_add_reconstruction_executable(
    science_page_gdi_helpers_app
    FOLDER "apps/science"
    OUTPUT_NAME science_page_gdi_helpers_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_page_gdi_helpers.c"
      "${RECONSTRUCTION_APPS_DIR}/science_page_gdi_helpers/main.c")
  list(APPEND SCIENCE_TOOL_TARGETS science_page_gdi_helpers_app)

  creatures_add_reconstruction_executable(
    science_bitmap_buffer_runtime_app
    FOLDER "apps/science"
    OUTPUT_NAME science_bitmap_buffer_runtime_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/science_bitmap_buffer_runtime.c"
      "${RECONSTRUCTION_APPS_DIR}/science_bitmap_buffer_runtime/main.c")
  list(APPEND SCIENCE_TOOL_TARGETS science_bitmap_buffer_runtime_app)
endif()

if(CREATURES_BUILD_HEALTH_TOOLS)
  creatures_add_reconstruction_executable(
    health_monitor_page_app
    FOLDER "apps/health"
    OUTPUT_NAME health_monitor_page_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_monitor_page.c"
      "${RECONSTRUCTION_APPS_DIR}/health_monitor_page/main.c")
  list(APPEND HEALTH_TOOL_TARGETS health_monitor_page_app)

  creatures_add_reconstruction_executable(
    health_sheet_app
    FOLDER "apps/health"
    OUTPUT_NAME health_sheet_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/engine/src/creatures_kit_registry.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_add_object_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_add_object_page_presenter.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_bitmap_display_host.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_bitmap_resource_runtime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_bitmap_support_objects.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_chemistry_gauge_presenter.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_chemistry_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_registry_helper.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_root_controller_fanout.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_sheet_base_lifetime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_sheet_child_shell_lifetimes.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_subject_session.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_lobes_page.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/health_sheet_root_lifetime.c"
      "${RECONSTRUCTION_APPS_DIR}/health_sheet/main.c")
  list(APPEND HEALTH_TOOL_TARGETS health_sheet_app)
endif()

if(CREATURES_BUILD_BREEDER_TOOLS)
  creatures_add_reconstruction_executable(
    breeder_window_session_runtime_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_window_session_runtime_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_window_session_runtime.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_window_session_runtime/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_window_session_runtime_app)

  creatures_add_reconstruction_executable(
    breeder_command_response_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_command_response_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_command_response.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_command_response/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_command_response_app)

  creatures_add_reconstruction_executable(
    breeder_lifecycle_cleanup_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_lifecycle_cleanup_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_lifecycle_cleanup.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_lifecycle_cleanup/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_lifecycle_cleanup_app)

  creatures_add_reconstruction_executable(
    breeder_panel_0238_shell_lifetime_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_panel_0238_shell_lifetime_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_lifecycle_cleanup.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_panel_0238_shell_lifetime.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_panel_0238_shell_lifetime/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_panel_0238_shell_lifetime_app)

  creatures_add_reconstruction_executable(
    breeder_root_controller_bridge_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_root_controller_bridge_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_lifecycle_cleanup.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_panel_0238_shell_lifetime.c"
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_root_controller_bridge.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_root_controller_bridge/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_root_controller_bridge_app)

  creatures_add_reconstruction_executable(
    breeder_add_object_page_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_add_object_page_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_add_object_page.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_add_object_page/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_add_object_page_app)

  creatures_add_reconstruction_executable(
    breeder_panel_265c_controller_app
    FOLDER "apps/breeder"
    OUTPUT_NAME breeder_panel_265c_controller_reconstruction
    SOURCES
      "${RECONSTRUCTION_ROOT_DIR}/creatures_slice/src/breeder_panel_265c_controller.c"
      "${RECONSTRUCTION_APPS_DIR}/breeder_panel_265c_controller/main.c")
  list(APPEND BREEDER_TOOL_TARGETS breeder_panel_265c_controller_app)
endif()

if(CORE_BINARY_TARGETS)
  add_custom_target(core_binaries DEPENDS ${CORE_BINARY_TARGETS})
  set_target_properties(core_binaries PROPERTIES FOLDER "groups")
endif()

if(PREVIEW_TOOL_TARGETS)
  add_custom_target(preview_tools DEPENDS ${PREVIEW_TOOL_TARGETS})
  set_target_properties(preview_tools PROPERTIES FOLDER "groups")
endif()

if(SCIENCE_TOOL_TARGETS)
  add_custom_target(science_tools DEPENDS ${SCIENCE_TOOL_TARGETS})
  set_target_properties(science_tools PROPERTIES FOLDER "groups")
endif()

if(HEALTH_TOOL_TARGETS)
  add_custom_target(health_tools DEPENDS ${HEALTH_TOOL_TARGETS})
  set_target_properties(health_tools PROPERTIES FOLDER "groups")
endif()

if(BREEDER_TOOL_TARGETS)
  add_custom_target(breeder_tools DEPENDS ${BREEDER_TOOL_TARGETS})
  set_target_properties(breeder_tools PROPERTIES FOLDER "groups")
endif()
