/*
 * Program: Science_Kit.exe
 * Function: FUN_0040b6e0
 * Entry: 0040b6e0
 * Namespace: Global
 * Prototype: undefined FUN_0040b6e0(void)
 */


void FUN_0040b6e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040b772;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_0040b746();
  local_8._0_1_ = 2;
  FUN_0040b751();
  local_8._0_1_ = 1;
  FUN_0040b75c();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040b767();
  local_8 = 0xffffffff;
  FUN_0040b77c();
  *unaff_FS_OFFSET = local_10;
  return;
}

