/*
 * Program: Science_Kit.exe
 * Function: FUN_004067f0
 * Entry: 004067f0
 * Namespace: Global
 * Prototype: undefined FUN_004067f0(int param_1)
 */


void __fastcall FUN_004067f0(int param_1)

{
  if (*(int *)(param_1 + 0xa34) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa34) = 0;
  }
  return;
}

