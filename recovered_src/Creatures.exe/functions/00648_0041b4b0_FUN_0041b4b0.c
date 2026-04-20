/*
 * Program: Creatures.exe
 * Function: FUN_0041b4b0
 * Entry: 0041b4b0
 * Namespace: Global
 * Prototype: undefined FUN_0041b4b0(undefined4 * param_1)
 */


void __fastcall FUN_0041b4b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041b500;
  *param_1 = &PTR_LAB_004310c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_731(param_1[1],param_1);
  local_8 = 0xffffffff;
  FUN_0041b50a();
  *unaff_FS_OFFSET = local_10;
  return;
}

