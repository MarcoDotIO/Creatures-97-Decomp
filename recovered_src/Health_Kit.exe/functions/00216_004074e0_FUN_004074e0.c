/*
 * Program: Health_Kit.exe
 * Function: FUN_004074e0
 * Entry: 004074e0
 * Namespace: Global
 * Prototype: undefined FUN_004074e0(void)
 */


void FUN_004074e0(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1035();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x20);
  if (iVar1 != 0) {
    PostMessageA(*(HWND *)(iVar1 + 0x20),0x10,0,0);
  }
  Ordinal_4096();
  return;
}

