/*
 * Program: Creatures.exe
 * Function: FUN_00413a20
 * Entry: 00413a20
 * Namespace: Global
 * Prototype: undefined FUN_00413a20(void * this, void * param_1)
 */


void __thiscall FUN_00413a20(void *this,void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  FUN_00413730(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    Ordinal_5671(*(undefined4 *)((int)this + 0x54));
    uVar1 = *(undefined1 *)((int)this + 0x58);
    if (*(uint *)((int)param_1 + 0x28) < *(int *)((int)param_1 + 0x24) + 1U) {
      Ordinal_2456();
    }
    **(undefined1 **)((int)param_1 + 0x24) = uVar1;
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
    return;
  }
  iVar2 = FUN_00413340(param_1,(undefined4 *)((int)this + 0x54));
  if (*(uint *)(iVar2 + 0x28) < *(int *)(iVar2 + 0x24) + 1U) {
    Ordinal_2403((*(int *)(iVar2 + 0x24) - *(uint *)(iVar2 + 0x28)) + 1);
  }
  *(undefined1 *)((int)this + 0x58) = **(undefined1 **)(iVar2 + 0x24);
  *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
  return;
}

