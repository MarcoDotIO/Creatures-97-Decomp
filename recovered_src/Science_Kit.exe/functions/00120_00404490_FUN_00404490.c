/*
 * Program: Science_Kit.exe
 * Function: FUN_00404490
 * Entry: 00404490
 * Namespace: Global
 * Prototype: undefined FUN_00404490(undefined4 * param_1)
 */


void __fastcall FUN_00404490(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004044cd;
  *param_1 = &PTR_LAB_004116f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004044d7();
  *unaff_FS_OFFSET = local_10;
  return;
}

