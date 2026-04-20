/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00405460
 * Entry: 00405460
 * Namespace: Global
 * Prototype: undefined4 * FUN_00405460(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00405460(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405525;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0xb7,0);
  local_8 = 0;
  FUN_0040a230(param_1 + 0x24);
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,2);
  Ordinal_509();
  param_1[0x3f] = &PTR_LAB_0040d650;
  *param_1 = &PTR_LAB_0040d7a8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

