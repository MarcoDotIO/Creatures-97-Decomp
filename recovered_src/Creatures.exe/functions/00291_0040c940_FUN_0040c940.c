/*
 * Program: Creatures.exe
 * Function: FUN_0040c940
 * Entry: 0040c940
 * Namespace: Global
 * Prototype: undefined FUN_0040c940(undefined4 * param_1)
 */


void __fastcall FUN_0040c940(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040c989;
  *param_1 = &PTR_LAB_0042fc98;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0040c9a0((int)param_1);
  local_8 = 0xffffffff;
  FUN_0040c993();
  *unaff_FS_OFFSET = local_10;
  return;
}

