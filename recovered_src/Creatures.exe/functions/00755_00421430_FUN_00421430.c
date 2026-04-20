/*
 * Program: Creatures.exe
 * Function: FUN_00421430
 * Entry: 00421430
 * Namespace: Global
 * Prototype: undefined FUN_00421430(void * param_1)
 */


void __fastcall FUN_00421430(void *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint local_50 [20];
  
  bVar5 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  uVar6 = 0;
  uVar3 = local_50[0];
  do {
    bVar2 = *(byte *)((int)param_1 + uVar6 + 0x2b06);
    if (bVar5 < bVar2) {
      uVar3 = uVar6;
      bVar5 = bVar2;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x10);
  if (bVar5 < 0x40) {
    FUN_004211e0(param_1,(char *)local_50);
    uVar3 = 0xffffffff;
    pcVar7 = (char *)((int)param_1 + 0x19ff);
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_00421830(param_1,(char *)local_50);
    return;
  }
  switch(uVar3) {
  case 0:
    pcVar7 = (char *)((int)param_1 + 0x169f);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 1:
    uVar3 = 0xffffffff;
    pcVar7 = (char *)((int)param_1 + 0xc13);
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = (char *)&DAT_00436294;
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = (char *)((int)param_1 + 0x19ff);
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = (char *)&DAT_00436294;
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar7 = (char *)((int)param_1 + 0xe2f);
    break;
  case 2:
    pcVar7 = (char *)((int)param_1 + 0xf07);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 3:
    pcVar7 = (char *)((int)param_1 + 0x1741);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 4:
    pcVar7 = (char *)((int)param_1 + 0x1777);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 5:
  case 6:
    pcVar7 = (char *)((int)param_1 + 0xcb5);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 7:
    uVar3 = 0xffffffff;
    pcVar7 = (char *)((int)param_1 + 0xba7);
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = FUN_00414ec0((int)param_1);
    pcVar7 = (char *)(uVar3 * 0x36 + 0xe2f + (int)param_1);
    break;
  case 8:
    uVar3 = 0xffffffff;
    pcVar7 = (char *)((int)param_1 + 0xbdd);
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar8 = local_50;
    do {
      puVar9 = puVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar9 = (uint *)((int)puVar8 + 1);
      uVar6 = *puVar8;
      puVar8 = puVar9;
    } while ((char)uVar6 != '\0');
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = (char *)((int)puVar9 + -1);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = FUN_00414ec0((int)param_1);
    pcVar7 = (char *)(uVar3 * 0x36 + 0xe2f + (int)param_1);
    break;
  case 9:
    pcVar7 = (char *)((int)param_1 + 0xbdd);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 10:
    pcVar7 = (char *)((int)param_1 + 0x18bb);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  case 0xb:
    pcVar7 = (char *)((int)param_1 + 0x18f1);
    FUN_004211e0(param_1,(char *)local_50);
    break;
  default:
    goto switchD_004214bb_default;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar10 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  puVar8 = local_50;
  do {
    puVar9 = puVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar9 = (uint *)((int)puVar8 + 1);
    uVar6 = *puVar8;
    puVar8 = puVar9;
  } while ((char)uVar6 != '\0');
  pcVar7 = pcVar10 + -uVar3;
  pcVar10 = (char *)((int)puVar9 + -1);
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
switchD_004214bb_default:
  FUN_00421830(param_1,(char *)local_50);
  return;
}

