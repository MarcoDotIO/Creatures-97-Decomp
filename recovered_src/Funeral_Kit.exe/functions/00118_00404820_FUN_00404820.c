/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404820
 * Entry: 00404820
 * Namespace: Global
 * Prototype: undefined FUN_00404820(void)
 */


void FUN_00404820(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004048b2;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00404886();
  local_8._0_1_ = 2;
  FUN_00404891();
  local_8._0_1_ = 1;
  FUN_0040489c();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004048a7();
  local_8 = 0xffffffff;
  FUN_004048bc();
  *unaff_FS_OFFSET = local_10;
  return;
}

