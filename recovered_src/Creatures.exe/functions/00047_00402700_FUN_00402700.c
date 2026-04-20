/*
 * Program: Creatures.exe
 * Function: FUN_00402700
 * Entry: 00402700
 * Namespace: Global
 * Prototype: undefined FUN_00402700(int param_1)
 */


void __fastcall FUN_00402700(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_004022a0();
    *(undefined4 *)(param_1 + 0x50) = 2;
    FUN_00403640(*(int *)(param_1 + 0x60));
  }
  InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
  return;
}

