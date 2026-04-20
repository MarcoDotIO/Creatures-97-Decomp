/*
 * Program: Creatures.exe
 * Function: FUN_004115a0
 * Entry: 004115a0
 * Namespace: Global
 * Prototype: undefined FUN_004115a0(void)
 */


void FUN_004115a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004115d7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004115e1();
  *unaff_FS_OFFSET = local_10;
  return;
}

