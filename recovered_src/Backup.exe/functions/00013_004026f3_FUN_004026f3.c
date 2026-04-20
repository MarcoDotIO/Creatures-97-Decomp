/*
 * Program: Backup.exe
 * Function: FUN_004026f3
 * Entry: 004026f3
 * Namespace: Global
 * Prototype: undefined FUN_004026f3(void)
 */


void FUN_004026f3(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402737;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00402741();
  *unaff_FS_OFFSET = local_10;
  return;
}

