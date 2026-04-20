/*
 * Program: Launcher.exe
 * Function: FUN_00402b40
 * Entry: 00402b40
 * Namespace: Global
 * Prototype: undefined FUN_00402b40(void)
 */


void FUN_00402b40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402b77;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00402b81();
  *unaff_FS_OFFSET = local_10;
  return;
}

