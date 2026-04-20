/*
 * Program: Health_Kit.exe
 * Function: FUN_0040a640
 * Entry: 0040a640
 * Namespace: Global
 * Prototype: undefined FUN_0040a640(undefined4 * param_1)
 */


void __fastcall FUN_0040a640(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040a7c0;
  *param_1 = &PTR_LAB_0040f258;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0xc;
  local_8._1_3_ = 0;
  FUN_0040a6fd();
  local_8._0_1_ = 0xb;
  FUN_0040a70b();
  local_8._0_1_ = 10;
  FUN_0040a719();
  local_8._0_1_ = 9;
  FUN_0040a727();
  local_8._0_1_ = 8;
  FUN_0040a735();
  local_8._0_1_ = 7;
  FUN_0040a743();
  local_8._0_1_ = 6;
  FUN_0040a751();
  local_8._0_1_ = 5;
  FUN_0040a75f();
  local_8._0_1_ = 4;
  FUN_0040a76d();
  local_8._0_1_ = 3;
  FUN_0040a77b();
  local_8._0_1_ = 2;
  FUN_0040a789();
  local_8._0_1_ = 1;
  FUN_0040a7a4();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040a7b2();
  local_8 = 0xffffffff;
  FUN_0040a7ca();
  *unaff_FS_OFFSET = local_10;
  return;
}

