/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004073d0
 * Entry: 004073d0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004073d0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004073d0(undefined4 *param_1)

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
  puStack_c = &LAB_00407470;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  FUN_00407630(param_1);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  *local_14 = &PTR_LAB_0040eda8;
  Ordinal_3326(local_1c);
  uVar1 = Ordinal_2473(local_18,s__H__M__B__d__Y_00412458);
  local_8._0_1_ = 2;
  Ordinal_760(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040745d();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

