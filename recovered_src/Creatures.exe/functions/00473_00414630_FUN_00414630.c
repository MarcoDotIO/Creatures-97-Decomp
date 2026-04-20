/*
 * Program: Creatures.exe
 * Function: FUN_00414630
 * Entry: 00414630
 * Namespace: Global
 * Prototype: undefined4 * FUN_00414630(void * this, int param_1, int param_2, int param_3, int param_4)
 */


undefined4 * __thiscall FUN_00414630(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041469e;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_0042f018;
  *(undefined ***)this = &PTR_LAB_004306f8;
  FUN_004144a0((int)this);
  puVar1 = FUN_0040c580(param_1,param_2,param_3,param_4);
  *(undefined4 **)((int)this + 0x3b) = puVar1;
  *unaff_FS_OFFSET = local_10;
  return this;
}

