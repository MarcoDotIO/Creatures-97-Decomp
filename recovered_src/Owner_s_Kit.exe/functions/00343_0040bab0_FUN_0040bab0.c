/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040bab0
 * Entry: 0040bab0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040bab0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040bab0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040bbd3;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8d,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x25,4,10,Ordinal_486,Ordinal_706);
  local_8._0_1_ = 2;
  FUN_00403e90(param_1 + 0x2f);
  local_8._0_1_ = 3;
  FUN_00409200(param_1 + 0x49);
  local_8 = CONCAT31(local_8._1_3_,4);
  Ordinal_509();
  param_1[0x50] = &PTR_LAB_0040e1b0;
  *param_1 = &PTR_LAB_0040f400;
  param_1[0x23] = 0;
  param_1[0x48] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

