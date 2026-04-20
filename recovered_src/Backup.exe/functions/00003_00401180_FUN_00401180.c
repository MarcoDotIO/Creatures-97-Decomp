/*
 * Program: Backup.exe
 * Function: FUN_00401180
 * Entry: 00401180
 * Namespace: Global
 * Prototype: undefined4 * FUN_00401180(void * this, undefined4 param_1, undefined4 param_2)
 */


undefined4 * __thiscall FUN_00401180(void *this,undefined4 param_1,undefined4 param_2)

{
  HINSTANCE hInstance;
  HICON pHVar1;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR lpIconName;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004011f7;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_315(param_1,param_2);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_004041a8;
  Ordinal_1035();
  lpIconName = &DAT_00000080;
  hInstance = (HINSTANCE)Ordinal_1014(0x80,0xe);
  pHVar1 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x60) = pHVar1;
  *unaff_FS_OFFSET = local_10;
  return this;
}

