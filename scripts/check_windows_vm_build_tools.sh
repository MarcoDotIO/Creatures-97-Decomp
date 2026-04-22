#!/usr/bin/env bash

set -euo pipefail

VM_NAME="${VM_NAME:-Windows 11}"

if ! command -v prlctl >/dev/null 2>&1; then
  echo "prlctl is not available on the host PATH" >&2
  exit 1
fi

missing=0

check_guest_command() {
  local tool_name="$1"
  local output

  if output="$(prlctl exec "${VM_NAME}" cmd.exe /c "where ${tool_name}" 2>&1 | tr -d '\r')"; then
    printf '%-8s %s\n' "${tool_name}" "$(printf '%s' "${output}" | head -n 1)"
  else
    printf '%-8s %s\n' "${tool_name}" "missing"
    missing=1
  fi
}

check_optional_guest_command() {
  local tool_name="$1"
  local output

  if output="$(prlctl exec "${VM_NAME}" cmd.exe /c "where ${tool_name}" 2>&1 | tr -d '\r')"; then
    printf '%-8s %s\n' "${tool_name}" "$(printf '%s' "${output}" | head -n 1)"
  else
    printf '%-8s %s\n' "${tool_name}" "missing"
  fi
}

echo "Windows VM toolchain check (${VM_NAME})"
check_guest_command cmake
check_guest_command ninja
check_guest_command i686-w64-mingw32-clang
check_guest_command aarch64-w64-mingw32-clang
check_optional_guest_command zig
check_optional_guest_command cl
check_optional_guest_command msbuild

exit "${missing}"
