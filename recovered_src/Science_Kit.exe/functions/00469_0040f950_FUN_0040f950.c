/*
 * Program: Science_Kit.exe
 * Function: FUN_0040f950
 * Entry: 0040f950
 * Namespace: Global
 * Prototype: undefined FUN_0040f950(undefined4 * param_1)
 */


void __fastcall FUN_0040f950(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040f9b0;
  *param_1 = &PTR_LAB_00412858;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_0040f9a5();
  local_8 = 0xffffffff;
  FUN_0040f9ba();
  *unaff_FS_OFFSET = local_10;
  return;
}

