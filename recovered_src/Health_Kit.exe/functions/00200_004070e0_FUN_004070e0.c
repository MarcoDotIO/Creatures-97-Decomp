/*
 * Program: Health_Kit.exe
 * Function: FUN_004070e0
 * Entry: 004070e0
 * Namespace: Global
 * Prototype: undefined FUN_004070e0(void)
 */


void FUN_004070e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407172;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00407146();
  local_8._0_1_ = 2;
  FUN_00407151();
  local_8._0_1_ = 1;
  FUN_0040715c();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407167();
  local_8 = 0xffffffff;
  FUN_0040717c();
  *unaff_FS_OFFSET = local_10;
  return;
}

