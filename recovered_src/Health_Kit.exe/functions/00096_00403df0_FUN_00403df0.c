/*
 * Program: Health_Kit.exe
 * Function: FUN_00403df0
 * Entry: 00403df0
 * Namespace: Global
 * Prototype: undefined FUN_00403df0(void * this, int param_1, void * param_2)
 */


void __thiscall FUN_00403df0(void *this,int param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  int local_2c;
  int local_28;
  RECT local_20;
  RECT local_10;
  
  uVar5 = *(int *)(*(int *)((int)param_2 + 4) + 4) + 3U & 0xfffffffc;
  local_28 = *(int *)((int)this + 0x104) + 1 + param_1;
  iVar6 = param_1;
  if (param_1 < 0x61) {
    iVar6 = local_28;
  }
  iVar2 = param_1;
  if (param_1 < 0x69) {
    iVar2 = local_28;
  }
  if (0x70 < param_1) {
    local_28 = param_1;
  }
  local_28 = local_28 + -0x70;
  local_20.left = FUN_00402620(param_2,iVar6 + -0x60,0xc2);
  local_10.left = FUN_00402620(param_2,iVar2 + -0x68,0xc2);
  iVar6 = iVar6 + -0x5c;
  iVar2 = FUN_00402620(param_2,local_28,0xc2);
  local_2c = 3;
  do {
    pcVar3 = (char *)(local_20.left + local_2c);
    pcVar4 = (char *)(local_10.left + local_2c);
    pcVar7 = (char *)(local_2c + iVar2);
    iVar8 = 0xc2;
    do {
      cVar1 = *pcVar3;
      if (cVar1 == '\x1e') {
        *pcVar3 = '\0';
      }
      else if (cVar1 == 'V') {
        *pcVar3 = '\x1e';
      }
      else if (cVar1 == -0x44) {
        *pcVar3 = 'V';
      }
      if (*pcVar4 == '\x1e') {
        *pcVar4 = '\0';
      }
      else if (*pcVar4 == 'V') {
        *pcVar4 = '\x1e';
      }
      if (*pcVar7 != '\0') {
        *pcVar7 = '\0';
      }
      pcVar3 = pcVar3 + uVar5;
      pcVar4 = pcVar4 + uVar5;
      pcVar7 = pcVar7 + uVar5;
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar9);
    bVar9 = local_2c != 0;
    local_2c = local_2c + -1;
  } while (bVar9);
  if (iVar6 <= local_28) {
    local_20.right = *(int *)(*(int *)((int)param_2 + 4) + 4) + 3U & 0xfffffffc;
    local_20.left = *(int *)((int)this + 0x100) + local_28;
    local_20.top = 0x87;
    local_20.bottom = 0xc3;
    FUN_00403fe0(this,&local_20);
    local_10.left = *(LONG *)((int)this + 0x100);
    local_10.right = *(int *)((int)this + 0x104) + iVar6;
    local_10.top = 0x87;
    local_10.bottom = 0xc3;
    FUN_00403fe0(this,&local_10);
    return;
  }
  local_20.left = *(LONG *)((int)this + 0x100);
  local_20.top = 0x87;
  local_20.bottom = 0xc3;
  local_20.right = iVar6;
  FUN_00403fe0(this,&local_20);
  return;
}

