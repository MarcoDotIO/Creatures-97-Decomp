/*
 * Program: Health_Kit.exe
 * Function: FUN_00407620
 * Entry: 00407620
 * Namespace: Global
 * Prototype: undefined FUN_00407620(void)
 */


void FUN_00407620(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407657;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00407661();
  *unaff_FS_OFFSET = local_10;
  return;
}

