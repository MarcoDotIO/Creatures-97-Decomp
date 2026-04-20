/*
 * Program: Creatures.exe
 * Function: FUN_00419ff0
 * Entry: 00419ff0
 * Namespace: Global
 * Prototype: undefined FUN_00419ff0(undefined4 * param_1)
 */


void __fastcall FUN_00419ff0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041a048;
  *param_1 = &PTR_LAB_00430f30;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_731(*(undefined4 *)((int)param_1 + 0x16));
  FUN_0041a460((int)param_1);
  local_8 = 0xffffffff;
  FUN_0041a052();
  *unaff_FS_OFFSET = local_10;
  return;
}

