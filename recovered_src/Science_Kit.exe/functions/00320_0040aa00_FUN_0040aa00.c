/*
 * Program: Science_Kit.exe
 * Function: FUN_0040aa00
 * Entry: 0040aa00
 * Namespace: Global
 * Prototype: undefined FUN_0040aa00(int param_1)
 */


void __fastcall FUN_0040aa00(int param_1)

{
  if (*(int *)(param_1 + 0x304) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x1d4));
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  return;
}

