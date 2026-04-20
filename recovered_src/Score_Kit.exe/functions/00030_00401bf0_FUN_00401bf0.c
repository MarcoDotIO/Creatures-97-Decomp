/*
 * Program: Score_Kit.exe
 * Function: FUN_00401bf0
 * Entry: 00401bf0
 * Namespace: Global
 * Prototype: undefined FUN_00401bf0(undefined4 * param_1)
 */


void __fastcall FUN_00401bf0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401c48;
  *param_1 = &PTR_LAB_0040a120;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00401c3a();
  local_8 = 0xffffffff;
  FUN_00401c52();
  *unaff_FS_OFFSET = local_10;
  return;
}

