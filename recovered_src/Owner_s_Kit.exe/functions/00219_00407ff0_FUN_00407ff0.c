/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00407ff0
 * Entry: 00407ff0
 * Namespace: Global
 * Prototype: undefined FUN_00407ff0(undefined4 * param_1)
 */


void __fastcall FUN_00407ff0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408204;
  *param_1 = &PTR_LAB_0040eea0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0x13;
  local_8._1_3_ = 0;
  FUN_004080ec();
  local_8._0_1_ = 0x12;
  FUN_004080fa();
  local_8._0_1_ = 0x11;
  FUN_00408108();
  local_8._0_1_ = 0x10;
  FUN_00408116();
  local_8._0_1_ = 0xf;
  FUN_00408124();
  local_8._0_1_ = 0xe;
  FUN_00408132();
  local_8._0_1_ = 0xd;
  FUN_00408140();
  local_8._0_1_ = 0xc;
  FUN_0040814e();
  local_8._0_1_ = 0xb;
  FUN_0040815c();
  local_8._0_1_ = 10;
  FUN_0040816a();
  local_8._0_1_ = 9;
  FUN_00408178();
  local_8._0_1_ = 8;
  FUN_00408186();
  local_8._0_1_ = 7;
  FUN_00408194();
  local_8._0_1_ = 6;
  FUN_004081a2();
  local_8._0_1_ = 5;
  FUN_004081b0();
  local_8._0_1_ = 4;
  FUN_004081be();
  local_8._0_1_ = 3;
  FUN_004081cc();
  local_8._0_1_ = 2;
  FUN_004081da();
  local_8._0_1_ = 1;
  FUN_004081e8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004081f6();
  local_8 = 0xffffffff;
  FUN_0040820e();
  *unaff_FS_OFFSET = local_10;
  return;
}

