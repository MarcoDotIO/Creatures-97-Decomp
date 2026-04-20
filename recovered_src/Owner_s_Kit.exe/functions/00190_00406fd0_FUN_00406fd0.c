/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00406fd0
 * Entry: 00406fd0
 * Namespace: Global
 * Prototype: undefined FUN_00406fd0(void)
 */


void FUN_00406fd0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407062;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00407036();
  local_8._0_1_ = 2;
  FUN_00407041();
  local_8._0_1_ = 1;
  FUN_0040704c();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407057();
  local_8 = 0xffffffff;
  FUN_0040706c();
  *unaff_FS_OFFSET = local_10;
  return;
}

