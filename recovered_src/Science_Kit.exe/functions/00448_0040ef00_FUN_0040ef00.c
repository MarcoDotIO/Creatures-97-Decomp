/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ef00
 * Entry: 0040ef00
 * Namespace: Global
 * Prototype: undefined FUN_0040ef00(undefined4 * param_1)
 */


void __fastcall FUN_0040ef00(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040ef3d;
  *param_1 = &PTR_LAB_004125c0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0040ef47();
  *unaff_FS_OFFSET = local_10;
  return;
}

