/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403a20
 * Entry: 00403a20
 * Namespace: Global
 * Prototype: undefined FUN_00403a20(undefined4 * param_1)
 */


void __fastcall FUN_00403a20(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00403ac4;
  *param_1 = &PTR_LAB_0040e5a0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00403a8c();
  local_8._0_1_ = 2;
  FUN_00403a9a();
  local_8._0_1_ = 1;
  FUN_00403aa8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00403ab6();
  local_8 = 0xffffffff;
  FUN_00403ace();
  *unaff_FS_OFFSET = local_10;
  return;
}

