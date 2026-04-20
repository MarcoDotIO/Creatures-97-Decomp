/*
 * Program: Score_Kit.exe
 * Function: FUN_004015d0
 * Entry: 004015d0
 * Namespace: Global
 * Prototype: undefined FUN_004015d0(undefined4 * param_1)
 */


void __fastcall FUN_004015d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401625;
  *param_1 = &PTR_LAB_0040a030;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0040161a();
  local_8 = 0xffffffff;
  FUN_0040162f();
  *unaff_FS_OFFSET = local_10;
  return;
}

