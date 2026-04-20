/*
 * Program: Creatures.exe
 * Function: FUN_004152c0
 * Entry: 004152c0
 * Namespace: Global
 * Prototype: int * FUN_004152c0(void * this, int param_1, int param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */


int * __thiscall
FUN_004152c0(void *this,int param_1,int param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041536d;
  *unaff_FS_OFFSET = &local_10;
  FUN_00414630(this,param_1,0,param_2,0);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_004307a0;
  FUN_00415190(this);
  this_00 = (void *)Ordinal_729(0x1e);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar1 = (undefined4 *)0x0;
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_00419f50(this_00,param_6,param_4,param_5,*(undefined4 *)((int)this + 0x3b),param_3)
    ;
  }
  *(undefined4 **)((int)this + 0x48) = puVar1;
  *unaff_FS_OFFSET = local_10;
  return this;
}

