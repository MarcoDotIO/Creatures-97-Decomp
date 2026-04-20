/*
 * Program: Creatures.exe
 * Function: FUN_0040bab9
 * Entry: 0040bab9
 * Namespace: Global
 * Prototype: undefined FUN_0040bab9(void)
 */


void FUN_0040bab9(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040bb22;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0040bb14();
  local_8 = 0xffffffff;
  FUN_0040bb2c();
  *unaff_FS_OFFSET = local_10;
  return;
}

