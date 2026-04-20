/*
 * Program: Science_Kit.exe
 * Function: FUN_00402590
 * Entry: 00402590
 * Namespace: Global
 * Prototype: undefined FUN_00402590(int param_1)
 */


void __fastcall FUN_00402590(int param_1)

{
  if (*(int *)(param_1 + 0x6a8) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x624));
    *(undefined4 *)(param_1 + 0x6a8) = 0;
  }
  return;
}

