/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00401950
 * Entry: 00401950
 * Namespace: Global
 * Prototype: undefined FUN_00401950(void)
 */


void FUN_00401950(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401987;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00401991();
  *unaff_FS_OFFSET = local_10;
  return;
}

