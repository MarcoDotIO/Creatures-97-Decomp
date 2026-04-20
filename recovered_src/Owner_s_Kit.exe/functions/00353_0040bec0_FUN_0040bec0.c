/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040bec0
 * Entry: 0040bec0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040bec0(void * this, undefined4 param_1, undefined4 param_2)
 */


undefined4 __thiscall FUN_0040bec0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  HINSTANCE hInstance;
  HICON pHVar2;
  LPCSTR lpIconName;
  
  *(undefined4 *)((int)this + 0x8c) = param_1;
  Ordinal_762(param_2);
  uVar1 = *(uint *)((int)this + 100);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x90);
  *(uint *)((int)this + 100) = uVar1 | 8;
  *(uint *)((int)this + 100) = uVar1 | 10;
  Ordinal_1035();
  lpIconName = (LPCSTR)0xb0;
  hInstance = (HINSTANCE)Ordinal_1014(0xb0,0xe);
  pHVar2 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x70) = pHVar2;
  return 1;
}

