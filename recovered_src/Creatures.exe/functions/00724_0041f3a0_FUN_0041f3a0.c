/*
 * Program: Creatures.exe
 * Function: FUN_0041f3a0
 * Entry: 0041f3a0
 * Namespace: Global
 * Prototype: undefined FUN_0041f3a0(void)
 */


void FUN_0041f3a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041f3d7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041f3e1();
  *unaff_FS_OFFSET = local_10;
  return;
}

