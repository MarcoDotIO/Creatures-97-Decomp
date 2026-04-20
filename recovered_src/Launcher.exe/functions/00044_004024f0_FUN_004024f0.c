/*
 * Program: Launcher.exe
 * Function: FUN_004024f0
 * Entry: 004024f0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004024f0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004024f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040253d;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  *param_1 = &PTR_LAB_00404428;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

