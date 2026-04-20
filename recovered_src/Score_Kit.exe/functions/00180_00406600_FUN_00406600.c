/*
 * Program: Score_Kit.exe
 * Function: FUN_00406600
 * Entry: 00406600
 * Namespace: Global
 * Prototype: undefined FUN_00406600(undefined4 * param_1)
 */


void __fastcall FUN_00406600(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004066a4;
  *param_1 = &PTR_LAB_0040a9a8;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_0040666c();
  local_8._0_1_ = 2;
  FUN_0040667a();
  local_8._0_1_ = 1;
  FUN_00406688();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00406696();
  local_8 = 0xffffffff;
  FUN_004066ae();
  *unaff_FS_OFFSET = local_10;
  return;
}

