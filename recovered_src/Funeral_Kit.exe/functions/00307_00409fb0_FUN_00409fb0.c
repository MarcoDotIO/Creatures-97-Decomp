/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00409fb0
 * Entry: 00409fb0
 * Namespace: Global
 * Prototype: undefined FUN_00409fb0(undefined4 * param_1)
 */


void __fastcall FUN_00409fb0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040a040;
  *param_1 = &PTR_LAB_0040dea0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))(1,param_1);
  }
  Ordinal_2293();
  Ordinal_2293();
  local_8._0_1_ = 1;
  FUN_0040a02a();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040a035();
  local_8 = 0xffffffff;
  FUN_0040a04a();
  *unaff_FS_OFFSET = local_10;
  return;
}

