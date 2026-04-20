/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004048c0
 * Entry: 004048c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004048c0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004048c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404973;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  param_1[0x32] = &PTR_LAB_0040e018;
  param_1[0x33] = 0;
  param_1[0x32] = &PTR_LAB_0040e810;
  param_1[0x32] = &PTR_LAB_0040e900;
  *param_1 = &PTR_LAB_0040e860;
  param_1[0x34] = 0xffffffff;
  param_1[0x31] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

