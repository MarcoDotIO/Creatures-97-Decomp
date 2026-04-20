/*
 * Program: Health_Kit.exe
 * Function: FUN_00401590
 * Entry: 00401590
 * Namespace: Global
 * Prototype: undefined FUN_00401590(int param_1)
 */


void __fastcall FUN_00401590(int param_1)

{
  if (*(int *)(param_1 + 0x134) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x12e4));
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return;
}

