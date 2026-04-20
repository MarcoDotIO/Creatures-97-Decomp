/*
 * Program: Creatures.exe
 * Function: FUN_0041d0e0
 * Entry: 0041d0e0
 * Namespace: Global
 * Prototype: undefined4 FUN_0041d0e0(void)
 */


undefined4 FUN_0041d0e0(void)

{
  Ordinal_4933();
  *(int *)(DAT_00436ea8 + 0x790) = *(int *)(DAT_00436ea8 + 0x790) + -1;
  InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
  return 1;
}

