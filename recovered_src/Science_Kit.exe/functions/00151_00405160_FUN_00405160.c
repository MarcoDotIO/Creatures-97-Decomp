/*
 * Program: Science_Kit.exe
 * Function: FUN_00405160
 * Entry: 00405160
 * Namespace: Global
 * Prototype: undefined FUN_00405160(undefined4 * param_1)
 */


void __fastcall FUN_00405160(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004051f4;
  *param_1 = &PTR_LAB_00411738;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  if (param_1[0xa5] != 0) {
    FUN_004057f0(param_1);
    FUN_00405a80(param_1);
    (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1]);
  }
  local_8._0_1_ = 1;
  FUN_004051d8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004051e6();
  local_8 = 0xffffffff;
  FUN_004051fe();
  *unaff_FS_OFFSET = local_10;
  return;
}

