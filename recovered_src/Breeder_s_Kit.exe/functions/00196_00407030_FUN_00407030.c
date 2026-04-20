/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00407030
 * Entry: 00407030
 * Namespace: Global
 * Prototype: undefined FUN_00407030(int param_1)
 */


void __fastcall FUN_00407030(int param_1)

{
  if (*(int *)(param_1 + 0x2180) != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x218c));
    KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0x2190));
    *(undefined4 *)(param_1 + 0x2190) = 0;
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(undefined4 *)(param_1 + 0x2180) = 0;
  }
  return;
}

