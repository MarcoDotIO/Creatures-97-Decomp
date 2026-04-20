/*
 * Program: Score_Kit.exe
 * Function: FUN_004017a0
 * Entry: 004017a0
 * Namespace: Global
 * Prototype: undefined FUN_004017a0(undefined4 * param_1)
 */


void __fastcall FUN_004017a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004017f3;
  *param_1 = &PTR_LAB_0040a070;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_1[1] != 0)) {
    Ordinal_2115(param_1);
  }
  local_8 = 0xffffffff;
  FUN_004017fd();
  *unaff_FS_OFFSET = local_10;
  return;
}

