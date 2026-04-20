/*
 * Program: Creatures.exe
 * Function: FUN_00404f40
 * Entry: 00404f40
 * Namespace: Global
 * Prototype: undefined FUN_00404f40(undefined4 * param_1)
 */


void __fastcall FUN_00404f40(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404fc1;
  *param_1 = &PTR_LAB_0042fb08;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  Ordinal_1081(param_1);
  local_8._0_1_ = 1;
  FUN_00404f9b();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00404fa9();
  local_8 = 0xffffffff;
  FUN_00404fcb();
  *unaff_FS_OFFSET = local_10;
  return;
}

