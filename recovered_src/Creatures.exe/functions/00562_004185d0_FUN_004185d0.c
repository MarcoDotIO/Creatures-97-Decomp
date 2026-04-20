/*
 * Program: Creatures.exe
 * Function: FUN_004185d0
 * Entry: 004185d0
 * Namespace: Global
 * Prototype: undefined FUN_004185d0(void)
 */


void FUN_004185d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00418607;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418611();
  *unaff_FS_OFFSET = local_10;
  return;
}

