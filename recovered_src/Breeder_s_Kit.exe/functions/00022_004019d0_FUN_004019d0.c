/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004019d0
 * Entry: 004019d0
 * Namespace: Global
 * Prototype: undefined FUN_004019d0(undefined4 * param_1)
 */


void __fastcall FUN_004019d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401a25;
  *param_1 = &PTR_LAB_0040f030;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00401a1a();
  local_8 = 0xffffffff;
  FUN_00401a2f();
  *unaff_FS_OFFSET = local_10;
  return;
}

