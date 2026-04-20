/*
 * Program: Hatchery.exe
 * Function: FUN_00401170
 * Entry: 00401170
 * Namespace: Global
 * Prototype: undefined4 * FUN_00401170(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00401170(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004011c7;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_286();
  local_8 = 0;
  *param_1 = &PTR_LAB_004080a8;
  Ordinal_2301();
  Ordinal_1067();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

