/*
 * Program: Launcher.exe
 * Function: FUN_00401720
 * Entry: 00401720
 * Namespace: Global
 * Prototype: undefined FUN_00401720(undefined4 * param_1)
 */


void __fastcall FUN_00401720(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401780;
  *param_1 = &PTR_LAB_004040e0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00401775();
  local_8 = 0xffffffff;
  FUN_0040178a();
  *unaff_FS_OFFSET = local_10;
  return;
}

