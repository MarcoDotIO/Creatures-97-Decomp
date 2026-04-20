/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402950
 * Entry: 00402950
 * Namespace: Global
 * Prototype: undefined FUN_00402950(undefined4 * param_1)
 */


void __fastcall FUN_00402950(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402a22;
  *param_1 = &PTR_LAB_0040e3f0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  FUN_004029ce();
  local_8._0_1_ = 4;
  FUN_004029dc();
  local_8._0_1_ = 3;
  FUN_004029ea();
  local_8._0_1_ = 2;
  FUN_004029f8();
  local_8._0_1_ = 1;
  FUN_00402a06();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00402a14();
  local_8 = 0xffffffff;
  FUN_00402a2c();
  *unaff_FS_OFFSET = local_10;
  return;
}

