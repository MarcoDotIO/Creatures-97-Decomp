/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004031d0
 * Entry: 004031d0
 * Namespace: Global
 * Prototype: undefined FUN_004031d0(undefined4 * param_1)
 */


void __fastcall FUN_004031d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00403240;
  *param_1 = &PTR_LAB_0040f3f8;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0040322a();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00403235();
  local_8 = 0xffffffff;
  FUN_0040324a();
  *unaff_FS_OFFSET = local_10;
  return;
}

