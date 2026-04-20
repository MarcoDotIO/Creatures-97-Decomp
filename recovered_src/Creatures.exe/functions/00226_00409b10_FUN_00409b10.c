/*
 * Program: Creatures.exe
 * Function: FUN_00409b10
 * Entry: 00409b10
 * Namespace: Global
 * Prototype: undefined4 * FUN_00409b10(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00409b10(undefined4 *param_1)

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
  puStack_c = &LAB_00409bc8;
  *param_1 = &PTR_LAB_0042f018;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_14 = param_1;
  _eh_vector_constructor_iterator_(param_1 + 2,4,10,Ordinal_486,Ordinal_706);
  local_8._0_1_ = 1;
  *local_14 = &PTR_LAB_0042fc10;
  Ordinal_3326(local_1c);
  uVar1 = Ordinal_2473(local_18,s__H__M__b__d__Y_00435e10);
  local_8._0_1_ = 2;
  Ordinal_760(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00409baa();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

