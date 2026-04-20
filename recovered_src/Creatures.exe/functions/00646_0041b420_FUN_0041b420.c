/*
 * Program: Creatures.exe
 * Function: FUN_0041b420
 * Entry: 0041b420
 * Namespace: Global
 * Prototype: undefined4 * FUN_0041b420(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0041b420(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041b471;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *param_1 = &PTR_LAB_0042f018;
  *param_1 = &PTR_LAB_004310c8;
  FUN_0041b400((int)param_1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

