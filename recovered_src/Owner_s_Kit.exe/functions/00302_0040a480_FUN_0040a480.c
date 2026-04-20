/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040a480
 * Entry: 0040a480
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040a480(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040a480(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a56d;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8e,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_00402320(param_1 + 0x25);
  local_8._0_1_ = 2;
  FUN_00409200(param_1 + 0x36);
  local_8 = CONCAT31(local_8._1_3_,3);
  Ordinal_509();
  param_1[0x3d] = &PTR_LAB_0040e1b0;
  *param_1 = &PTR_LAB_0040f228;
  param_1[0x23] = 0;
  param_1[0x35] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

