/*
 * Program: Creatures.exe
 * Function: FUN_004290b0
 * Entry: 004290b0
 * Namespace: Global
 * Prototype: undefined FUN_004290b0(int param_1)
 */


void __fastcall FUN_004290b0(int param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_4;
  
  if (DAT_004382c4 == (int *)0x0) {
    return;
  }
  if (((*(int *)((int)DAT_004382c4 + 0x7e6) == 0) || (*(char *)((int)DAT_004382c4 + 0x115) != '\0'))
     || (0x4b0 < *(int *)((int)DAT_004382c4 + 0x7ee))) {
    iVar3 = *DAT_004382c4;
    iVar2 = (**(code **)(iVar3 + 0x78))();
    iStack_4 = (**(code **)(iVar3 + 0x70))();
    iStack_4 = iVar2 / 2 + iStack_4;
    FUN_0040b1b0(&iStack_4);
    iVar3 = *DAT_004382c4;
    iVar2 = (**(code **)(iVar3 + 0x7c))();
    iVar3 = (**(code **)(iVar3 + 0x74))();
    iVar3 = iVar2 / 2 + iVar3;
  }
  else {
    iStack_4 = *(int *)((int)DAT_004382c4 + 0x7ea);
    iVar3 = *(int *)((int)DAT_004382c4 + 0x7ee);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  uVar4 = iStack_4 - iVar2;
  if ((int)uVar4 < -0x1050) {
    uVar4 = uVar4 + 0x20a0;
  }
  else if (0x1050 < (int)uVar4) {
    uVar4 = uVar4 - 0x20a0;
  }
  if ((*(int *)(param_1 + 0x44) == 0) ||
     (0x280 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)))) {
    *(int *)(param_1 + 0x4c) = iVar3;
    *(int *)(param_1 + 0x48) = iStack_4;
    *(undefined4 *)(param_1 + 0x44) = 1;
    goto LAB_004291ec;
  }
  if ((int)uVar4 < 1) {
    if (((int)uVar4 < 0) && (*(int *)(param_1 + 0x48) = iVar2 + -0x10, iVar2 + -0x10 < iStack_4))
    goto LAB_004291af;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar2 + 0x10;
    if (iStack_4 < iVar2 + 0x10) {
LAB_004291af:
      *(int *)(param_1 + 0x48) = iStack_4;
    }
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  piVar1 = (int *)(param_1 + 0x4c);
  if (iVar2 < iVar3) {
    *piVar1 = iVar2 + 0x10;
    if (iVar3 < iVar2 + 0x10) {
      *piVar1 = iVar3;
    }
  }
  else if ((iVar3 < iVar2) && (*piVar1 = iVar2 + -0x10, iVar2 + -0x10 < iVar3)) {
    *piVar1 = iVar3;
  }
LAB_004291ec:
  *(int *)(*(int *)(param_1 + 0x40) + 4) = *(int *)(param_1 + 0x48) + -0x40;
  *(int *)(*(int *)(param_1 + 0x40) + 8) = *(int *)(param_1 + 0x4c) + -0x30;
  *(int *)(*(int *)(param_1 + 0x40) + 0xc) = *(int *)(*(int *)(param_1 + 0x40) + 4) + 0x80;
  *(int *)(*(int *)(param_1 + 0x40) + 0x10) = *(int *)(*(int *)(param_1 + 0x40) + 8) + 0x60;
  this = *(void **)(param_1 + 0x40);
  FUN_00402ab0(this,*(int *)((int)this + 4),*(int *)((int)this + 8),*(int *)((int)this + 0xc),
               *(int *)((int)this + 0x10));
  return;
}

