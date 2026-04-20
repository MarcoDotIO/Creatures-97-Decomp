/*
 * Program: Health_Kit.exe
 * Function: FUN_0040cde0
 * Entry: 0040cde0
 * Namespace: Global
 * Prototype: undefined FUN_0040cde0(void * this, int param_1)
 */


void __thiscall FUN_0040cde0(void *this,int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined2 *)((int)this + 0x14);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
      Ordinal_2456();
    }
    **(undefined2 **)(param_1 + 0x24) = uVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
    Ordinal_784(param_1,(int)this + 0x20);
  }
  else {
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
      Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 2);
    }
    uVar2 = **(ushort **)(param_1 + 0x24);
    *(ushort **)(param_1 + 0x24) = *(ushort **)(param_1 + 0x24) + 1;
    *(uint *)((int)this + 0x14) = (uint)uVar2;
    Ordinal_781(param_1,(int)this + 0x20);
  }
  FUN_0040a0e0(this,param_1);
  return;
}

