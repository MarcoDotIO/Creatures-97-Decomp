/*
 * Program: Creatures.exe
 * Function: FUN_004290bb
 * Entry: 004290bb
 * Namespace: Global
 * Prototype: undefined FUN_004290bb(int param_1)
 */


void __fastcall FUN_004290bb(int param_1)

{
  int *piVar1;
  void *this;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (((*(int *)(in_EAX + 0x7e6) == 0) || (*(char *)(in_EAX + 0x115) != '\0')) ||
     (0x4b0 < *(int *)(in_EAX + 0x7ee))) {
    iVar4 = *DAT_004382c4;
    iVar2 = (**(code **)(iVar4 + 0x78))();
    iVar3 = (**(code **)(iVar4 + 0x70))();
    iVar3 = iVar2 / 2 + iVar3;
    FUN_0040b1b0((int *)&stack0x00000000);
    iVar4 = *DAT_004382c4;
    iVar2 = (**(code **)(iVar4 + 0x7c))();
    iVar4 = (**(code **)(iVar4 + 0x74))();
    iVar4 = iVar2 / 2 + iVar4;
  }
  else {
    iVar3 = *(int *)((int)DAT_004382c4 + 0x7ea);
    iVar4 = *(int *)(in_EAX + 0x7ee);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  uVar5 = iVar3 - iVar2;
  if ((int)uVar5 < -0x1050) {
    uVar5 = uVar5 + 0x20a0;
  }
  else if (0x1050 < (int)uVar5) {
    uVar5 = uVar5 - 0x20a0;
  }
  if ((*(int *)(param_1 + 0x44) == 0) ||
     (0x280 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)))) {
    *(int *)(param_1 + 0x4c) = iVar4;
    *(int *)(param_1 + 0x48) = iVar3;
    *(undefined4 *)(param_1 + 0x44) = 1;
    goto LAB_004291ec;
  }
  if ((int)uVar5 < 1) {
    if (((int)uVar5 < 0) && (*(int *)(param_1 + 0x48) = iVar2 + -0x10, iVar2 + -0x10 < iVar3))
    goto LAB_004291af;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar2 + 0x10;
    if (iVar3 < iVar2 + 0x10) {
LAB_004291af:
      *(int *)(param_1 + 0x48) = iVar3;
    }
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  piVar1 = (int *)(param_1 + 0x4c);
  if (iVar3 < iVar4) {
    *piVar1 = iVar3 + 0x10;
    if (iVar4 < iVar3 + 0x10) {
      *piVar1 = iVar4;
    }
  }
  else if ((iVar4 < iVar3) && (*piVar1 = iVar3 + -0x10, iVar3 + -0x10 < iVar4)) {
    *piVar1 = iVar4;
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

