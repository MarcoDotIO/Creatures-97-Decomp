/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00408b90
 * Entry: 00408b90
 * Namespace: Global
 * Prototype: undefined FUN_00408b90(undefined4 * param_1)
 */


void __fastcall FUN_00408b90(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408d48;
  *param_1 = &PTR_LAB_0040dda8;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0xf;
  local_8._1_3_ = 0;
  FUN_00408c68();
  local_8._0_1_ = 0xe;
  FUN_00408c76();
  local_8._0_1_ = 0xd;
  FUN_00408c84();
  local_8._0_1_ = 0xc;
  FUN_00408c92();
  local_8._0_1_ = 0xb;
  FUN_00408ca0();
  local_8._0_1_ = 10;
  FUN_00408cae();
  local_8._0_1_ = 9;
  FUN_00408cbc();
  local_8._0_1_ = 8;
  FUN_00408cca();
  local_8._0_1_ = 7;
  FUN_00408cd8();
  local_8._0_1_ = 6;
  FUN_00408ce6();
  local_8._0_1_ = 5;
  FUN_00408cf4();
  local_8._0_1_ = 4;
  FUN_00408d02();
  local_8._0_1_ = 3;
  FUN_00408d10();
  local_8._0_1_ = 2;
  FUN_00408d1e();
  local_8._0_1_ = 1;
  FUN_00408d2c();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408d3a();
  local_8 = 0xffffffff;
  FUN_00408d52();
  *unaff_FS_OFFSET = local_10;
  return;
}

