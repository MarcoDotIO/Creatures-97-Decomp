/*
 * Program: Creatures.exe
 * Function: FUN_0041f330
 * Entry: 0041f330
 * Namespace: Global
 * Prototype: undefined FUN_0041f330(void)
 */


void FUN_0041f330(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041f382;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0041f374();
  local_8 = 0xffffffff;
  FUN_0041f38c();
  *unaff_FS_OFFSET = local_10;
  return;
}

