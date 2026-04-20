/*
 * Program: Creatures.exe
 * Function: FUN_0042ba10
 * Entry: 0042ba10
 * Namespace: Global
 * Prototype: undefined FUN_0042ba10(void * this, void * param_1)
 */


void __thiscall FUN_0042ba10(void *this,void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (*(char *)((int)param_1 + 0x18) == '\0') {
    FUN_0041bd90((int)param_1);
    iVar2 = FUN_0041be70(param_1,0,0,1,2);
    while (iVar2 != 0) {
      uVar1 = FUN_0041bf70((int)param_1);
      if (CONCAT31(extraout_var,uVar1) == 0) {
        FUN_0042a1b0((void *)((int)this + *(int *)((int)this + 0xc28) * 0xc2 + 8),param_1,
                     *(int *)((int)this + 0xc28));
        *(int *)((int)this + 0xc28) = *(int *)((int)this + 0xc28) + 1;
      }
      iVar2 = FUN_0041be70(param_1,0,0,1,2);
    }
    FUN_0041bd90((int)param_1);
    iVar2 = FUN_0041be70(param_1,0,0,1,2);
    while (iVar2 != 0) {
      uVar1 = FUN_0041bf70((int)param_1);
      if (CONCAT31(extraout_var_00,uVar1) != 0) {
        FUN_0042a1b0((void *)((int)this + *(int *)((int)this + 0xc28) * 0xc2 + 8),param_1,
                     *(int *)((int)this + 0xc28));
        *(int *)((int)this + 0xc28) = *(int *)((int)this + 0xc28) + 1;
      }
      iVar2 = FUN_0041be70(param_1,0,0,1,2);
    }
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0xc28)) {
      piVar6 = (int *)((int)this + 0x2b);
      do {
        iVar4 = 2;
        piVar5 = piVar6;
        do {
          iVar4 = iVar4 + -1;
          *piVar5 = *piVar5 % *(int *)((int)this + 0xc28);
          piVar5 = (int *)((int)piVar5 + 0x3a);
        } while (iVar4 != 0);
        piVar6 = (int *)((int)piVar6 + 0xc2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0xc28));
    }
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0xc28)) {
      iVar4 = (int)this + 8;
      do {
        iVar2 = iVar2 + 1;
        FUN_0042a2f0(iVar4);
        iVar4 = iVar4 + 0xc2;
      } while (iVar2 < *(int *)((int)this + 0xc28));
    }
    iVar4 = 0;
    FUN_0042bbb0((int)this);
    iVar2 = 1;
    if (1 < *(int *)((int)this + 0xc28)) {
      piVar6 = (int *)((int)this + 0x179);
      do {
        if ((*piVar6 != 0) && (iVar3 = 0, 0 < piVar6[-4])) {
          iVar7 = iVar4 << 4;
          do {
            if (*piVar6 == 2) {
              *(char *)(*(int *)((int)this + 0x9f) + 0xf + iVar7) = (char)iVar2;
            }
            iVar7 = iVar7 + 0x10;
            iVar4 = iVar4 + 1;
            if (*(int *)((int)this + 0xa7) <= iVar4) {
              return;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < piVar6[-4]);
        }
        if (*(int *)((int)this + 0xa7) <= iVar4) {
          return;
        }
        piVar6 = (int *)((int)piVar6 + 0xc2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0xc28));
    }
  }
  return;
}

