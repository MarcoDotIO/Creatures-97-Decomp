/*
 * Program: Creatures.exe
 * Function: FUN_00404ef0
 * Entry: 00404ef0
 * Namespace: Global
 * Prototype: undefined FUN_00404ef0(void)
 */


void FUN_00404ef0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404f27;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00404f31();
  *unaff_FS_OFFSET = local_10;
  return;
}

