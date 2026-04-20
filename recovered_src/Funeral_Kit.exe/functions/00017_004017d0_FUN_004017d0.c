/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004017d0
 * Entry: 004017d0
 * Namespace: Global
 * Prototype: undefined FUN_004017d0(undefined4 * param_1)
 */


void __fastcall FUN_004017d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401825;
  *param_1 = &PTR_LAB_0040d030;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0040181a();
  local_8 = 0xffffffff;
  FUN_0040182f();
  *unaff_FS_OFFSET = local_10;
  return;
}

