/*
 * Program: Creatures.exe
 * Function: FUN_00416fc0
 * Entry: 00416fc0
 * Namespace: Global
 * Prototype: undefined FUN_00416fc0(undefined4 * param_1)
 */


void __fastcall FUN_00416fc0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00416ffd;
  *param_1 = &PTR_LAB_00430a48;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00417007();
  *unaff_FS_OFFSET = local_10;
  return;
}

