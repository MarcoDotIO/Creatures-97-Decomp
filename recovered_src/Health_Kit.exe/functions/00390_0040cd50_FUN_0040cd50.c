/*
 * Program: Health_Kit.exe
 * Function: FUN_0040cd50
 * Entry: 0040cd50
 * Namespace: Global
 * Prototype: undefined FUN_0040cd50(undefined4 * param_1)
 */


void __fastcall FUN_0040cd50(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040cdc0;
  *param_1 = &PTR_LAB_0040f3e0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0040cdaa();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040cdb5();
  local_8 = 0xffffffff;
  FUN_0040cdca();
  *unaff_FS_OFFSET = local_10;
  return;
}

