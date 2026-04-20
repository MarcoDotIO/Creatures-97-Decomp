/*
 * Program: Creatures.exe
 * Function: FUN_0040b670
 * Entry: 0040b670
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040b670(char * param_1, int param_2)
 */


undefined4 * __cdecl FUN_0040b670(char *param_1,int param_2)

{
  char cVar1;
  BYTE BVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  BYTE *pBVar6;
  char *pcVar7;
  BYTE *pBVar8;
  char *pcVar9;
  char *pcVar10;
  BYTE local_158 [64];
  undefined1 local_118 [280];
  
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = (char *)&DAT_00438988;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar3 = Ordinal_3307(&DAT_00438988,local_118);
  if (iVar3 == 0) {
    if (param_2 != 0) {
      return (undefined4 *)0x0;
    }
    FUN_004083b0(&DAT_00439e50,1,s_CD_Drive_00435e9c,local_158,0x20,&DAT_00435ea8);
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&DAT_00435d30;
    do {
      pcVar10 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pBVar6 = local_158;
    do {
      pBVar8 = pBVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pBVar8 = pBVar6 + 1;
      BVar2 = *pBVar6;
      pBVar6 = pBVar8;
    } while (BVar2 != '\0');
    pBVar6 = (BYTE *)(pcVar10 + -uVar4);
    pBVar8 = pBVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pBVar8 = *(undefined4 *)pBVar6;
      pBVar6 = pBVar6 + 4;
      pBVar8 = pBVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar8 = *pBVar6;
      pBVar6 = pBVar6 + 1;
      pBVar8 = pBVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pBVar6 = local_158;
    do {
      pBVar8 = pBVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pBVar8 = pBVar6 + 1;
      BVar2 = *pBVar6;
      pBVar6 = pBVar8;
    } while (BVar2 != '\0');
    uVar4 = ~uVar4;
    pBVar6 = pBVar8 + -uVar4;
    pBVar8 = (BYTE *)&DAT_00438988;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pBVar8 = *(undefined4 *)pBVar6;
      pBVar6 = pBVar6 + 4;
      pBVar8 = pBVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar8 = *pBVar6;
      pBVar6 = pBVar6 + 1;
      pBVar8 = pBVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = "Genetics";
    do {
      pcVar10 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar7 = (char *)&DAT_00438988;
    do {
      pcVar9 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar7 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    while (iVar3 = Ordinal_3307(&DAT_00438988,local_118), iVar3 == 0) {
      iVar3 = Ordinal_1060(0xef14,0x35,0xffffffff);
      if (iVar3 == 2) {
        return (undefined4 *)0x0;
      }
    }
    uVar4 = 0xffffffff;
    pBVar6 = local_158;
    do {
      pBVar8 = pBVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pBVar8 = pBVar6 + 1;
      BVar2 = *pBVar6;
      pBVar6 = pBVar8;
    } while (BVar2 != '\0');
    uVar4 = ~uVar4;
    pBVar6 = pBVar8 + -uVar4;
    pBVar8 = (BYTE *)&DAT_00438988;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pBVar8 = *(undefined4 *)pBVar6;
      pBVar6 = pBVar6 + 4;
      pBVar8 = pBVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar8 = *pBVar6;
      pBVar6 = pBVar6 + 1;
      pBVar8 = pBVar8 + 1;
    }
    if (param_1[1] == ':') {
      param_1 = param_1 + 3;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar7 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar10 = (char *)&DAT_00438988;
    do {
      pcVar9 = pcVar10;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar9;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar3 = Ordinal_3307(&DAT_00438988,local_118);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
  }
  return &DAT_00438988;
}

