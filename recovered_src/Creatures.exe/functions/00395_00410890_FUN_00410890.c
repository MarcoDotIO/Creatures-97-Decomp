/*
 * Program: Creatures.exe
 * Function: FUN_00410890
 * Entry: 00410890
 * Namespace: Global
 * Prototype: undefined FUN_00410890(undefined4 * param_1)
 */


void __fastcall FUN_00410890(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004108e5;
  *param_1 = &PTR_LAB_0042fe30;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_004108da();
  local_8 = 0xffffffff;
  FUN_004108ef();
  *unaff_FS_OFFSET = local_10;
  return;
}

