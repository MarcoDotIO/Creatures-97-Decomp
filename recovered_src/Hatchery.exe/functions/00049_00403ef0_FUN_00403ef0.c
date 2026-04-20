/*
 * Program: Hatchery.exe
 * Function: FUN_00403ef0
 * Entry: 00403ef0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00403ef0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00403ef0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_004082f0;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_00408338;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

