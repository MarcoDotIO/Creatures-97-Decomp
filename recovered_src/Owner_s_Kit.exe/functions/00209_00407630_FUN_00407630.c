/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00407630
 * Entry: 00407630
 * Namespace: Global
 * Prototype: undefined4 * FUN_00407630(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00407630(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004076b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *param_1 = &PTR_LAB_0040e018;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,1);
  Ordinal_486();
  *param_1 = &PTR_LAB_0040edc0;
  param_1[4] = 0;
  param_1[3] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

