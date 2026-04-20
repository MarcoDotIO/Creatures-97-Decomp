/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00404660
 * Entry: 00404660
 * Namespace: Global
 * Prototype: undefined4 * FUN_00404660(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00404660(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_0040f018;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_0040f5f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

