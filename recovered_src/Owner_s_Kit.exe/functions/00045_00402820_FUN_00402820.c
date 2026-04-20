/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402820
 * Entry: 00402820
 * Namespace: Global
 * Prototype: undefined4 * FUN_00402820(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_00402820(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402937;
  *unaff_FS_OFFSET = &local_10;
  FUN_00409500(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  FUN_00407a30((undefined4 *)((int)this + 0x238));
  local_8._0_1_ = 1;
  FUN_0040bab0((undefined4 *)((int)this + 0x52c));
  local_8._0_1_ = 2;
  FUN_00404fe0((undefined4 *)((int)this + 0x6b0));
  local_8._0_1_ = 3;
  FUN_00407130((undefined4 *)((int)this + 0xb04));
  local_8._0_1_ = 4;
  Ordinal_374();
  local_8._0_1_ = 5;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,6);
  *(undefined ***)this = &PTR_LAB_0040e3f0;
  FUN_00402a40(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

