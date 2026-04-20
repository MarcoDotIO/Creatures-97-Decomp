/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ca40
 * Entry: 0040ca40
 * Namespace: Global
 * Prototype: undefined FUN_0040ca40(int param_1)
 */


void __fastcall FUN_0040ca40(int param_1)

{
  if (*(int *)(param_1 + 0x9d4) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x9d4) = 0;
  }
  return;
}

