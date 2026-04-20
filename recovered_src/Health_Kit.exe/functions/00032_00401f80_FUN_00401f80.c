/*
 * Program: Health_Kit.exe
 * Function: FUN_00401f80
 * Entry: 00401f80
 * Namespace: Global
 * Prototype: undefined FUN_00401f80(undefined4 * param_1)
 */


void __fastcall FUN_00401f80(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401fd5;
  *param_1 = &PTR_LAB_0040e268;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00401fca();
  local_8 = 0xffffffff;
  FUN_00401fdf();
  *unaff_FS_OFFSET = local_10;
  return;
}

