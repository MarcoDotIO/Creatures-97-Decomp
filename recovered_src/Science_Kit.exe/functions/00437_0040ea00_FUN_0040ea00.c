/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ea00
 * Entry: 0040ea00
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040ea00(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040ea00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_004112c0;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_004112d8;
  *param_1 = &PTR_LAB_004116f0;
  param_1[2] = 300;
  param_1[3] = 400;
  *param_1 = &PTR_LAB_00412590;
  param_1[4] = 500;
  param_1[5] = 600;
  param_1[6] = 700;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

