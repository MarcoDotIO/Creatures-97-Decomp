/*
 * Program: Score_Kit.exe
 * Function: FUN_00401a70
 * Entry: 00401a70
 * Namespace: Global
 * Prototype: undefined FUN_00401a70(undefined4 * param_1)
 */


void __fastcall FUN_00401a70(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401aad;
  *param_1 = &PTR_LAB_0040a088;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00401ab7();
  *unaff_FS_OFFSET = local_10;
  return;
}

