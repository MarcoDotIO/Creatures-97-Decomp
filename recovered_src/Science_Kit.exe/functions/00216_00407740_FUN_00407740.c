/*
 * Program: Science_Kit.exe
 * Function: FUN_00407740
 * Entry: 00407740
 * Namespace: Global
 * Prototype: undefined4 * FUN_00407740(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_00407740(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040782c;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_447(param_1,param_3,param_4);
  local_8 = 0;
  Ordinal_392();
  local_8._0_1_ = 2;
  FUN_00404520((undefined4 *)((int)this + 0x94));
  local_8._0_1_ = 3;
  FUN_00403aa0((undefined4 *)((int)this + 0xb0));
  local_8._0_1_ = 4;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined ***)this = &PTR_LAB_00411b98;
  FUN_00407900(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

