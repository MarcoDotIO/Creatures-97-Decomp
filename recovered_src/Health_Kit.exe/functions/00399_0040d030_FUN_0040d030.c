/*
 * Program: Health_Kit.exe
 * Function: FUN_0040d030
 * Entry: 0040d030
 * Namespace: Global
 * Prototype: undefined FUN_0040d030(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0040d030(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  
  piVar1 = (int *)((int)this + 0xc);
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    Ordinal_5656(piVar1,8);
    uVar2 = *(undefined2 *)((int)this + 0x14);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
      Ordinal_2456();
    }
    **(undefined2 **)(param_1 + 0x24) = uVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
    Ordinal_5656(*(undefined4 *)((int)this + 4),*(int *)((int)this + 0x10) * *piVar1);
    return;
  }
  Ordinal_4817(piVar1,8);
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
    Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 2);
  }
  uVar3 = **(ushort **)(param_1 + 0x24);
  *(ushort **)(param_1 + 0x24) = *(ushort **)(param_1 + 0x24) + 1;
  *(uint *)((int)this + 0x14) = (uint)uVar3;
  if ((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) {
    Ordinal_731(*(int *)((int)this + 4));
  }
  if (param_2 == 0) {
    iVar4 = Ordinal_729(*(int *)((int)this + 0x10) * *piVar1);
    *(int *)((int)this + 4) = iVar4;
    if (iVar4 == 0) {
      return;
    }
    *(undefined4 *)((int)this + 8) = 1;
  }
  else {
    *(undefined4 *)((int)this + 8) = 0;
    *(int *)((int)this + 4) = param_2;
  }
  Ordinal_4817(*(undefined4 *)((int)this + 4),*(int *)((int)this + 0x10) * *piVar1);
  return;
}

