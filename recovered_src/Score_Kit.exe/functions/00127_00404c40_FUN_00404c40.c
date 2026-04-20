/*
 * Program: Score_Kit.exe
 * Function: FUN_00404c40
 * Entry: 00404c40
 * Namespace: Global
 * Prototype: undefined4 * FUN_00404c40(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00404c40(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404cce;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_509();
  local_8 = 1;
  *param_1 = &PTR_LAB_0040a690;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,2);
  *param_1 = &PTR_LAB_0040a800;
  Ordinal_2293();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

