/*
 * Program: Health_Kit.exe
 * Function: FUN_00406e60
 * Entry: 00406e60
 * Namespace: Global
 * Prototype: undefined FUN_00406e60(undefined4 * param_1)
 */


void __fastcall FUN_00406e60(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406ea9;
  *param_1 = &PTR_LAB_0040ea88;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_2115(param_1);
  local_8 = 0xffffffff;
  FUN_00406eb3();
  *unaff_FS_OFFSET = local_10;
  return;
}

