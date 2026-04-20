/*
 * Program: Score_Kit.exe
 * Function: FUN_00401b50
 * Entry: 00401b50
 * Namespace: Global
 * Prototype: undefined4 * FUN_00401b50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_00401b50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00401bd6;
  *unaff_FS_OFFSET = &local_10;
  FUN_00406500(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  FUN_00402a90((undefined4 *)((int)this + 0x238));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this = &PTR_LAB_0040a120;
  FUN_00401c60(this,param_2);
  *unaff_FS_OFFSET = local_10;
  return this;
}

