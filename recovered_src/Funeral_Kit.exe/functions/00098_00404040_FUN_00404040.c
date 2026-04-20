/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404040
 * Entry: 00404040
 * Namespace: Global
 * Prototype: undefined FUN_00404040(int param_1)
 */


void __fastcall FUN_00404040(int param_1)

{
  int local_30 [8];
  RECT local_10;
  
  local_30[2] = 0x3b;
  local_10.left = 0x3b;
  local_30[3] = 0x1d;
  local_10.top = 0x1d;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_10.right = 0xb3;
  local_10.bottom = 0xa9;
  local_30[6] = 0xf0;
  local_30[7] = 0x12e;
  FUN_004014f0((void *)(param_1 + 0x19c),*(void **)(param_1 + 0xf8),0,local_30,local_30 + 4);
  FUN_0040a9f0((void *)(param_1 + 0xb0),(RECT *)0x0,0,0);
  if (*(void **)(param_1 + 0xa4) != (void *)0x0) {
    FUN_0040a140(*(void **)(param_1 + 0xa4),*(void **)(param_1 + 0xf8),local_30 + 2,0);
  }
  FUN_0040a9f0((void *)(param_1 + 0xb0),&local_10,0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x33c),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x39c),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x4bc),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x4fc),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x3fc),(RECT *)0x0,0);
  return;
}

