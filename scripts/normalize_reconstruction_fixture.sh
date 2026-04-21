#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
FIXTURE_ROOT="${1:-${ROOT_DIR}/build/reconstruction_native}"
PALETTE_DIR="${FIXTURE_ROOT}/Palettes"
TARGET_PALETTE="${PALETTE_DIR}/PALETTE.DTA"

mkdir -p "${PALETTE_DIR}"

if [[ -f "${TARGET_PALETTE}" ]]; then
  exit 0
fi

for candidate in \
  "${FIXTURE_ROOT}/Palettes/palette.dta" \
  "${FIXTURE_ROOT}/Images/palette.dta" \
  "${FIXTURE_ROOT}/Sounds/palette.dta"; do
  if [[ -f "${candidate}" ]]; then
    cp "${candidate}" "${TARGET_PALETTE}"
    exit 0
  fi
done

echo "normalize_reconstruction_fixture: could not locate palette.dta source under ${FIXTURE_ROOT}" >&2
exit 1
