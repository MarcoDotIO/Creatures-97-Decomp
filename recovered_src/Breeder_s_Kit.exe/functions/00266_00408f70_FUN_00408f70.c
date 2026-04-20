/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408f70
 * Entry: 00408f70
 * Namespace: Global
 * Prototype: undefined FUN_00408f70(undefined4 * param_1)
 */


void __fastcall FUN_00408f70(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00409014;
  *param_1 = &PTR_LAB_0040fd90;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00408fdc();
  local_8._0_1_ = 2;
  FUN_00408fea();
  local_8._0_1_ = 1;
  FUN_00408ff8();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00409006();
  local_8 = 0xffffffff;
  FUN_0040901e();
  *unaff_FS_OFFSET = local_10;
  return;
}

