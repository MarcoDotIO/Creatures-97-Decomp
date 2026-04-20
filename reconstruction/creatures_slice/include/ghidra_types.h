#ifndef GHIDRA_TYPES_H
#define GHIDRA_TYPES_H

#include <stdint.h>

typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

typedef uint8_t byte;
typedef uint16_t word;
typedef uint32_t dword;
typedef uint32_t uint;
typedef uint16_t ushort;
typedef uint32_t ulong;
typedef int32_t LONG;
typedef uint32_t DWORD;
typedef uint8_t *LPBYTE;
typedef const char *LPCSTR;
typedef void *HSZ;

#ifndef __cdecl
#define __cdecl
#endif

#ifndef __stdcall
#define __stdcall
#endif

#ifndef __fastcall
#define __fastcall
#endif

#ifndef __thiscall
#define __thiscall
#endif

#endif
