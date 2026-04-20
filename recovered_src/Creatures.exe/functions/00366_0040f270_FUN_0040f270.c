/*
 * Program: Creatures.exe
 * Function: FUN_0040f270
 * Entry: 0040f270
 * Namespace: Global
 * Prototype: undefined FUN_0040f270(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0040f270(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  int local_4;
  
  pvVar1 = *(void **)((int)this + 0x54);
  FUN_0041a310(pvVar1,*(int *)((int)pvVar1 + 0xe) + param_1,*(int *)((int)pvVar1 + 0x12) + param_2);
  local_4 = 6;
  puVar5 = (undefined4 *)((int)this + 0x58);
  do {
    for (pvVar1 = (void *)*puVar5; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x26)) {
      FUN_0041a310(pvVar1,*(int *)((int)pvVar1 + 0xe) + param_1,
                   *(int *)((int)pvVar1 + 0x12) + param_2);
    }
    puVar5 = puVar5 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  piVar3 = (int *)((int)this + 0x72);
  *(int *)((int)this + 0x76) = *(int *)((int)this + 0x76) + param_2;
  iVar4 = 6;
  *piVar3 = *piVar3 + param_1;
  FUN_0040b1b0(piVar3);
  piVar3 = (int *)((int)this + 0xc2);
  do {
    *piVar3 = *piVar3 + param_1;
    FUN_0040b1b0(piVar3);
    iVar4 = iVar4 + -1;
    piVar3[6] = piVar3[6] + param_2;
    piVar3 = piVar3 + 1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x102) = *(undefined4 *)((int)this + 0xf2);
  *(undefined4 *)((int)this + 0x106) = *(undefined4 *)((int)this + 0xf6);
  *(undefined4 *)((int)this + 0x10a) = *(undefined4 *)((int)this + 0xfa);
  *(undefined4 *)((int)this + 0x10e) = *(undefined4 *)((int)this + 0xfe);
  piVar3 = (int *)((int)this + 0xf2);
  iVar4 = *piVar3;
  iVar2 = *(int *)((int)this + 0xfa);
  local_8 = iVar4 + param_1;
  *piVar3 = local_8;
  FUN_0040b1b0(&local_8);
  *piVar3 = local_8;
  *(int *)((int)this + 0xfa) = (iVar2 - iVar4) + local_8;
  *(int *)((int)this + 0xf6) = *(int *)((int)this + 0xf6) + param_2;
  *(int *)((int)this + 0xfe) = *(int *)((int)this + 0xfe) + param_2;
  return;
}

