/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403540
 * Entry: 00403540
 * Namespace: Global
 * Prototype: undefined FUN_00403540(undefined4 * param_1)
 */


void __fastcall FUN_00403540(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004035e4;
  *param_1 = &PTR_LAB_0040f4c0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_004035ac();
  local_8._0_1_ = 2;
  FUN_004035ba();
  local_8._0_1_ = 1;
  FUN_004035c8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004035d6();
  local_8 = 0xffffffff;
  FUN_004035ee();
  *unaff_FS_OFFSET = local_10;
  return;
}

