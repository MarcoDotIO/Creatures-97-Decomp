/*
 * Program: Health_Kit.exe
 * Function: FUN_00407770
 * Entry: 00407770
 * Namespace: Global
 * Prototype: undefined FUN_00407770(undefined4 * param_1)
 */


void __fastcall FUN_00407770(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407814;
  *param_1 = &PTR_LAB_0040ec50;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_004077dc();
  local_8._0_1_ = 2;
  FUN_004077ea();
  local_8._0_1_ = 1;
  FUN_004077f8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407806();
  local_8 = 0xffffffff;
  FUN_0040781e();
  *unaff_FS_OFFSET = local_10;
  return;
}

