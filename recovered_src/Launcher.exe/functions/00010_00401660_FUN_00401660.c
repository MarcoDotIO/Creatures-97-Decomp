/*
 * Program: Launcher.exe
 * Function: FUN_00401660
 * Entry: 00401660
 * Namespace: Global
 * Prototype: undefined4 * FUN_00401660(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00401660(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004016ee;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_509();
  local_8 = 1;
  *param_1 = &PTR_LAB_004041a8;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,2);
  *param_1 = &PTR_LAB_004040e0;
  Ordinal_2293();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

