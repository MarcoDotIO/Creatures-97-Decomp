function(creatures_assign_source_groups target_name)
  get_target_property(target_sources "${target_name}" SOURCES)
  if(NOT target_sources)
    return()
  endif()

  set(existing_sources)
  foreach(source_file IN LISTS target_sources)
    if(EXISTS "${source_file}")
      list(APPEND existing_sources "${source_file}")
    endif()
  endforeach()

  if(existing_sources)
    source_group(
      TREE "${CMAKE_SOURCE_DIR}/reconstruction"
      PREFIX "reconstruction"
      FILES ${existing_sources})
  endif()
endfunction()

function(creatures_apply_common_settings target_name)
  target_compile_features("${target_name}" PRIVATE c_std_11)
  target_include_directories(
    "${target_name}"
    PRIVATE
      "${CMAKE_SOURCE_DIR}/reconstruction/creatures_slice/include"
      "${CMAKE_SOURCE_DIR}/reconstruction/engine/include")

  if(MSVC)
    target_compile_options("${target_name}" PRIVATE /W4)
    if(CREATURES_WARNINGS_AS_ERRORS)
      target_compile_options("${target_name}" PRIVATE /WX)
    endif()
  else()
    target_compile_options("${target_name}" PRIVATE -Wall -Wextra)
    if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
      target_compile_options("${target_name}" PRIVATE -Wno-unused-parameter)
    endif()
    if(CREATURES_WARNINGS_AS_ERRORS)
      target_compile_options("${target_name}" PRIVATE -Werror)
    endif()
    if(CREATURES_ENABLE_ASAN AND NOT CMAKE_SYSTEM_NAME STREQUAL "Windows")
      target_compile_options("${target_name}" PRIVATE -fsanitize=address -fno-omit-frame-pointer)
      target_link_options("${target_name}" PRIVATE -fsanitize=address -fno-omit-frame-pointer)
    endif()
  endif()

  set_target_properties(
    "${target_name}"
    PROPERTIES
      RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
endfunction()

function(creatures_add_reconstruction_executable target_name)
  cmake_parse_arguments(ARG "" "OUTPUT_NAME;FOLDER" "SOURCES;LIBS" ${ARGN})

  if(NOT ARG_SOURCES)
    message(FATAL_ERROR "creatures_add_reconstruction_executable(${target_name}) requires SOURCES")
  endif()

  add_executable("${target_name}" ${ARG_SOURCES})
  creatures_apply_common_settings("${target_name}")
  creatures_assign_source_groups("${target_name}")

  if(ARG_LIBS)
    target_link_libraries("${target_name}" PRIVATE ${ARG_LIBS})
  endif()

  if(ARG_OUTPUT_NAME)
    set_target_properties("${target_name}" PROPERTIES OUTPUT_NAME "${ARG_OUTPUT_NAME}")
  endif()

  if(ARG_FOLDER)
    set_target_properties("${target_name}" PROPERTIES FOLDER "${ARG_FOLDER}")
  endif()
endfunction()

function(creatures_link_win32_graphics target_name)
  if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    target_link_libraries("${target_name}" PRIVATE gdi32 user32)
  endif()
endfunction()
