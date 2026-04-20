/*
 * Program: Hatchery.exe
 * Function: FUN_00406cd0
 * Entry: 00406cd0
 * Namespace: Global
 * Prototype: undefined FUN_00406cd0(undefined4 * param_1)
 */


void __fastcall FUN_00406cd0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406d2d;
  *param_1 = &PTR_LAB_004087c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_1081(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00406d22();
  local_8 = 0xffffffff;
  FUN_00406d37();
  *unaff_FS_OFFSET = local_10;
  return;
}

