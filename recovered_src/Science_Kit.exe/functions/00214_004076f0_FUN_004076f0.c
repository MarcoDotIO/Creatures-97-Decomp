/*
 * Program: Science_Kit.exe
 * Function: FUN_004076f0
 * Entry: 004076f0
 * Namespace: Global
 * Prototype: undefined FUN_004076f0(void)
 */


void FUN_004076f0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407727;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00407731();
  *unaff_FS_OFFSET = local_10;
  return;
}

