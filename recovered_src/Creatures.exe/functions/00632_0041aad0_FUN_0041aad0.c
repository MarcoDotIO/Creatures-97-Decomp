/*
 * Program: Creatures.exe
 * Function: FUN_0041aad0
 * Entry: 0041aad0
 * Namespace: Global
 * Prototype: undefined FUN_0041aad0(undefined4 * param_1)
 */


void __fastcall FUN_0041aad0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041ab19;
  *param_1 = &PTR_LAB_00430f18;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0041a460((int)param_1);
  local_8 = 0xffffffff;
  FUN_0041ab23();
  *unaff_FS_OFFSET = local_10;
  return;
}

