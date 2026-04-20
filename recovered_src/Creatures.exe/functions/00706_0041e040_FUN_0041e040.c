/*
 * Program: Creatures.exe
 * Function: FUN_0041e040
 * Entry: 0041e040
 * Namespace: Global
 * Prototype: uint * FUN_0041e040(void * this, void * param_1, int param_2)
 */


uint * __thiscall FUN_0041e040(void *this,void *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041e10f;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_0042f018;
  *(undefined ***)this = &PTR_LAB_00431238;
  iVar3 = 3;
  puVar1 = this;
  do {
    uVar2 = FUN_0041bda0(param_1,0,7);
    puVar1[1] = uVar2;
    uVar2 = FUN_0041bda0(param_1,0,*(int *)(param_2 + 0xa7 + uVar2 * 0xc2) + -1);
    iVar3 = iVar3 + -1;
    puVar1[4] = uVar2;
    puVar1 = puVar1 + 1;
  } while (iVar3 != 0);
  uVar2 = FUN_0041bda0(param_1,0,0xf);
  *(uint *)((int)this + 0x1c) = uVar2;
  uVar2 = FUN_0041bda0(param_1,0,0xff);
  *(uint *)((int)this + 0x20) = uVar2;
  uVar2 = FUN_0041bda0(param_1,0,0xff);
  *(uint *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}

