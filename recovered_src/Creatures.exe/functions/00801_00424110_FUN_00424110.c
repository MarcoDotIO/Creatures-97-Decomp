/*
 * Program: Creatures.exe
 * Function: FUN_00424110
 * Entry: 00424110
 * Namespace: Global
 * Prototype: undefined FUN_00424110(void * this, char * param_1)
 */


void __thiscall FUN_00424110(void *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar3 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar6 = ~uVar3 + 5;
  if (*(int *)((int)this + 0x14) < iVar6) {
    Ordinal_731(*(undefined4 *)((int)this + 0xc));
    uVar2 = Ordinal_729(iVar6);
    *(undefined4 *)((int)this + 0x10) = uVar2;
    *(undefined4 *)((int)this + 0xc) = uVar2;
    *(int *)((int)this + 0x14) = iVar6;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar8 + -uVar4;
  pcVar7 = *(char **)((int)this + 0xc);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar8 = *(char **)((int)this + 0xc);
  if (*pcVar8 != '\0') {
    if (*(int *)(pcVar8 + (~uVar3 - 5)) != 0x6d646e65) {
      uVar3 = 0xffffffff;
      pcVar7 = (char *)&DAT_00436c2c;
      do {
        pcVar9 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar6 = -1;
      do {
        pcVar7 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar3;
      pcVar7 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    return;
  }
  uVar3 = 0xffffffff;
  pcVar7 = (char *)&DAT_00436c34;
  do {
    pcVar9 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar9 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return;
}

