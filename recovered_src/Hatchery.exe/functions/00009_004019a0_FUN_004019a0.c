/*
 * Program: Hatchery.exe
 * Function: FUN_004019a0
 * Entry: 004019a0
 * Namespace: Global
 * Prototype: undefined FUN_004019a0(undefined4 * param_1)
 */


void __fastcall FUN_004019a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401ad2;
  *param_1 = &PTR_LAB_004081c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 8;
  if ((int *)param_1[0xe5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe5] + 4))(1,param_1);
  }
  local_8._0_1_ = 7;
  FUN_00401a3d();
  local_8._0_1_ = 6;
  FUN_00401a4b();
  local_8._0_1_ = 5;
  FUN_00401a63();
  local_8._0_1_ = 4;
  FUN_00401a7b();
  local_8._0_1_ = 3;
  FUN_00401a93();
  local_8._0_1_ = 2;
  FUN_00401aab();
  local_8._0_1_ = 1;
  FUN_00401ab9();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00401ac7();
  local_8 = 0xffffffff;
  FUN_00401adc();
  *unaff_FS_OFFSET = local_10;
  return;
}

