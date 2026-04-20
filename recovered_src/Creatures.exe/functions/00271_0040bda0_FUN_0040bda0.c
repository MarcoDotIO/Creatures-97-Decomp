/*
 * Program: Creatures.exe
 * Function: FUN_0040bda0
 * Entry: 0040bda0
 * Namespace: Global
 * Prototype: undefined FUN_0040bda0(void)
 */


void FUN_0040bda0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040bdd7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0040bde1();
  *unaff_FS_OFFSET = local_10;
  return;
}

