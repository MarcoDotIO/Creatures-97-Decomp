/*
 * Program: Score_Kit.exe
 * Function: FUN_004075c0
 * Entry: 004075c0
 * Namespace: Global
 * Prototype: undefined FUN_004075c0(undefined4 * param_1)
 */


void __fastcall FUN_004075c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407664;
  *param_1 = &PTR_LAB_0040ab70;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_0040762c();
  local_8._0_1_ = 2;
  FUN_0040763a();
  local_8._0_1_ = 1;
  FUN_00407648();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407656();
  local_8 = 0xffffffff;
  FUN_0040766e();
  *unaff_FS_OFFSET = local_10;
  return;
}

