/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00408600
 * Entry: 00408600
 * Namespace: Global
 * Prototype: undefined4 * FUN_00408600(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00408600(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00408b55;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x89,0);
  local_8 = 0;
  Ordinal_374();
  local_8._0_1_ = 1;
  Ordinal_502();
  local_8._0_1_ = 2;
  FUN_0040a230(param_1 + 0x31);
  local_8._0_1_ = 3;
  Ordinal_486();
  local_8._0_1_ = 4;
  Ordinal_486();
  local_8._0_1_ = 5;
  Ordinal_509();
  param_1[0x4f] = &PTR_LAB_0040d4d0;
  local_8._0_1_ = 7;
  Ordinal_509();
  param_1[0x5f] = &PTR_LAB_0040d590;
  local_8._0_1_ = 9;
  FUN_004042e0(param_1 + 0x6f);
  param_1[0x6f] = &PTR_LAB_0040d710;
  local_8._0_1_ = 0xb;
  FUN_004042e0(param_1 + 0x71);
  param_1[0x71] = &PTR_LAB_0040d710;
  local_8._0_1_ = 0xd;
  FUN_00404420(param_1 + 0x73);
  local_8._0_1_ = 0xe;
  FUN_00404420(param_1 + 0x75);
  param_1[0x5f] = &PTR_LAB_0040d410;
  local_8._0_1_ = 0x10;
  Ordinal_509();
  param_1[0x77] = &PTR_LAB_0040d590;
  local_8._0_1_ = 0x12;
  FUN_004042e0(param_1 + 0x87);
  param_1[0x87] = &PTR_LAB_0040d710;
  local_8._0_1_ = 0x14;
  FUN_00404420(param_1 + 0x89);
  local_8._0_1_ = 0x15;
  FUN_00404420(param_1 + 0x8b);
  local_8._0_1_ = 0x16;
  FUN_00404420(param_1 + 0x8d);
  param_1[0x77] = &PTR_LAB_0040d410;
  local_8._0_1_ = 0x18;
  FUN_00409de0(param_1 + 0x8f);
  local_8._0_1_ = 0x19;
  FUN_00404420(param_1 + 0x9f);
  local_8._0_1_ = 0x1a;
  FUN_00404420(param_1 + 0xa1);
  local_8._0_1_ = 0x1b;
  FUN_00404420(param_1 + 0xa3);
  local_8._0_1_ = 0x1c;
  FUN_00404420(param_1 + 0xa5);
  param_1[0x8f] = &PTR_LAB_0040d410;
  local_8._0_1_ = 0x1e;
  Ordinal_509();
  param_1[0xa7] = &PTR_LAB_0040d650;
  local_8._0_1_ = 0x20;
  Ordinal_509();
  param_1[0xb7] = &PTR_LAB_0040d650;
  local_8._0_1_ = 0x22;
  Ordinal_509();
  param_1[199] = &PTR_LAB_0040d650;
  local_8._0_1_ = 0x24;
  Ordinal_486();
  local_8._0_1_ = 0x25;
  Ordinal_486();
  local_8._0_1_ = 0x26;
  Ordinal_509();
  param_1[0xd9] = &PTR_LAB_0040d650;
  local_8._0_1_ = 0x28;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,0x29);
  *param_1 = &PTR_LAB_0040dda8;
  param_1[0x23] = 0;
  param_1[0x4e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x4c] = 0;
  Ordinal_762(&DAT_00410224);
  Ordinal_762(&DAT_00410224);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

