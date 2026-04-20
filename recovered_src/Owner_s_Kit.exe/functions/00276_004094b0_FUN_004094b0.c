/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004094b0
 * Entry: 004094b0
 * Namespace: Global
 * Prototype: undefined FUN_004094b0(void)
 */


void FUN_004094b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004094e7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004094f1();
  *unaff_FS_OFFSET = local_10;
  return;
}

