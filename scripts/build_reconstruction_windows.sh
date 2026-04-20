#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${ROOT_DIR}/build/creatures_slice"
OUT_EXE="${BUILD_DIR}/creatures_slice.exe"
CC="${CC:-/opt/homebrew/bin/i686-w64-mingw32-gcc}"

mkdir -p "${BUILD_DIR}"

"${CC}" \
  -std=c11 \
  -Wall \
  -Wextra \
  -Wno-unused-parameter \
  -I"${ROOT_DIR}/reconstruction/creatures_slice/include" \
  "${ROOT_DIR}"/reconstruction/creatures_slice/src/*.c \
  "${ROOT_DIR}/reconstruction/creatures_slice/tests/test_main.c" \
  -o "${OUT_EXE}"

echo "${OUT_EXE}"
