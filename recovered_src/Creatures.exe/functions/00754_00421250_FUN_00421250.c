/*
 * Program: Creatures.exe
 * Function: FUN_00421250
 * Entry: 00421250
 * Namespace: Global
 * Prototype: undefined FUN_00421250(int * param_1)
 */


void __fastcall FUN_00421250(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_54;
  char local_50 [24];
  undefined1 local_38;
  
  if (*(char *)((int)param_1 + 0x115) != '\0') {
    return;
  }
  local_50[0] = '\0';
  iVar3 = rand();
  if (iVar3 % 3 == 0) {
    FUN_004211e0(param_1,local_50);
    iVar3 = 0;
    uVar9 = 0;
    uVar4 = FUN_00414ec0((int)param_1);
    FUN_00401870(param_1,7,uVar4 + 0x10,uVar9,iVar3);
  }
  cVar2 = (&DAT_00436ab8)[*(char *)((int)param_1 + 0x833)];
  if (cVar2 == -1) {
    return;
  }
  uVar4 = 0xffffffff;
  pcVar6 = (char *)(cVar2 * 0x36 + 0xacf + (int)param_1);
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = local_50;
  do {
    pcVar7 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  local_54 = 0;
  if (((*(int *)((int)param_1 + 0x7e6) == 0) ||
      ((&DAT_00436ac8)[*(char *)((int)param_1 + 0x833)] == '\0')) ||
     (iVar3 = rand(), iVar3 % 3 != 0)) {
    local_38 = 0;
    FUN_00421790(param_1,local_50,&local_54);
  }
  else {
    uVar4 = 0xffffffff;
    pcVar6 = (char *)&DAT_00436294;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar6 = local_50;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = FUN_00414ec0(*(int *)((int)param_1 + 0x7e6));
    uVar5 = 0xffffffff;
    pcVar6 = (char *)(uVar4 * 0x36 + 0xe2f + (int)param_1);
    do {
      pcVar8 = pcVar6;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pcVar6 = local_50;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar5;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_38 = 0;
    FUN_00421790(param_1,local_50,&local_54);
    uVar9 = 0;
    iVar3 = local_54;
    uVar4 = FUN_00414ec0(*(int *)((int)param_1 + 0x7e6));
    FUN_00401870(param_1,7,uVar4 + 0x10,uVar9,iVar3);
  }
  FUN_00401870(param_1,7,(int)cVar2,0,local_54);
  FUN_00421830(param_1,local_50);
  return;
}

