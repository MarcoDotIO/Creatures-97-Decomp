/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00409f30
 * Entry: 00409f30
 * Namespace: Global
 * Prototype: undefined FUN_00409f30(undefined4 * param_1)
 */


void __fastcall FUN_00409f30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00409fc4;
  *param_1 = &PTR_LAB_0040fed0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  if (param_1[0xa5] != 0) {
    FUN_0040a5c0(param_1);
    FUN_0040a850(param_1);
    (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1]);
  }
  local_8._0_1_ = 1;
  FUN_00409fa8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00409fb6();
  local_8 = 0xffffffff;
  FUN_00409fce();
  *unaff_FS_OFFSET = local_10;
  return;
}

