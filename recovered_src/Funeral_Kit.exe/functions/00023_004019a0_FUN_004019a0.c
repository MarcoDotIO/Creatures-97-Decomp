/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004019a0
 * Entry: 004019a0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004019a0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_004019a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00401a8c;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_447(param_1,param_3,param_4);
  local_8 = 0;
  Ordinal_392();
  local_8._0_1_ = 2;
  FUN_004066c0((undefined4 *)((int)this + 0x94));
  local_8._0_1_ = 3;
  FUN_004062b0((undefined4 *)((int)this + 0xb0));
  local_8._0_1_ = 4;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined ***)this = &PTR_LAB_0040d120;
  FUN_00401b60(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

