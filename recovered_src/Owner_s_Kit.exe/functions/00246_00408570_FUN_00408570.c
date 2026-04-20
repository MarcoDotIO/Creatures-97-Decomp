/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408570
 * Entry: 00408570
 * Namespace: Global
 * Prototype: undefined FUN_00408570(int param_1)
 */


void __fastcall FUN_00408570(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return;
}

