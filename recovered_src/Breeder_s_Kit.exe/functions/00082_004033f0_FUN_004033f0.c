/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004033f0
 * Entry: 004033f0
 * Namespace: Global
 * Prototype: undefined FUN_004033f0(void)
 */


void FUN_004033f0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00403427;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00403431();
  *unaff_FS_OFFSET = local_10;
  return;
}

