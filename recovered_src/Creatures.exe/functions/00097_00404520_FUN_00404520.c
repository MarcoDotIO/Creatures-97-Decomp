/*
 * Program: Creatures.exe
 * Function: FUN_00404520
 * Entry: 00404520
 * Namespace: Global
 * Prototype: undefined FUN_00404520(void)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404520(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404567;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_450();
  _DAT_00437fe8 = &PTR_LAB_0042faa8;
  *unaff_FS_OFFSET = local_10;
  return;
}

