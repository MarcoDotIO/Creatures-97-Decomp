/*
 * Program: Creatures.exe
 * Function: FUN_004127f0
 * Entry: 004127f0
 * Namespace: Global
 * Prototype: undefined FUN_004127f0(undefined4 * param_1)
 */


void __fastcall FUN_004127f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041282d;
  *param_1 = &PTR_LAB_004304d8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00412837();
  *unaff_FS_OFFSET = local_10;
  return;
}

