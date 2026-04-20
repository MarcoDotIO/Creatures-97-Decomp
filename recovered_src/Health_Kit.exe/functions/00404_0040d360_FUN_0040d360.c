/*
 * Program: Health_Kit.exe
 * Function: FUN_0040d360
 * Entry: 0040d360
 * Namespace: Global
 * Prototype: undefined FUN_0040d360(void * this, void * param_1, int param_2, int * param_3, int * param_4)
 */


void __thiscall FUN_0040d360(void *this,void *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = 0;
  if (param_1 != (void *)0x0) {
    iVar7 = 0;
    uVar6 = *(uint *)((int)this + 0x14);
    local_8 = *param_3;
    local_4 = param_3[1];
    local_c = *(int *)((int)this + 0x10);
    if (param_4 != (int *)0x0) {
      local_8 = *param_4;
      local_4 = param_4[1];
      iVar7 = param_4[1] - param_3[1];
      uVar6 = param_4[2] - local_8;
      iVar2 = local_8 - *param_3;
      local_c = param_4[3] - param_4[1];
    }
    pcVar3 = (char *)FUN_0040d330(this,iVar2,local_c + iVar7 + -1);
    pcVar4 = (char *)FUN_00402620(param_1,local_8,local_4 + local_c + -1);
    iVar2 = *(int *)((int)this + 0xc);
    uVar5 = *(int *)(*(int *)((int)param_1 + 4) + 4) + 3U & 0xfffffffc;
    if (param_2 == 0) {
      while (local_c != 0) {
        local_c = local_c + -1;
        pcVar8 = pcVar3;
        pcVar10 = pcVar4;
        for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar9 = uVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        pcVar3 = pcVar3 + iVar2;
        pcVar4 = pcVar4 + uVar5;
      }
    }
    else if (local_c != 0) {
      do {
        local_c = local_c + -1;
        uVar9 = uVar6;
        while (uVar9 != 0) {
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          if (cVar1 != '\0') {
            *pcVar4 = cVar1;
          }
          pcVar4 = pcVar4 + 1;
        }
        pcVar3 = pcVar3 + (iVar2 - uVar6);
        pcVar4 = pcVar4 + (uVar5 - iVar2) + (iVar2 - uVar6);
      } while (local_c != 0);
      return;
    }
  }
  return;
}

