/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040a5a0
 * Entry: 0040a5a0
 * Namespace: Global
 * Prototype: undefined FUN_0040a5a0(undefined4 * param_1)
 */


void __fastcall FUN_0040a5a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040a660;
  *param_1 = &PTR_LAB_0040f228;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 4;
  if ((param_1 != (undefined4 *)0xffffff6c) && (param_1[0x2d] != 0)) {
    (**(code **)(param_1[0x25] + 0x5c))(param_1);
  }
  local_8._0_1_ = 3;
  FUN_0040a628();
  local_8._0_1_ = 2;
  FUN_0040a636();
  local_8._0_1_ = 1;
  FUN_0040a644();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040a652();
  local_8 = 0xffffffff;
  FUN_0040a66a();
  *unaff_FS_OFFSET = local_10;
  return;
}

