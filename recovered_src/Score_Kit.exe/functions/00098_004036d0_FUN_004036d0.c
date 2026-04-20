/*
 * Program: Score_Kit.exe
 * Function: FUN_004036d0
 * Entry: 004036d0
 * Namespace: Global
 * Prototype: undefined FUN_004036d0(int param_1)
 */


void __fastcall FUN_004036d0(int param_1)

{
  if (*(int *)(param_1 + 0x624) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x614));
    *(undefined4 *)(param_1 + 0x624) = 0;
  }
  return;
}

