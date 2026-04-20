/*
 * Program: Health_Kit.exe
 * Function: FUN_004043b0
 * Entry: 004043b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004043b0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_004043b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040448d;
  *unaff_FS_OFFSET = &local_10;
  FUN_00407670(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  FUN_004027e0((undefined4 *)((int)this + 0x238));
  local_8._0_1_ = 1;
  FUN_0040a2b0((undefined4 *)((int)this + 0x10f8));
  local_8._0_1_ = 2;
  FUN_004010d0((undefined4 *)((int)this + 0x2b78));
  local_8._0_1_ = 3;
  FUN_004057f0((undefined4 *)((int)this + 0x3eb4));
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined ***)this = &PTR_LAB_0040e4e8;
  FUN_00404560(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

