/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403110
 * Entry: 00403110
 * Namespace: Global
 * Prototype: undefined4 * FUN_00403110(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00403110(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403190;
  *unaff_FS_OFFSET = &local_10;
  FUN_004043b0(param_1);
  local_8 = 0;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,1);
  Ordinal_486();
  *param_1 = &PTR_LAB_0040f3f8;
  param_1[5] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

