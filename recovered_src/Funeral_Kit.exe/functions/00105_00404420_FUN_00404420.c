/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404420
 * Entry: 00404420
 * Namespace: Global
 * Prototype: undefined4 * FUN_00404420(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00404420(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_0040d018;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_0040d728;
  *param_1 = &PTR_LAB_0040d710;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

