/*
 * Program: Science_Kit.exe
 * Function: FUN_0040c3a0
 * Entry: 0040c3a0
 * Namespace: Global
 * Prototype: undefined FUN_0040c3a0(undefined4 * param_1)
 */


void __fastcall FUN_0040c3a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040c54b;
  *param_1 = &PTR_LAB_00412480;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0xe;
  local_8._1_3_ = 0;
  FUN_0040c46f();
  local_8._0_1_ = 0xd;
  FUN_0040c47d();
  local_8._0_1_ = 0xc;
  FUN_0040c48b();
  local_8._0_1_ = 0xb;
  FUN_0040c499();
  local_8._0_1_ = 10;
  FUN_0040c4a7();
  local_8._0_1_ = 9;
  FUN_0040c4b5();
  local_8._0_1_ = 8;
  FUN_0040c4c3();
  local_8._0_1_ = 7;
  FUN_0040c4d1();
  local_8._0_1_ = 6;
  FUN_0040c4df();
  local_8._0_1_ = 5;
  FUN_0040c4ed();
  local_8._0_1_ = 4;
  FUN_0040c4fb();
  local_8._0_1_ = 3;
  FUN_0040c509();
  local_8._0_1_ = 2;
  FUN_0040c517();
  local_8._0_1_ = 1;
  FUN_0040c52f();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040c53d();
  local_8 = 0xffffffff;
  FUN_0040c555();
  *unaff_FS_OFFSET = local_10;
  return;
}

