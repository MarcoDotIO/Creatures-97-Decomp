/*
 * Program: Health_Kit.exe
 * Function: FUN_004012f0
 * Entry: 004012f0
 * Namespace: Global
 * Prototype: undefined FUN_004012f0(undefined4 * param_1)
 */


void __fastcall FUN_004012f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040139e;
  *param_1 = &PTR_LAB_0040e0b0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_0040135c();
  local_8._0_1_ = 2;
  FUN_0040136a();
  local_8._0_1_ = 1;
  FUN_00401378();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00401390();
  local_8 = 0xffffffff;
  FUN_004013a8();
  *unaff_FS_OFFSET = local_10;
  return;
}

