/*
 * Program: Creatures.exe
 * Function: FUN_00417430
 * Entry: 00417430
 * Namespace: Global
 * Prototype: undefined4 * FUN_00417430(void * this, int param_1, int param_2, int param_3, int param_4)
 */


undefined4 * __thiscall FUN_00417430(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004174b3;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = 5;
  FUN_00414630(this,param_1,param_2,param_3,param_4);
  local_8 = 0;
  iVar1 = (int)this + 0xc4;
  do {
    FUN_00417400(iVar1);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iVar2);
  *(undefined ***)this = &PTR_LAB_00430af0;
  FUN_004172c0((int)this);
  *unaff_FS_OFFSET = local_10;
  return this;
}

