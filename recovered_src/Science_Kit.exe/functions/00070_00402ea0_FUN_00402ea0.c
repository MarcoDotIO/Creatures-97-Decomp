/*
 * Program: Science_Kit.exe
 * Function: FUN_00402ea0
 * Entry: 00402ea0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00402ea0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_00402ea0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402f9a;
  *unaff_FS_OFFSET = &local_10;
  FUN_00407740(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  FUN_0040bfa0((undefined4 *)((int)this + 0x238));
  local_8._0_1_ = 1;
  FUN_00408800((undefined4 *)((int)this + 0xe10));
  local_8._0_1_ = 2;
  FUN_004010d0((undefined4 *)((int)this + 0x7fa4));
  local_8._0_1_ = 3;
  FUN_004092c0((undefined4 *)((int)this + 0x8cd0));
  local_8._0_1_ = 4;
  FUN_00406130((undefined4 *)((int)this + 0x958c));
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined ***)this = &PTR_LAB_00411358;
  FUN_00403080(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

