/*
 * Program: Science_Kit.exe
 * Function: FUN_00408bc0
 * Entry: 00408bc0
 * Namespace: Global
 * Prototype: undefined FUN_00408bc0(int param_1)
 */


void __fastcall FUN_00408bc0(int param_1)

{
  if (*(int *)(param_1 + 29000) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x7140));
    *(undefined4 *)(param_1 + 29000) = 0;
  }
  return;
}

