/*
 * Program: Score_Kit.exe
 * Function: FUN_004064b0
 * Entry: 004064b0
 * Namespace: Global
 * Prototype: undefined FUN_004064b0(void)
 */


void FUN_004064b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004064e7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004064f1();
  *unaff_FS_OFFSET = local_10;
  return;
}

