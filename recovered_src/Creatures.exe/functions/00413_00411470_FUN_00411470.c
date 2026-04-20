/*
 * Program: Creatures.exe
 * Function: FUN_00411470
 * Entry: 00411470
 * Namespace: Global
 * Prototype: undefined FUN_00411470(void)
 */


void FUN_00411470(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004114a7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004114b1();
  *unaff_FS_OFFSET = local_10;
  return;
}

