/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404a60
 * Entry: 00404a60
 * Namespace: Global
 * Prototype: undefined FUN_00404a60(undefined4 * param_1)
 */


void __fastcall FUN_00404a60(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404ac0;
  *param_1 = &PTR_LAB_0040d740;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00404ab5();
  local_8 = 0xffffffff;
  FUN_00404aca();
  *unaff_FS_OFFSET = local_10;
  return;
}

