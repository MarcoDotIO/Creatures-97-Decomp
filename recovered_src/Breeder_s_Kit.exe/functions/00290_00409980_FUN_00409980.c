/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00409980
 * Entry: 00409980
 * Namespace: Global
 * Prototype: undefined4 * FUN_00409980(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00409980(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_0040f018;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_0040f3e0;
  *param_1 = &PTR_LAB_0040f3c8;
  param_1[2] = 300;
  param_1[3] = 400;
  *param_1 = &PTR_LAB_0040fea0;
  param_1[4] = 500;
  param_1[5] = 600;
  param_1[6] = 700;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

