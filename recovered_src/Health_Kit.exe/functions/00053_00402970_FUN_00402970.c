/*
 * Program: Health_Kit.exe
 * Function: FUN_00402970
 * Entry: 00402970
 * Namespace: Global
 * Prototype: undefined FUN_00402970(undefined4 * param_1)
 */


void __fastcall FUN_00402970(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402a59;
  *param_1 = &PTR_LAB_0040e388;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  FUN_004029f7();
  local_8._0_1_ = 5;
  FUN_00402a05();
  local_8._0_1_ = 4;
  FUN_00402a13();
  local_8._0_1_ = 3;
  FUN_00402a21();
  local_8._0_1_ = 2;
  FUN_00402a2f();
  local_8._0_1_ = 1;
  FUN_00402a3d();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00402a4b();
  local_8 = 0xffffffff;
  FUN_00402a63();
  *unaff_FS_OFFSET = local_10;
  return;
}

