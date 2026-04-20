/*
 * Program: Health_Kit.exe
 * Function: FUN_004051c0
 * Entry: 004051c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004051c0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004051c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405216;
  *unaff_FS_OFFSET = &local_10;
  FUN_00408600(param_1);
  *param_1 = &PTR_LAB_0040e650;
  param_1[0x19] = 0;
  param_1[0x120] = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

