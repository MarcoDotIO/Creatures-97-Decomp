/*
 * Program: Creatures.exe
 * Function: FUN_00419c60
 * Entry: 00419c60
 * Namespace: Global
 * Prototype: undefined FUN_00419c60(undefined4 * param_1)
 */


void __fastcall FUN_00419c60(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00419c9d;
  *param_1 = &PTR_LAB_00430f00;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00419ca7();
  *unaff_FS_OFFSET = local_10;
  return;
}

