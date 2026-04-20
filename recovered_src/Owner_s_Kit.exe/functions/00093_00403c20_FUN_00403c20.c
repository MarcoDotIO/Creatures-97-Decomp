/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403c20
 * Entry: 00403c20
 * Namespace: Global
 * Prototype: undefined4 FUN_00403c20(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 __thiscall
FUN_00403c20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  HINSTANCE hInstance;
  HICON pHVar2;
  LPCSTR lpIconName;
  
  *(undefined4 *)((int)this + 0x8c) = param_1;
  Ordinal_762(param_2);
  Ordinal_762(param_3);
  uVar1 = *(uint *)((int)this + 100);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x90);
  *(uint *)((int)this + 100) = uVar1 | 8;
  *(uint *)((int)this + 100) = uVar1 | 10;
  Ordinal_1035();
  lpIconName = (LPCSTR)0x80;
  hInstance = (HINSTANCE)Ordinal_1014(0x80,0xe);
  pHVar2 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x70) = pHVar2;
  *(undefined4 *)((int)this + 0xa0) = param_4;
  return 1;
}

