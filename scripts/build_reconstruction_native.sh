#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${ROOT_DIR}/build/reconstruction_native"
CC="${CC:-/usr/bin/clang}"
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

  case "${target}" in
    slice)
      output_path="${BUILD_DIR}/reconstruction_native"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/creatures_slice/tests/test_main.c"
      )
      ;;
    creatures)
      output_path="${BUILD_DIR}/creatures_reconstruction"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/apps/creatures/main.c"
      )
      ;;
    launcher)
      output_path="${BUILD_DIR}/launcher_reconstruction"
      sources=(
        "${SLICE_SOURCES[@]}"
        "${ENGINE_SOURCES[@]}"
        "${ROOT_DIR}/reconstruction/apps/launcher/main.c"
      )
      ;;
    remove)
      output_path="${BUILD_DIR}/remove_reconstruction"
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

  "${CC}" \
    -std=c11 \
    -Wall \
    -Wextra \
    -Werror \
    -I"${ROOT_DIR}/reconstruction/creatures_slice/include" \
    -I"${ROOT_DIR}/reconstruction/engine/include" \
    "${sources[@]}" \
    -o "${output_path}"

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
