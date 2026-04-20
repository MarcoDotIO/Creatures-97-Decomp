/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408cd0
 * Entry: 00408cd0
 * Namespace: Global
 * Prototype: undefined FUN_00408cd0(void)
 */


void FUN_00408cd0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408d62;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00408d36();
  local_8._0_1_ = 2;
  FUN_00408d41();
  local_8._0_1_ = 1;
  FUN_00408d4c();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408d57();
  local_8 = 0xffffffff;
  FUN_00408d6c();
  *unaff_FS_OFFSET = local_10;
  return;
}

