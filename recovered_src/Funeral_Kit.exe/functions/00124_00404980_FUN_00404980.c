/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404980
 * Entry: 00404980
 * Namespace: Global
 * Prototype: undefined4 * FUN_00404980(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00404980(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404a20;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  FUN_00409ef0(param_1);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  *local_14 = &PTR_LAB_0040d740;
  Ordinal_3326(local_1c);
  uVar1 = Ordinal_2473(local_18,s__H__M__B__d__Y_00410288);
  local_8._0_1_ = 2;
  Ordinal_760(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00404a0d();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

