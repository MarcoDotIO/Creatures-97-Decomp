/*
 * Program: Health_Kit.exe
 * Function: FUN_004027e0
 * Entry: 004027e0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004027e0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004027e0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402930;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8a,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_00408600(param_1 + 0x25);
  local_8._0_1_ = 2;
  FUN_0040cf20(param_1 + 0x43);
  local_8._0_1_ = 3;
  FUN_0040cf20(param_1 + 0x49);
  local_8._0_1_ = 4;
  FUN_00409640(param_1 + 0x373);
  local_8._0_1_ = 5;
  FUN_00409640(param_1 + 0x380);
  local_8 = CONCAT31(local_8._1_3_,6);
  Ordinal_509();
  param_1[0x3a0] = &PTR_LAB_0040e1a8;
  *param_1 = &PTR_LAB_0040e388;
  param_1[0x23] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 0;
  param_1[0x394] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

