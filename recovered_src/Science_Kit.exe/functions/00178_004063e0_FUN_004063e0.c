/*
 * Program: Science_Kit.exe
 * Function: FUN_004063e0
 * Entry: 004063e0
 * Namespace: Global
 * Prototype: undefined FUN_004063e0(undefined4 * param_1)
 */


void __fastcall FUN_004063e0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004064f4;
  *param_1 = &PTR_LAB_00411860;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  FUN_00406470();
  local_8._0_1_ = 6;
  FUN_0040647e();
  local_8._0_1_ = 5;
  FUN_0040648c();
  local_8._0_1_ = 4;
  FUN_0040649a();
  local_8._0_1_ = 3;
  FUN_004064b2();
  local_8._0_1_ = 2;
  FUN_004064ca();
  local_8._0_1_ = 1;
  FUN_004064d8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004064e6();
  local_8 = 0xffffffff;
  FUN_004064fe();
  *unaff_FS_OFFSET = local_10;
  return;
}

