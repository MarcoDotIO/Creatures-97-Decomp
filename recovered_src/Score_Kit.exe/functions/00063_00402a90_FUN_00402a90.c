/*
 * Program: Score_Kit.exe
 * Function: FUN_00402a90
 * Entry: 00402a90
 * Namespace: Global
 * Prototype: undefined4 * FUN_00402a90(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00402a90(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403031;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8a,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_00404c40(param_1 + 0x25);
  local_8._0_1_ = 2;
  FUN_00404c40(param_1 + 0x3e);
  local_8._0_1_ = 3;
  FUN_00404c40(param_1 + 0x57);
  local_8._0_1_ = 4;
  FUN_00404c40(param_1 + 0x70);
  local_8._0_1_ = 5;
  FUN_00404c40(param_1 + 0x89);
  local_8._0_1_ = 6;
  FUN_00404c40(param_1 + 0xa2);
  local_8._0_1_ = 7;
  FUN_00404c40(param_1 + 0xbb);
  local_8._0_1_ = 8;
  FUN_004096e0(param_1 + 0xd4,100,4,FUN_00404c40);
  local_8._0_1_ = 9;
  FUN_00407920(param_1 + 0x138);
  local_8._0_1_ = 10;
  FUN_00407920(param_1 + 0x142);
  local_8._0_1_ = 0xb;
  FUN_00407920(param_1 + 0x14c);
  local_8._0_1_ = 0xc;
  FUN_00407920(param_1 + 0x164);
  local_8._0_1_ = 0xd;
  FUN_00407d00(param_1 + 0x177);
  local_8._0_1_ = 0xe;
  Ordinal_509();
  param_1[0x18a] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x10;
  Ordinal_509();
  param_1[0x19a] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x12;
  Ordinal_509();
  param_1[0x1aa] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x14;
  Ordinal_509();
  param_1[0x1ba] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x16;
  Ordinal_509();
  param_1[0x1ca] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x18;
  Ordinal_509();
  param_1[0x1da] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x1a;
  Ordinal_509();
  param_1[0x1ea] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x1c;
  Ordinal_509();
  param_1[0x1fa] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x1e;
  Ordinal_509();
  param_1[0x20a] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x20;
  Ordinal_509();
  param_1[0x21a] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x22;
  Ordinal_509();
  param_1[0x22a] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x24;
  Ordinal_509();
  param_1[0x23a] = &PTR_LAB_0040a690;
  local_8._0_1_ = 0x26;
  Ordinal_509();
  param_1[0x24a] = &PTR_LAB_0040a690;
  local_8 = CONCAT31(local_8._1_3_,0x28);
  Ordinal_509();
  param_1[0x25a] = &PTR_LAB_0040a5d0;
  *param_1 = &PTR_LAB_0040a4d8;
  param_1[0x23] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

