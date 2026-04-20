/*
 * Program: Creatures.exe
 * Function: FUN_0040bf80
 * Entry: 0040bf80
 * Namespace: Global
 * Prototype: undefined FUN_0040bf80(void)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040bfc7;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_450();
  _DAT_00438a08 = &PTR_LAB_0042fc68;
  *unaff_FS_OFFSET = local_10;
  return;
}

