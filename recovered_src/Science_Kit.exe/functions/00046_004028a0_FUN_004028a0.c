/*
 * Program: Science_Kit.exe
 * Function: FUN_004028a0
 * Entry: 004028a0
 * Namespace: Global
 * Prototype: undefined FUN_004028a0(undefined4 * param_1)
 */


void __fastcall FUN_004028a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004028dd;
  *param_1 = &PTR_LAB_004112a0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004028e7();
  *unaff_FS_OFFSET = local_10;
  return;
}

