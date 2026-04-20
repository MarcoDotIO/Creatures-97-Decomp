/*
 * Program: Creatures.exe
 * Function: FUN_004104a0
 * Entry: 004104a0
 * Namespace: Global
 * Prototype: undefined FUN_004104a0(undefined4 * param_1)
 */


void __fastcall FUN_004104a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004104dd;
  *param_1 = &PTR_LAB_0042fd78;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004104e7();
  *unaff_FS_OFFSET = local_10;
  return;
}

