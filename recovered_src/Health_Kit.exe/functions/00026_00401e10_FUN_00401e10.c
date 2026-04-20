/*
 * Program: Health_Kit.exe
 * Function: FUN_00401e10
 * Entry: 00401e10
 * Namespace: Global
 * Prototype: undefined FUN_00401e10(undefined4 * param_1)
 */


void __fastcall FUN_00401e10(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401e4d;
  *param_1 = &PTR_LAB_0040e288;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00401e57();
  *unaff_FS_OFFSET = local_10;
  return;
}

