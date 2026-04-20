/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402740
 * Entry: 00402740
 * Namespace: Global
 * Prototype: undefined FUN_00402740(void)
 */


void FUN_00402740(void)

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

