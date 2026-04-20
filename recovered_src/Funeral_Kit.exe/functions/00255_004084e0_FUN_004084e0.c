/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004084e0
 * Entry: 004084e0
 * Namespace: Global
 * Prototype: undefined FUN_004084e0(undefined4 * param_1)
 */


void __fastcall FUN_004084e0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040851d;
  *param_1 = &PTR_LAB_0040dcb0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00408527();
  *unaff_FS_OFFSET = local_10;
  return;
}

