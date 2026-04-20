/*
 * Program: Science_Kit.exe
 * Function: FUN_0040a3f0
 * Entry: 0040a3f0
 * Namespace: Global
 * Prototype: undefined FUN_0040a3f0(int param_1)
 */


void __fastcall FUN_0040a3f0(int param_1)

{
  Ordinal_2293();
  if (*(int *)(param_1 + 0x1cc) != 0) {
    Ordinal_731(*(int *)(param_1 + 0x1cc));
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(UINT_PTR *)(param_1 + 0x1d4) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x1d4));
  }
  Ordinal_2081();
  return;
}

