/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403260
 * Entry: 00403260
 * Namespace: Global
 * Prototype: undefined FUN_00403260(void * this, int param_1)
 */


void __thiscall FUN_00403260(void *this,int param_1)

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
  FUN_00404520(this,param_1);
  return;
}

