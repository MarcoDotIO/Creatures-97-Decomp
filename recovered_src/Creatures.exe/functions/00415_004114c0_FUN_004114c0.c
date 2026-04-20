/*
 * Program: Creatures.exe
 * Function: FUN_004114c0
 * Entry: 004114c0
 * Namespace: Global
 * Prototype: undefined FUN_004114c0(void)
 */


void FUN_004114c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004114f7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00411501();
  *unaff_FS_OFFSET = local_10;
  return;
}

