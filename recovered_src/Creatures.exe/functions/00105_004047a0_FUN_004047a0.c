/*
 * Program: Creatures.exe
 * Function: FUN_004047a0
 * Entry: 004047a0
 * Namespace: Global
 * Prototype: undefined FUN_004047a0(void)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004047a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004047e7;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_374();
  _DAT_00438860 = &PTR_LAB_0042fad8;
  *unaff_FS_OFFSET = local_10;
  return;
}

