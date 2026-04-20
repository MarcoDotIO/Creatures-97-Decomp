/*
 * Program: Creatures.exe
 * Function: FUN_0042bc20
 * Entry: 0042bc20
 * Namespace: Global
 * Prototype: undefined FUN_0042bc20(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0042bc20(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  void *this_00;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_10;
  undefined1 local_8;
  int local_4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)((int)this + 0x10) * *(int *)((int)this + 0xc);
  uVar8 = (uint)*(byte *)((int)this + param_1 * 0x3a + 0x2a);
  iVar2 = *(int *)(param_2 + 0x10);
  if (0 < iVar3) {
    local_1c = 0;
    local_18 = 0;
    this_00 = (void *)(iVar2 * iVar1);
    local_4 = iVar3;
    do {
      iVar4 = local_1c / iVar3;
      iVar9 = *(int *)((int)this + 0x97) + local_18;
      if (*(char *)(param_1 + 0xc + iVar9) != '\0') {
        this_00 = *(void **)(iVar9 + 4 + param_1 * 4);
        local_10 = (undefined1)(iVar4 % iVar1);
        local_8 = (undefined1)(iVar4 / iVar1);
        *(undefined1 *)((int)this_00 + 4) = local_10;
        *(undefined1 *)((int)this_00 + 5) = local_8;
        FUN_0042a610(this_00,*(int *)(param_2 + 0x97) + iVar4 * 0x10,param_2,(int)this,param_1);
      }
      pvVar10 = this_00;
      for (local_20 = 1; this_00 = (void *)((int)pvVar10 + 10),
          local_20 < (int)(uint)*(byte *)(param_1 + 0xc + iVar9); local_20 = local_20 + 1) {
        iVar7 = uVar8 * 2 + 1;
        iVar5 = rand();
        iVar5 = iVar4 % iVar1 + (iVar5 % iVar7 - uVar8);
        iVar6 = rand();
        iVar7 = iVar4 / iVar1 + (iVar6 % iVar7 - uVar8);
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        if (iVar1 <= iVar5) {
          iVar5 = iVar1 + -1;
        }
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        if (iVar2 <= iVar7) {
          iVar7 = iVar2 + -1;
        }
        *(char *)((int)pvVar10 + 0xe) = (char)iVar5;
        *(char *)((int)pvVar10 + 0xf) = (char)iVar7;
        FUN_0042a610(this_00,*(int *)(param_2 + 0x97) + (iVar1 * iVar7 + iVar5) * 0x10,param_2,
                     (int)this,param_1);
        pvVar10 = this_00;
      }
      local_1c = local_1c + iVar2 * iVar1;
      local_18 = local_18 + 0x10;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

