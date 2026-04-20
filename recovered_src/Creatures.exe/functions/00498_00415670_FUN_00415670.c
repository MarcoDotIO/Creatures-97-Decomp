/*
 * Program: Creatures.exe
 * Function: FUN_00415670
 * Entry: 00415670
 * Namespace: Global
 * Prototype: int * FUN_00415670(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, int param_7, undefined1 param_8, int param_9, undefined1 param_10, undefined1 param_11, undefined1 param_12, undefined1 param_13)
 */


int * __thiscall
FUN_00415670(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined1 param_8,int param_9,undefined1 param_10,
            undefined1 param_11,undefined1 param_12,undefined1 param_13)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041574a;
  *unaff_FS_OFFSET = &local_10;
  FUN_00414630(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_00430848;
  FUN_00415550(this);
  *(int *)((int)this + 4) = param_9;
  this_00 = (void *)Ordinal_729(0x1e);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00419f50(this_00,param_7,param_5,param_6,*(undefined4 *)((int)this + 0x3b),0);
  }
  *(undefined4 **)((int)this + 0x48) = puVar1;
  *(int *)((int)this + 0x4c) = param_7;
  *(undefined1 *)((int)this + 0x50) = param_10;
  *(undefined1 *)((int)this + 9) = param_8;
  *(undefined1 *)((int)this + 0x51) = param_11;
  *(undefined1 *)((int)this + 0x52) = param_12;
  *(undefined1 *)((int)this + 0x53) = param_13;
  *unaff_FS_OFFSET = local_10;
  return this;
}

