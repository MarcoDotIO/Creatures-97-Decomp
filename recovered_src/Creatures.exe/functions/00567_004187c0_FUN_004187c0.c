/*
 * Program: Creatures.exe
 * Function: FUN_004187c0
 * Entry: 004187c0
 * Namespace: Global
 * Prototype: undefined FUN_004187c0(void * this, LONG param_1)
 */


void __thiscall FUN_004187c0(void *this,LONG param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LONG unaff_retaddr;
  undefined1 local_10 [16];
  
  iVar4 = *(int *)this;
  (**(code **)(iVar4 + 0x60))(local_10);
  iVar1 = FUN_0042daa0(DAT_00438594,unaff_retaddr,param_1);
  *(undefined4 *)((int)this + *(int *)((int)this + 0x180) * 4 + 0x160) =
       *(undefined4 *)(iVar1 + 0xc);
  iVar2 = (**(code **)(iVar4 + 0x7c))();
  iVar3 = (**(code **)(iVar4 + 0x74))();
  iVar3 = iVar2 / 2 + iVar3;
  iVar2 = (**(code **)(iVar4 + 0x78))();
  iVar4 = (**(code **)(iVar4 + 0x70))();
  iVar4 = FUN_0042daa0(DAT_00438594,iVar2 / 2 + iVar4,iVar3);
  if (iVar4 == iVar1) {
    *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0x180);
  }
  *(int *)((int)this + 0x180) = *(int *)((int)this + 0x180) + 1;
  return;
}

