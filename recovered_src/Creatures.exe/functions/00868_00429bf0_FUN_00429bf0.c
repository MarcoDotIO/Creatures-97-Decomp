/*
 * Program: Creatures.exe
 * Function: FUN_00429bf0
 * Entry: 00429bf0
 * Namespace: Global
 * Prototype: undefined FUN_00429bf0(void)
 */


void FUN_00429bf0(void)

{
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00429c45;
  *unaff_FS_OFFSET = &local_10;
  FUN_00419330(0);
  local_8 = 0;
  if (local_1c != 0) {
    Ordinal_2199();
  }
  local_8 = 0xffffffff;
  FUN_00429c4f();
  *unaff_FS_OFFSET = local_10;
  return;
}

