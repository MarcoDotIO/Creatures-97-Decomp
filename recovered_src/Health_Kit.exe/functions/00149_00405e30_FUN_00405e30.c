/*
 * Program: Health_Kit.exe
 * Function: FUN_00405e30
 * Entry: 00405e30
 * Namespace: Global
 * Prototype: undefined FUN_00405e30(undefined4 * param_1)
 */


void __fastcall FUN_00405e30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406016;
  *param_1 = &PTR_LAB_0040e7f8;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0x11;
  local_8._1_3_ = 0;
  FUN_00405f1a();
  local_8._0_1_ = 0x10;
  FUN_00405f28();
  local_8._0_1_ = 0xf;
  FUN_00405f36();
  local_8._0_1_ = 0xe;
  FUN_00405f44();
  local_8._0_1_ = 0xd;
  FUN_00405f52();
  local_8._0_1_ = 0xc;
  FUN_00405f60();
  local_8._0_1_ = 0xb;
  FUN_00405f6e();
  local_8._0_1_ = 10;
  FUN_00405f7c();
  local_8._0_1_ = 9;
  FUN_00405f8a();
  local_8._0_1_ = 8;
  FUN_00405f98();
  local_8._0_1_ = 7;
  FUN_00405fa6();
  local_8._0_1_ = 6;
  FUN_00405fb4();
  local_8._0_1_ = 5;
  FUN_00405fc2();
  local_8._0_1_ = 4;
  FUN_00405fd0();
  local_8._0_1_ = 3;
  FUN_00405fde();
  local_8._0_1_ = 2;
  FUN_00405fec();
  local_8._0_1_ = 1;
  FUN_00405ffa();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00406008();
  local_8 = 0xffffffff;
  FUN_00406020();
  *unaff_FS_OFFSET = local_10;
  return;
}

