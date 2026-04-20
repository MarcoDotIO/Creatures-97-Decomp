/*
 * Program: Health_Kit.exe
 * Function: FUN_00402e10
 * Entry: 00402e10
 * Namespace: Global
 * Prototype: undefined FUN_00402e10(int param_1)
 */


void __fastcall FUN_00402e10(int param_1)

{
  if (*(int *)(param_1 + 0xdc4) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0xe6c));
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0xe70));
    *(undefined4 *)(param_1 + 0xdc4) = 0;
  }
  return;
}

