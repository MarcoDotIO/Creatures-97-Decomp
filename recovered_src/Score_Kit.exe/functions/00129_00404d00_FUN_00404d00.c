/*
 * Program: Score_Kit.exe
 * Function: FUN_00404d00
 * Entry: 00404d00
 * Namespace: Global
 * Prototype: undefined FUN_00404d00(undefined4 * param_1)
 */


void __fastcall FUN_00404d00(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404d60;
  *param_1 = &PTR_LAB_0040a800;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00404d55();
  local_8 = 0xffffffff;
  FUN_00404d6a();
  *unaff_FS_OFFSET = local_10;
  return;
}

