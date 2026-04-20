/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00405240
 * Entry: 00405240
 * Namespace: Global
 * Prototype: undefined FUN_00405240(undefined4 * param_1)
 */


void __fastcall FUN_00405240(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040544e;
  *param_1 = &PTR_LAB_0040f6b8;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0x11;
  local_8._1_3_ = 0;
  FUN_0040532a();
  local_8._0_1_ = 0x10;
  FUN_00405338();
  local_8._0_1_ = 0xf;
  FUN_00405346();
  local_8._0_1_ = 0xe;
  FUN_00405354();
  local_8._0_1_ = 0xd;
  FUN_00405362();
  local_8._0_1_ = 0xc;
  FUN_00405370();
  local_8._0_1_ = 0xb;
  FUN_0040537e();
  local_8._0_1_ = 10;
  FUN_0040538c();
  local_8._0_1_ = 9;
  FUN_0040539a();
  local_8._0_1_ = 8;
  FUN_004053a8();
  local_8._0_1_ = 7;
  FUN_004053b6();
  local_8._0_1_ = 6;
  FUN_004053c4();
  local_8._0_1_ = 5;
  FUN_004053d2();
  local_8._0_1_ = 4;
  FUN_004053ea();
  local_8._0_1_ = 3;
  FUN_00405402();
  local_8._0_1_ = 2;
  FUN_0040541a();
  local_8._0_1_ = 1;
  FUN_00405432();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00405440();
  local_8 = 0xffffffff;
  FUN_00405458();
  *unaff_FS_OFFSET = local_10;
  return;
}

