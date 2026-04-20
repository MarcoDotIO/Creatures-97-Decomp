/*
 * Program: Creatures.exe
 * Function: FUN_00411510
 * Entry: 00411510
 * Namespace: Global
 * Prototype: undefined FUN_00411510(void)
 */


void FUN_00411510(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00411580;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_00411564();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00411572();
  local_8 = 0xffffffff;
  FUN_0041158a();
  *unaff_FS_OFFSET = local_10;
  return;
}

