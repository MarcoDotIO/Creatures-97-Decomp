/*
 * Program: Creatures.exe
 * Function: FUN_00403c90
 * Entry: 00403c90
 * Namespace: Global
 * Prototype: undefined FUN_00403c90(int param_1)
 */


void __fastcall FUN_00403c90(int param_1)

{
  if ((*(HDC *)(param_1 + 0x34) != (HDC)0x0) && (*(HGDIOBJ *)(param_1 + 0x464) != (HGDIOBJ)0x0)) {
    SelectObject(*(HDC *)(param_1 + 0x34),*(HGDIOBJ *)(param_1 + 0x464));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x38));
    DeleteDC(*(HDC *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  return;
}

