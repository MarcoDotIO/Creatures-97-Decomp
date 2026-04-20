/*
 * Program: Hatchery.exe
 * Function: FUN_00401260
 * Entry: 00401260
 * Namespace: Global
 * Prototype: undefined FUN_00401260(void)
 */


void FUN_00401260(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1035();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x20);
  if (iVar1 != 0) {
    PostMessageA(*(HWND *)(iVar1 + 0x20),0x10,0,0);
  }
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  Ordinal_4096();
  return;
}

