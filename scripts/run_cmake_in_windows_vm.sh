#!/usr/bin/env bash

set -euo pipefail

VM_NAME="${VM_NAME:-Windows 11}"
GUEST_REPO_DIR="${GUEST_REPO_DIR:-C:\\Mac\\Home\\Developer\\Creatures-Decomp\\Creatures-97-Decomp}"

if [[ $# -lt 2 ]]; then
  echo "usage: $0 <configure|build|test> <preset> [extra args...]" >&2
  exit 1
fi

action="$1"
preset="$2"
shift 2

if ! command -v prlctl >/dev/null 2>&1; then
  echo "prlctl is not available on the host PATH" >&2
  exit 1
fi

if ! prlctl exec "${VM_NAME}" cmd.exe /c "where cmake >NUL 2>NUL" >/dev/null 2>&1; then
  echo "cmake is not available on the Windows VM PATH" >&2
  exit 1
fi

case "${action}" in
  configure)
    guest_args=(cmake --preset "${preset}")
    ;;
  build)
    guest_args=(cmake --build --preset "${preset}")
    ;;
  test)
    guest_args=(ctest --preset "${preset}")
    ;;
  *)
    echo "unknown action: ${action}" >&2
    exit 1
    ;;
esac

for arg in "$@"; do
  guest_args+=("${arg}")
done

guest_command="cd /d \"${GUEST_REPO_DIR}\" &&"
for arg in "${guest_args[@]}"; do
  escaped_arg="${arg//\"/\\\"}"
  guest_command+=" \"${escaped_arg}\""
done

prlctl exec "${VM_NAME}" cmd.exe /c "${guest_command}"
