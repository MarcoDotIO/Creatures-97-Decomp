/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004074b0
 * Entry: 004074b0
 * Namespace: Global
 * Prototype: undefined FUN_004074b0(undefined4 * param_1)
 */


void __fastcall FUN_004074b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407510;
  *param_1 = &PTR_LAB_0040eda8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00407505();
  local_8 = 0xffffffff;
  FUN_0040751a();
  *unaff_FS_OFFSET = local_10;
  return;
}

