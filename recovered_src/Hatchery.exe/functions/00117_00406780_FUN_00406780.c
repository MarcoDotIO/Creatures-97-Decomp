/*
 * Program: Hatchery.exe
 * Function: FUN_00406780
 * Entry: 00406780
 * Namespace: Global
 * Prototype: undefined FUN_00406780(void * this, int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00406780(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_18;
  
  if (*(int *)((int)this + 0x14) != 0) {
    if (*(int *)((int)this + 4) < (int)param_3) {
      param_3 = *(uint *)((int)this + 4);
    }
    local_18 = param_4;
    if (*(int *)((int)this + 8) < param_4) {
      local_18 = *(int *)((int)this + 8);
    }
    if (DAT_0040a87c < param_2 + local_18 + -1) {
      local_18 = (DAT_0040a87c - param_2) + 1;
    }
    if (param_2 < DAT_0040a874) {
      local_18 = (local_18 - DAT_0040a874) + param_2;
      param_6 = param_6 + (DAT_0040a874 - param_2);
      param_2 = DAT_0040a874;
    }
    if (0 < local_18) {
      if (param_1 < DAT_0040a870) {
        param_3 = (param_3 - DAT_0040a870) + param_1;
        param_5 = param_5 + (DAT_0040a870 - param_1);
        param_1 = DAT_0040a870;
      }
      if (DAT_0040a878 < (int)(param_1 + param_3 + -1)) {
        param_3 = (DAT_0040a878 - param_1) + 1;
      }
      if (0 < (int)param_3) {
        iVar1 = *(int *)((int)this + 4);
        uVar5 = (int)param_3 >> 0x1f;
        iVar4 = param_3 - (((param_3 ^ uVar5) - uVar5 & 3 ^ uVar5) - uVar5);
        iVar7 = param_3 - iVar4;
        iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
        puVar3 = (undefined4 *)(param_2 * -0x140 + _DAT_0040a860 + param_1 + 0x12ac0);
        puVar6 = (undefined4 *)
                 (*(int *)((int)this + 0x14) + param_5 + param_6 * *(int *)((int)this + 4));
        iVar4 = iVar2;
        do {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          iVar4 = iVar7 + -1;
          if (iVar7 + -1 != 0) {
            do {
              *(undefined1 *)((int)puVar3 + iVar4) = *(undefined1 *)((int)puVar6 + iVar4);
              iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
          }
          puVar6 = (undefined4 *)((int)puVar6 + (iVar1 - param_3) + iVar7);
          puVar3 = (undefined4 *)((int)puVar3 + (-0x140 - param_3) + iVar7);
          local_18 = local_18 + -1;
          iVar4 = iVar2;
        } while (local_18 != 0);
      }
    }
  }
  return;
}

