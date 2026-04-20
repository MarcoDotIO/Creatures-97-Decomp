/*
 * Program: Creatures.exe
 * Function: FUN_004044c0
 * Entry: 004044c0
 * Namespace: Global
 * Prototype: undefined FUN_004044c0(undefined4 * param_1)
 */


void __fastcall FUN_004044c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004044fd;
  *param_1 = &PTR_LAB_0042f2c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00404507();
  *unaff_FS_OFFSET = local_10;
  return;
}

