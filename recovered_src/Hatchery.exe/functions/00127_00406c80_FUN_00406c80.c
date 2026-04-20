/*
 * Program: Hatchery.exe
 * Function: FUN_00406c80
 * Entry: 00406c80
 * Namespace: Global
 * Prototype: undefined FUN_00406c80(void)
 */


void FUN_00406c80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406cb7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00406cc1();
  *unaff_FS_OFFSET = local_10;
  return;
}

