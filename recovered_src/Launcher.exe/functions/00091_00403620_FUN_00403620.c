/*
 * Program: Launcher.exe
 * Function: FUN_00403620
 * Entry: 00403620
 * Namespace: Global
 * Prototype: undefined4 * FUN_00403620(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00403620(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *param_1 = &PTR_LAB_00404018;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_00404268;
  *param_1 = &PTR_LAB_00404558;
  *param_1 = &PTR_LAB_00404540;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}

