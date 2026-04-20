/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040ad30
 * Entry: 0040ad30
 * Namespace: Global
 * Prototype: undefined FUN_0040ad30(undefined4 * param_1)
 */


void __fastcall FUN_0040ad30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040ae19;
  *param_1 = &PTR_LAB_0040e0b0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  FUN_0040adb7();
  local_8._0_1_ = 5;
  FUN_0040adc5();
  local_8._0_1_ = 4;
  FUN_0040add3();
  local_8._0_1_ = 3;
  FUN_0040ade1();
  local_8._0_1_ = 2;
  FUN_0040adef();
  local_8._0_1_ = 1;
  FUN_0040adfd();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040ae0b();
  local_8 = 0xffffffff;
  FUN_0040ae23();
  *unaff_FS_OFFSET = local_10;
  return;
}

