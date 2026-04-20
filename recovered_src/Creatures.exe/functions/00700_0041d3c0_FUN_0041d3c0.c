/*
 * Program: Creatures.exe
 * Function: FUN_0041d3c0
 * Entry: 0041d3c0
 * Namespace: Global
 * Prototype: undefined FUN_0041d3c0(void * this, int param_1)
 */


void __thiscall FUN_0041d3c0(void *this,int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined2 *)((int)this + 8);
    iVar3 = Ordinal_784(param_1,(int)this + 4);
    if (*(uint *)(iVar3 + 0x28) < *(int *)(iVar3 + 0x24) + 2U) {
      Ordinal_2456();
    }
    **(undefined2 **)(iVar3 + 0x24) = uVar1;
    iVar2 = *(int *)(iVar3 + 0x24);
    *(int *)(iVar3 + 0x24) = iVar2 + 2;
    uVar1 = *(undefined2 *)((int)this + 10);
    if (*(uint *)(iVar3 + 0x28) < iVar2 + 4U) {
      Ordinal_2456();
    }
    **(undefined2 **)(iVar3 + 0x24) = uVar1;
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 2;
    return;
  }
  iVar3 = Ordinal_781(param_1,(int)this + 4);
  if (*(uint *)(iVar3 + 0x28) < *(int *)(iVar3 + 0x24) + 2U) {
    Ordinal_2403((*(int *)(iVar3 + 0x24) - *(uint *)(iVar3 + 0x28)) + 2);
  }
  *(undefined2 *)((int)this + 8) = **(undefined2 **)(iVar3 + 0x24);
  iVar2 = *(int *)(iVar3 + 0x24);
  iVar4 = iVar2 + 2;
  *(int *)(iVar3 + 0x24) = iVar4;
  if (*(uint *)(iVar3 + 0x28) < iVar2 + 4U) {
    Ordinal_2403((iVar4 - *(uint *)(iVar3 + 0x28)) + 2);
  }
  *(undefined2 *)((int)this + 10) = **(undefined2 **)(iVar3 + 0x24);
  *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 2;
  return;
}

