/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004056a0
 * Entry: 004056a0
 * Namespace: Global
 * Prototype: undefined4 FUN_004056a0(void * this, undefined4 param_1, undefined4 param_2)
 */


undefined4 __thiscall FUN_004056a0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  HINSTANCE hInstance;
  HICON pHVar2;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR lpIconName;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405753;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)((int)this + 0x8c) = param_1;
  Ordinal_486();
  local_8 = 0;
  Ordinal_3656(0x68);
  Ordinal_762(s_No_Record_00410320);
  uVar1 = *(uint *)((int)this + 100);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0xf4);
  *(uint *)((int)this + 100) = uVar1 | 8;
  *(uint *)((int)this + 100) = uVar1 | 10;
  Ordinal_1035();
  lpIconName = (LPCSTR)0xb0;
  hInstance = (HINSTANCE)Ordinal_1014(0xb0,0xe);
  pHVar2 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x70) = pHVar2;
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0xf8) = param_2;
  FUN_0040575d();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

