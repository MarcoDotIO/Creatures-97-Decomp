/*
 * Program: Hatchery.exe
 * Function: FUN_004065c0
 * Entry: 004065c0
 * Namespace: Global
 * Prototype: undefined FUN_004065c0(void * this, int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004065c0(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  if (*(int *)((int)this + 0x10) == 0) {
    if (*(int *)((int)this + 0x14) != 0) {
      uVar1 = *(uint *)((int)this + 4);
      if ((int)uVar1 < (int)param_3) {
        param_3 = uVar1;
      }
      local_c = param_4;
      if (*(int *)((int)this + 8) < param_4) {
        local_c = *(int *)((int)this + 8);
      }
      if (DAT_0040a87c < param_2 + local_c + -1) {
        local_c = (DAT_0040a87c - param_2) + 1;
      }
      if (param_2 < DAT_0040a874) {
        local_c = (local_c - DAT_0040a874) + param_2;
        param_6 = param_6 + (DAT_0040a874 - param_2);
        param_2 = DAT_0040a874;
      }
      if (0 < local_c) {
        if (param_1 < DAT_0040a870) {
          param_3 = param_3 + (param_1 - DAT_0040a870);
          param_5 = param_5 + (DAT_0040a870 - param_1);
          param_1 = DAT_0040a870;
        }
        if (DAT_0040a878 < (int)(param_3 + param_1 + -1)) {
          param_3 = (DAT_0040a878 - param_1) + 1;
        }
        if (0 < (int)param_3) {
          iVar2 = param_2 * -0x140 + param_1 + _DAT_0040a860 + 0x12ac0;
          iVar3 = *(int *)((int)this + 0x14) + param_5 + param_6 * uVar1;
          iVar4 = param_3 - 1;
          do {
            do {
              if (*(char *)(iVar3 + iVar4) != '\0') {
                *(char *)(iVar2 + iVar4) = *(char *)(iVar3 + iVar4);
              }
              iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
            iVar2 = iVar2 + -0x140;
            iVar3 = iVar3 + uVar1;
            local_c = local_c + -1;
            iVar4 = param_3 - 1;
          } while (local_c != 0);
        }
      }
    }
    return;
  }
  FUN_00406780(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

