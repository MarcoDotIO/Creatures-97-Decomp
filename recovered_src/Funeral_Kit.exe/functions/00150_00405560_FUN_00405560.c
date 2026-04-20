/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00405560
 * Entry: 00405560
 * Namespace: Global
 * Prototype: undefined FUN_00405560(undefined4 * param_1)
 */


void __fastcall FUN_00405560(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004055ed;
  *param_1 = &PTR_LAB_0040d7a8;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_004055c3();
  local_8._0_1_ = 1;
  FUN_004055d1();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004055df();
  local_8 = 0xffffffff;
  FUN_004055f7();
  *unaff_FS_OFFSET = local_10;
  return;
}

