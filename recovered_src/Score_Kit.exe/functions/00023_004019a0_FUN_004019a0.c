/*
 * Program: Score_Kit.exe
 * Function: FUN_004019a0
 * Entry: 004019a0
 * Namespace: Global
 * Prototype: undefined FUN_004019a0(undefined4 * param_1)
 */


void __fastcall FUN_004019a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004019e9;
  *param_1 = &PTR_LAB_0040a0a0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_2115(param_1);
  local_8 = 0xffffffff;
  FUN_004019f3();
  *unaff_FS_OFFSET = local_10;
  return;
}

