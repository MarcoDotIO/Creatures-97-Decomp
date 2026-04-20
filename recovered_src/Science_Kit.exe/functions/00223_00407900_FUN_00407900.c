/*
 * Program: Science_Kit.exe
 * Function: FUN_00407900
 * Entry: 00407900
 * Namespace: Global
 * Prototype: undefined FUN_00407900(void * this, undefined4 param_1)
 */


void __thiscall FUN_00407900(void *this,undefined4 param_1)

{
  HINSTANCE hInstance;
  HICON pHVar1;
  LPCSTR lpIconName;
  
  *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 2;
  Ordinal_1035();
  lpIconName = (LPCSTR)0x80;
  hInstance = (HINSTANCE)Ordinal_1014(0x80,0xe);
  pHVar1 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x50) = pHVar1;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x218) = param_1;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x21c) = 1;
  *(undefined1 *)((int)this + 0x204) = 0;
  Ordinal_2293();
  return;
}

