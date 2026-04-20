/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004043c0
 * Entry: 004043c0
 * Namespace: Global
 * Prototype: undefined FUN_004043c0(undefined4 * param_1)
 */


void __fastcall FUN_004043c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404409;
  *param_1 = &PTR_LAB_0040d728;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_2115(param_1);
  local_8 = 0xffffffff;
  FUN_00404413();
  *unaff_FS_OFFSET = local_10;
  return;
}

