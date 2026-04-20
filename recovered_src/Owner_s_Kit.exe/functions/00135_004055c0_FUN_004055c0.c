/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004055c0
 * Entry: 004055c0
 * Namespace: Global
 * Prototype: undefined FUN_004055c0(undefined4 * param_1)
 */


void __fastcall FUN_004055c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00405761;
  *param_1 = &PTR_LAB_0040ea40;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 0xe;
  local_8._1_3_ = 0;
  FUN_0040568f();
  local_8._0_1_ = 0xd;
  FUN_0040569d();
  local_8._0_1_ = 0xc;
  FUN_004056ab();
  local_8._0_1_ = 0xb;
  FUN_004056b9();
  local_8._0_1_ = 10;
  FUN_004056c7();
  local_8._0_1_ = 9;
  FUN_004056d5();
  local_8._0_1_ = 8;
  FUN_004056e3();
  local_8._0_1_ = 7;
  FUN_004056f1();
  local_8._0_1_ = 6;
  FUN_004056ff();
  local_8._0_1_ = 5;
  FUN_0040570d();
  local_8._0_1_ = 4;
  FUN_0040571b();
  local_8._0_1_ = 3;
  FUN_00405729();
  local_8._0_1_ = 2;
  FUN_00405737();
  local_8._0_1_ = 1;
  FUN_00405745();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00405753();
  local_8 = 0xffffffff;
  FUN_0040576b();
  *unaff_FS_OFFSET = local_10;
  return;
}

