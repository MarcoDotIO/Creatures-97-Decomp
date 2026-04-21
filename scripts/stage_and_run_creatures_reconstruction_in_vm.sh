#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
VM_NAME="${VM_NAME:-Windows 11}"
STAGE_DIR_HOST="${HOME}/Downloads/Creatures-97-Reconstruction-VM"
STAGE_DIR_GUEST='C:\Mac\Home\Downloads\Creatures-97-Reconstruction-VM'
GENETICS_PROBE="${GENETICS_PROBE:-NORN.GNO}"

bash "${ROOT_DIR}/scripts/build_reconstruction_windows.sh" creatures >/dev/null
bash "${ROOT_DIR}/scripts/normalize_reconstruction_fixture.sh" "${ROOT_DIR}/build/reconstruction_native" >/dev/null

rm -rf "${STAGE_DIR_HOST}"
mkdir -p "${STAGE_DIR_HOST}"

cp "${ROOT_DIR}/build/creatures_slice/creatures_reconstruction.exe" "${STAGE_DIR_HOST}/"
cp "${ROOT_DIR}/build/reconstruction_native/World.sfc" "${STAGE_DIR_HOST}/"
rsync -a --delete "${ROOT_DIR}/build/reconstruction_native/Body data" "${STAGE_DIR_HOST}/"
rsync -a --delete "${ROOT_DIR}/build/reconstruction_native/Genetics" "${STAGE_DIR_HOST}/"
rsync -a --delete "${ROOT_DIR}/build/reconstruction_native/Images" "${STAGE_DIR_HOST}/"
rsync -a --delete "${ROOT_DIR}/build/reconstruction_native/Palettes" "${STAGE_DIR_HOST}/"
rsync -a --delete "${ROOT_DIR}/build/reconstruction_native/Sounds" "${STAGE_DIR_HOST}/"

prlctl exec "${VM_NAME}" cmd.exe /c \
  "cd /d ${STAGE_DIR_GUEST} && creatures_reconstruction.exe --genetics ${GENETICS_PROBE}"
