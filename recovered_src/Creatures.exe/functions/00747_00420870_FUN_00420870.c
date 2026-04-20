/*
 * Program: Creatures.exe
 * Function: FUN_00420870
 * Entry: 00420870
 * Namespace: Global
 * Prototype: undefined FUN_00420870(void * this, int param_1)
 */


void __thiscall FUN_00420870(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_c [12];
  
  pcVar10 = (char *)((int)this + param_1 * 0x36 + 0xab6);
  pcVar8 = (char *)((int)this + param_1 * 0x36 + 0xacf);
  pcVar4 = strchr(s_aeiouAEIOU_004369a8,(int)*(char *)((int)this + param_1 * 0x36 + 0xab6));
  pcVar9 = pcVar10;
  if (pcVar4 == (char *)0x0) {
    for (pcVar4 = strchr(s_aeiouAEIOU_004369a8,(int)*pcVar10); pcVar4 == (char *)0x0;
        pcVar4 = strchr(s_aeiouAEIOU_004369a8,(int)*pcVar4)) {
      pcVar4 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcVar4 = strchr(s_aeiouAEIOU_004369a8,(int)*pcVar9);
  }
  else {
    for (pcVar4 = strchr(s_aeiouAEIOU_004369a8,(int)*pcVar10); pcVar4 != (char *)0x0;
        pcVar4 = strchr(s_aeiouAEIOU_004369a8,(int)*pcVar4)) {
      pcVar4 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcVar4 = strchr(s_bcdfghjklmnpqrstvwxyzBCDFGHJKLMN_004369b8,(int)*pcVar9);
  }
  pcVar2 = pcVar10;
  pcVar3 = pcVar8;
  if (pcVar4 != (char *)0x0) {
    pcVar9 = pcVar9 + 1;
  }
  for (; pcVar2 < pcVar9; pcVar2 = pcVar2 + 1) {
    *pcVar3 = *pcVar2;
    pcVar3 = pcVar3 + 1;
  }
  uVar5 = 0xffffffff;
  *pcVar3 = '\0';
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  if (~uVar5 - 1 < 6) {
LAB_0042095a:
    uVar5 = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (2 < ~uVar5 - 1) goto LAB_004209bf;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (4 < ~uVar5 - 1) goto LAB_0042095a;
  }
  uVar5 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    pcVar9 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar10 = pcVar9 + -uVar5;
  pcVar9 = local_c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = local_c;
  do {
    pcVar9 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar10 = pcVar8;
  do {
    pcVar4 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar4 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar4;
  } while (cVar1 != '\0');
  pcVar10 = pcVar9 + -uVar5;
  pcVar9 = pcVar4 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar9 = pcVar9 + 1;
  }
LAB_004209bf:
  if (*pcVar8 == '\0') {
    FUN_004209e0(this,param_1);
  }
  return;
}

