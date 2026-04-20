/*
 * Program: Hatchery.exe
 * Function: FUN_004044a0
 * Entry: 004044a0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004044a0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004044a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_004082f0;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_00408350;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

