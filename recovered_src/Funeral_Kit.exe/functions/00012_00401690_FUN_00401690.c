/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00401690
 * Entry: 00401690
 * Namespace: Global
 * Prototype: undefined FUN_00401690(undefined4 * param_1)
 */


void __fastcall FUN_00401690(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004016cd;
  *param_1 = &PTR_LAB_0040d050;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004016d7();
  *unaff_FS_OFFSET = local_10;
  return;
}

