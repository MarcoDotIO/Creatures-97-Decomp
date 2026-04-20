/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00401aa0
 * Entry: 00401aa0
 * Namespace: Global
 * Prototype: undefined FUN_00401aa0(undefined4 * param_1)
 */


void __fastcall FUN_00401aa0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401b44;
  *param_1 = &PTR_LAB_0040d120;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00401b0c();
  local_8._0_1_ = 2;
  FUN_00401b1a();
  local_8._0_1_ = 1;
  FUN_00401b28();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00401b36();
  local_8 = 0xffffffff;
  FUN_00401b4e();
  *unaff_FS_OFFSET = local_10;
  return;
}

