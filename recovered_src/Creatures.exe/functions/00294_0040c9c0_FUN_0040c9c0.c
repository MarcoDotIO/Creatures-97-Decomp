/*
 * Program: Creatures.exe
 * Function: FUN_0040c9c0
 * Entry: 0040c9c0
 * Namespace: Global
 * Prototype: undefined FUN_0040c9c0(void * this, int param_1)
 */


void __thiscall FUN_0040c9c0(void *this,int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    Ordinal_5671(*(undefined4 *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 8);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)(param_1 + 0x24) = uVar1;
    iVar4 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar4 + 1;
    uVar5 = *(undefined4 *)((int)this + 0xd);
    if (*(uint *)(param_1 + 0x28) < iVar4 + 5U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar5;
    iVar4 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar4 + 4;
    uVar5 = *(undefined4 *)((int)this + 0x11);
    if (*(uint *)(param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar5;
    iVar4 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar4 + 4;
    uVar5 = *(undefined4 *)((int)this + 0x15);
    if (*(uint *)(param_1 + 0x28) < iVar4 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar5;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    return;
  }
  iVar4 = FUN_0040bea0(param_1,(undefined4 *)((int)this + 4));
  if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 1U) {
    Ordinal_2403((*(int *)(iVar4 + 0x24) - *(uint *)(iVar4 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 8) = **(undefined1 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar6 = iVar3 + 1;
  *(int *)(iVar4 + 0x24) = iVar6;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 5U) {
    Ordinal_2403((iVar6 - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0xd) = **(undefined4 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar6 = iVar3 + 4;
  *(int *)(iVar4 + 0x24) = iVar6;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
    Ordinal_2403((iVar6 - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x11) = **(undefined4 **)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 0x24);
  iVar6 = iVar3 + 4;
  *(int *)(iVar4 + 0x24) = iVar6;
  if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
    Ordinal_2403((iVar6 - *(uint *)(iVar4 + 0x28)) + 4);
  }
  *(undefined4 *)((int)this + 0x15) = **(undefined4 **)(iVar4 + 0x24);
  *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 4;
  bVar2 = *(byte *)((int)this + 8);
  *(undefined4 *)((int)this + 0x19) = 0;
  *(byte *)((int)this + 8) = bVar2 & 0xfe;
  if ((bVar2 & 2) != 0) {
    uVar5 = Ordinal_729(*(int *)((int)this + 0xd) * *(int *)((int)this + 0x11));
    *(undefined4 *)((int)this + 9) = uVar5;
  }
  return;
}

