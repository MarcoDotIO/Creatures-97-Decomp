/*
 * Program: Creatures.exe
 * Function: FUN_00418c90
 * Entry: 00418c90
 * Namespace: Global
 * Prototype: undefined4 * FUN_00418c90(void * this, int param_1, int param_2, int param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6, undefined1 param_7, undefined1 param_8)
 */


undefined4 * __thiscall
FUN_00418c90(void *this,int param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00418d21;
  *unaff_FS_OFFSET = &local_10;
  FUN_00417430(this,param_1,param_2,param_3,1);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_00430ce8;
  FUN_00418b60((int)this);
  *(undefined1 *)((int)this + 0x22c) = param_4;
  *(undefined1 *)((int)this + 0x22d) = param_5;
  *(undefined1 *)((int)this + 0x22e) = param_6;
  *(undefined1 *)((int)this + 0x22f) = param_7;
  *(undefined1 *)((int)this + 0x230) = param_8;
  *unaff_FS_OFFSET = local_10;
  return this;
}

