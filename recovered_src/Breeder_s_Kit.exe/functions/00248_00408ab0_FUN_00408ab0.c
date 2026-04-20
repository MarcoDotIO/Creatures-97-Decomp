/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408ab0
 * Entry: 00408ab0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00408ab0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00408ab0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_0040f018;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_0040f3e0;
  *param_1 = &PTR_LAB_0040fcc8;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

