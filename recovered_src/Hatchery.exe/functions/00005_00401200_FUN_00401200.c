/*
 * Program: Hatchery.exe
 * Function: FUN_00401200
 * Entry: 00401200
 * Namespace: Global
 * Prototype: undefined FUN_00401200(undefined4 * param_1)
 */


void __fastcall FUN_00401200(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401249;
  *param_1 = &PTR_LAB_004080a8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_1081(param_1);
  local_8 = 0xffffffff;
  FUN_00401253();
  *unaff_FS_OFFSET = local_10;
  return;
}

