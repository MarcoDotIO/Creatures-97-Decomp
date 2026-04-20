/*
 * Program: Creatures.exe
 * Function: FUN_00404af0
 * Entry: 00404af0
 * Namespace: Global
 * Prototype: undefined FUN_00404af0(void)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404af0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404b37;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_374();
  _DAT_00437fd0 = &PTR_LAB_0042fac0;
  *unaff_FS_OFFSET = local_10;
  return;
}

