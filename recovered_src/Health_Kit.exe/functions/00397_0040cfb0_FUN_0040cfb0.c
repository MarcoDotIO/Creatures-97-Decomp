/*
 * Program: Health_Kit.exe
 * Function: FUN_0040cfb0
 * Entry: 0040cfb0
 * Namespace: Global
 * Prototype: undefined FUN_0040cfb0(undefined4 * param_1)
 */


void __fastcall FUN_0040cfb0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040d014;
  *param_1 = &PTR_LAB_0040f3f8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((param_1[2] != 0) && (param_1[1] != 0)) {
    Ordinal_731(param_1[1]);
    param_1[1] = 0;
  }
  local_8 = 0xffffffff;
  FUN_0040d01e();
  *unaff_FS_OFFSET = local_10;
  return;
}

