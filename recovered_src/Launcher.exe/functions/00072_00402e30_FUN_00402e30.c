/*
 * Program: Launcher.exe
 * Function: FUN_00402e30
 * Entry: 00402e30
 * Namespace: Global
 * Prototype: undefined FUN_00402e30(undefined4 * param_1)
 */


void __fastcall FUN_00402e30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402e6d;
  *param_1 = &PTR_LAB_004044c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00402e77();
  *unaff_FS_OFFSET = local_10;
  return;
}

