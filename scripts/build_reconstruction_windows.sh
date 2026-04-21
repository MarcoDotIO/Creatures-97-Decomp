#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${ROOT_DIR}/build/creatures_slice"
CC="${CC:-/opt/homebrew/bin/i686-w64-mingw32-gcc}"
TARGET="${1:-slice}"

mkdir -p "${BUILD_DIR}"

SLICE_SOURCES=()
while IFS= read -r path; do
  SLICE_SOURCES+=("${path}")
done < <(find "${ROOT_DIR}/reconstruction/creatures_slice/src" -name '*.c' | sort)

ENGINE_SOURCES=()
while IFS= read -r path; do
  ENGINE_SOURCES+=("${path}")
done < <(find "${ROOT_DIR}/reconstruction/engine/src" -name '*.c' | sort)

build_target() {
  local target="$1"
  local output_path
  local -a sources
  local -a extra_libs=()

  case "${target}" in
    slice)
      output_path="${BUILD_DIR}/creatures_slice.exe"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/creatures_slice/tests/test_main.c"
      )
      ;;
    creatures)
      output_path="${BUILD_DIR}/creatures_reconstruction.exe"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/apps/creatures/main.c"
      )
      extra_libs=(-lgdi32 -luser32)
      ;;
    launcher)
      output_path="${BUILD_DIR}/launcher_reconstruction.exe"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/apps/launcher/main.c"
      )
      ;;
    remove)
      output_path="${BUILD_DIR}/remove_reconstruction.exe"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/apps/remove/main.c"
      )
      ;;
    *)
      echo "unknown reconstruction target: ${target}" >&2
      return 1
      ;;
  esac

  if [[ ${#extra_libs[@]} -gt 0 ]]; then
    "${CC}" \
      -std=c11 \
      -Wall \
      -Wextra \
      -Wno-unused-parameter \
      -I"${ROOT_DIR}/reconstruction/creatures_slice/include" \
      -I"${ROOT_DIR}/reconstruction/engine/include" \
      "${sources[@]}" \
      "${extra_libs[@]}" \
      -o "${output_path}"
  else
    "${CC}" \
      -std=c11 \
      -Wall \
      -Wextra \
      -Wno-unused-parameter \
      -I"${ROOT_DIR}/reconstruction/creatures_slice/include" \
      -I"${ROOT_DIR}/reconstruction/engine/include" \
      "${sources[@]}" \
      -o "${output_path}"
  fi

  echo "${output_path}"
}

if [[ "${TARGET}" == "all" ]]; then
  build_target slice
  build_target creatures
  build_target launcher
  build_target remove
else
  build_target "${TARGET}"
fi
