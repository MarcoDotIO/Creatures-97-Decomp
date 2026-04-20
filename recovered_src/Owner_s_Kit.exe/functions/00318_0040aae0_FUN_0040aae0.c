/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040aae0
 * Entry: 0040aae0
 * Namespace: Global
 * Prototype: undefined FUN_0040aae0(undefined4 * param_1)
 */


void __fastcall FUN_0040aae0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040ab74;
  *param_1 = &PTR_LAB_0040f338;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  if (param_1[0xa5] != 0) {
    FUN_0040b170(param_1);
    FUN_0040b400(param_1);
    (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1]);
  }
  local_8._0_1_ = 1;
  FUN_0040ab58();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040ab66();
  local_8 = 0xffffffff;
  FUN_0040ab7e();
  *unaff_FS_OFFSET = local_10;
  return;
}

