/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00406040
 * Entry: 00406040
 * Namespace: Global
 * Prototype: undefined FUN_00406040(undefined4 * param_1)
 */


void __fastcall FUN_00406040(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406089;
  *param_1 = &PTR_LAB_0040da38;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_1081(param_1);
  local_8 = 0xffffffff;
  FUN_00406093();
  *unaff_FS_OFFSET = local_10;
  return;
}

