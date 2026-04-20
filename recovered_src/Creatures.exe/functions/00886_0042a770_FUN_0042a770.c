/*
 * Program: Creatures.exe
 * Function: FUN_0042a770
 * Entry: 0042a770
 * Namespace: Global
 * Prototype: undefined FUN_0042a770(undefined4 * param_1)
 */


void __fastcall FUN_0042a770(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042a7da;
  *param_1 = &PTR_LAB_004315f8;
  param_1[1] = &PTR_LAB_004315f4;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0042a7c1();
  local_8 = 0xffffffff;
  FUN_0042a7e4();
  *unaff_FS_OFFSET = local_10;
  return;
}

