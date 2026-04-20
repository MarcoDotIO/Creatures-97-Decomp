/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040abe0
 * Entry: 0040abe0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040abe0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_0040abe0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040ad14;
  *unaff_FS_OFFSET = &local_10;
  FUN_004019a0(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  FUN_00402970((undefined4 *)((int)this + 0x238));
  local_8._0_1_ = 1;
  Ordinal_374();
  local_8._0_1_ = 2;
  Ordinal_374();
  local_8._0_1_ = 3;
  Ordinal_374();
  local_8._0_1_ = 4;
  Ordinal_502();
  local_8._0_1_ = 5;
  Ordinal_502();
  local_8._0_1_ = 6;
  Ordinal_487();
  local_8 = CONCAT31(local_8._1_3_,7);
  *(undefined ***)this = &PTR_LAB_0040e0b0;
  FUN_0040ae30(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

