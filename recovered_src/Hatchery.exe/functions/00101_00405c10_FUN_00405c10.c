/*
 * Program: Hatchery.exe
 * Function: FUN_00405c10
 * Entry: 00405c10
 * Namespace: Global
 * Prototype: undefined FUN_00405c10(void)
 */


void FUN_00405c10(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00405c47;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00405c51();
  *unaff_FS_OFFSET = local_10;
  return;
}

