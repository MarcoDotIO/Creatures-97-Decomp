/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00402130
 * Entry: 00402130
 * Namespace: Global
 * Prototype: undefined4 * FUN_00402130(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_00402130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040222a;
  *unaff_FS_OFFSET = &local_10;
  FUN_00403440(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  FUN_00404d90((undefined4 *)((int)this + 0x238));
  local_8._0_1_ = 1;
  FUN_0040c210((undefined4 *)((int)this + 0x265c));
  local_8._0_1_ = 2;
  FUN_004074c0((undefined4 *)((int)this + 0x3168));
  local_8._0_1_ = 3;
  Ordinal_486();
  local_8._0_1_ = 4;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined ***)this = &PTR_LAB_0040f1f0;
  FUN_00402310(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

