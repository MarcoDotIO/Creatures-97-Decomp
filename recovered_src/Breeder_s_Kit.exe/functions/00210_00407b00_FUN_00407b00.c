/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00407b00
 * Entry: 00407b00
 * Namespace: Global
 * Prototype: undefined FUN_00407b00(undefined4 * param_1)
 */


void __fastcall FUN_00407b00(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407ce6;
  *param_1 = &PTR_LAB_0040fa50;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0x11;
  local_8._1_3_ = 0;
  FUN_00407bea();
  local_8._0_1_ = 0x10;
  FUN_00407bf8();
  local_8._0_1_ = 0xf;
  FUN_00407c06();
  local_8._0_1_ = 0xe;
  FUN_00407c14();
  local_8._0_1_ = 0xd;
  FUN_00407c22();
  local_8._0_1_ = 0xc;
  FUN_00407c30();
  local_8._0_1_ = 0xb;
  FUN_00407c3e();
  local_8._0_1_ = 10;
  FUN_00407c4c();
  local_8._0_1_ = 9;
  FUN_00407c5a();
  local_8._0_1_ = 8;
  FUN_00407c68();
  local_8._0_1_ = 7;
  FUN_00407c76();
  local_8._0_1_ = 6;
  FUN_00407c84();
  local_8._0_1_ = 5;
  FUN_00407c92();
  local_8._0_1_ = 4;
  FUN_00407ca0();
  local_8._0_1_ = 3;
  FUN_00407cae();
  local_8._0_1_ = 2;
  FUN_00407cbc();
  local_8._0_1_ = 1;
  FUN_00407cca();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407cd8();
  local_8 = 0xffffffff;
  FUN_00407cf0();
  *unaff_FS_OFFSET = local_10;
  return;
}

