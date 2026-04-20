/*
 * Program: remove.exe
 * Function: FUN_00401c60
 * Entry: 00401c60
 * Namespace: Global
 * Prototype: undefined FUN_00401c60(void)
 */


void FUN_00401c60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401ca7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00401cb1();
  *unaff_FS_OFFSET = local_10;
  return;
}

