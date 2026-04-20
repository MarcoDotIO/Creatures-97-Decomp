/*
 * Program: Launcher.exe
 * Function: FUN_00402230
 * Entry: 00402230
 * Namespace: Global
 * Prototype: undefined FUN_00402230(undefined4 * param_1)
 */


void __fastcall FUN_00402230(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004022cc;
  *param_1 = &PTR_LAB_00404318;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 4;
  FUN_004022f0();
  local_8._0_1_ = 3;
  FUN_0040229d();
  local_8._0_1_ = 2;
  FUN_004022ab();
  local_8._0_1_ = 1;
  FUN_004022b6();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004022c1();
  local_8 = 0xffffffff;
  FUN_004022d6();
  *unaff_FS_OFFSET = local_10;
  return;
}

