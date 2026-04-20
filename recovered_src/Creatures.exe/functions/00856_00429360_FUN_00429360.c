/*
 * Program: Creatures.exe
 * Function: FUN_00429360
 * Entry: 00429360
 * Namespace: Global
 * Prototype: undefined4 * FUN_00429360(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00429360(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_34 [32];
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00429446;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  Ordinal_504(0);
  local_8 = 0;
  Ordinal_411();
  local_8 = CONCAT31(local_8._1_3_,1);
  *param_1 = &PTR_LAB_00431548;
  DAT_00436ea0 = param_1;
  FUN_00408420(&DAT_00439e50,0,s_Burble_00436f14,(LPBYTE)(param_1 + 0x31),1);
  FUN_004083b0(&DAT_00439e50,0,s_Privileges_00436f00,local_34,0x1d,&DAT_00436f0c);
  iVar1 = _stricmp((char *)local_34,s_Darwin_00436ef8);
  param_1[0x32] = -(uint)(iVar1 == 0) & 2;
  iVar1 = _stricmp((char *)local_34,s_Cheese_00436ef0);
  if (iVar1 == 0) {
    param_1[0x32] = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

