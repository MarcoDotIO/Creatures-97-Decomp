/*
 * Program: Creatures.exe
 * Function: FUN_00404660
 * Entry: 00404660
 * Namespace: Global
 * Prototype: undefined FUN_00404660(void)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404660(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004046a7;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_374();
  _DAT_00437fb0 = &PTR_LAB_0042fac0;
  *unaff_FS_OFFSET = local_10;
  return;
}

