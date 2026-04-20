#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${ROOT_DIR}/build/reconstruction_native"
OUT_EXE="${BUILD_DIR}/reconstruction_native"
CC="${CC:-/usr/bin/clang}"

mkdir -p "${BUILD_DIR}"

"${CC}" \
  -std=c11 \
  -Wall \
  -Wextra \
  -Werror \
  -I"${ROOT_DIR}/reconstruction/creatures_slice/include" \
  "${ROOT_DIR}"/reconstruction/creatures_slice/src/*.c \
  "${ROOT_DIR}/reconstruction/creatures_slice/tests/test_main.c" \
  -o "${OUT_EXE}"

echo "${OUT_EXE}"
