/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00401af0
 * Entry: 00401af0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00401af0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00401af0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_0040e018;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_0040e070;
  param_1[2] = 0;
  param_1[3] = 1;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

