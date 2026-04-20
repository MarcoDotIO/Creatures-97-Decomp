/*
 * Program: Health_Kit.exe
 * Function: FUN_00409c10
 * Entry: 00409c10
 * Namespace: Global
 * Prototype: undefined FUN_00409c10(undefined4 * param_1)
 */


void __fastcall FUN_00409c10(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00409cb4;
  *param_1 = &PTR_LAB_0040f098;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00409c7c();
  local_8._0_1_ = 2;
  FUN_00409c8a();
  local_8._0_1_ = 1;
  FUN_00409c98();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00409ca6();
  local_8 = 0xffffffff;
  FUN_00409cbe();
  *unaff_FS_OFFSET = local_10;
  return;
}

