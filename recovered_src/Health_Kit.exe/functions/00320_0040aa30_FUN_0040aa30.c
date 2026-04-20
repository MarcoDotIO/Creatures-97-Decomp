/*
 * Program: Health_Kit.exe
 * Function: FUN_0040aa30
 * Entry: 0040aa30
 * Namespace: Global
 * Prototype: undefined FUN_0040aa30(int param_1)
 */


void __fastcall FUN_0040aa30(int param_1)

{
  if (*(int *)(param_1 + 0x17fc) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x17fc) = 0;
  }
  return;
}

