/*
 * Program: Creatures.exe
 * Function: FUN_0040c2d0
 * Entry: 0040c2d0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040c2d0(void * this, undefined4 param_1, int param_2, int param_3, int param_4)
 */


undefined4 * __thiscall
FUN_0040c2d0(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040c445;
  *unaff_FS_OFFSET = &local_10;
  *(undefined ***)this = &PTR_LAB_0042f018;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_0042fc80;
  *(int *)((int)this + 8) = param_3;
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  piVar4 = (int *)0x0;
  piVar1 = (int *)Ordinal_729(param_3 * 0x1d + 4);
  local_8._0_1_ = 1;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1 + 1;
    *piVar1 = param_3;
    _eh_vector_constructor_iterator_
              (piVar4,0x1d,param_3,(_func_void_void_ptr *)&LAB_0040c8c0,FUN_0040c940);
  }
  iVar3 = 0;
  uVar6 = 0x40;
  local_8._0_1_ = 0;
  *(int **)((int)this + 4) = piVar4;
  puVar2 = FUN_0040b5c0(param_1,0x435d04,4);
  Ordinal_339(puVar2,uVar6);
  local_8 = CONCAT31(local_8._1_3_,2);
  Ordinal_5110(param_2 * 8 + 2,0);
  if (0 < param_3) {
    do {
      iVar5 = *(int *)((int)this + 4) + iVar3;
      Ordinal_4819(iVar5 + 0x15,4);
      Ordinal_4819(iVar5 + 0xd,2);
      Ordinal_4819(iVar5 + 0x11,2);
      *(void **)(iVar5 + 4) = this;
      if (param_4 != 0) {
        *(byte *)(iVar5 + 8) = *(byte *)(iVar5 + 8) | 4;
      }
      iVar3 = iVar3 + 0x1d;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  Ordinal_1725();
  Ordinal_5192(DAT_00438a10,this);
  local_8 = local_8 & 0xffffff00;
  FUN_0040c430();
  *unaff_FS_OFFSET = local_10;
  return this;
}

