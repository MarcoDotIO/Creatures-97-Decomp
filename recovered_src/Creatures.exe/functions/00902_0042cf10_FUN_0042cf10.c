/*
 * Program: Creatures.exe
 * Function: FUN_0042cf10
 * Entry: 0042cf10
 * Namespace: Global
 * Prototype: undefined FUN_0042cf10(void * this, int param_1, int param_2, int param_3)
 */


void __thiscall FUN_0042cf10(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  void *this_00;
  
  iVar1 = param_1 + 8 + *(int *)(param_2 + 0x23 + param_3 * 0x3a) * 0xc2;
  if ((*(char *)((int)this + 2) != '\0') && (iVar4 = *(int *)(iVar1 + 0xab), iVar4 != 0)) {
    iVar6 = 0;
    this_00 = *(void **)((int)this + param_3 * 4 + 4);
    bVar2 = *(byte *)(param_3 + 0xc + (int)this);
    if (bVar2 != 0) {
      do {
        if (*(char *)((int)this_00 + 9) == '\0') break;
        iVar6 = iVar6 + 1;
        this_00 = (void *)((int)this_00 + 10);
      } while (iVar6 < (int)(uint)bVar2);
    }
    if (iVar6 < (int)(uint)bVar2) {
      iVar6 = rand();
      piVar7 = *(int **)((int)this + param_3 * 4 + 4);
      bVar2 = *(byte *)(param_3 + 0xc + (int)this);
      iVar5 = 0;
      iVar4 = *(int *)(*(int *)(iVar1 + 0xa7) + (iVar6 % iVar4) * 4);
      if (bVar2 != 0) {
        do {
          if (*piVar7 == iVar4) {
            return;
          }
          iVar5 = iVar5 + 1;
          piVar7 = (int *)((int)piVar7 + 10);
        } while (iVar5 < (int)(uint)bVar2);
      }
      FUN_0042a610(this_00,iVar4,iVar1,param_2,param_3);
      cVar3 = *(char *)(param_2 + 0xbc + param_3);
      if (cVar3 != '\0') {
        *(char *)(param_2 + 0xbc + param_3) = cVar3 + -1;
      }
    }
  }
  return;
}

