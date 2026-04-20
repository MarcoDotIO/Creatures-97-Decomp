/*
 * Program: Creatures.exe
 * Function: FUN_0041c952
 * Entry: 0041c952
 * Namespace: Global
 * Prototype: undefined FUN_0041c952(void)
 */


void FUN_0041c952(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int unaff_EBP;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  bool bVar13;
  
  Ordinal_392();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00408420(&DAT_00439e50,0,s_NumTools_004365f0,(LPBYTE)(unaff_EBP + -0x10),0);
  if (*(int *)(unaff_EBP + -0x10) < 10) {
    iVar3 = 0;
    if (*(int *)(unaff_EBP + -0x10) < 1) {
      pbVar10 = *(byte **)(unaff_EBP + 8);
    }
    else {
      iVar9 = 0;
      pbVar10 = *(byte **)(unaff_EBP + 8);
      do {
        pbVar4 = (byte *)(DAT_00436ea8 + iVar9 + 0xc4);
        pbVar8 = pbVar10;
        do {
          bVar2 = *pbVar4;
          bVar13 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_0041c9e2:
            iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0041c9e7;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar13 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_0041c9e2;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_0041c9e7:
        if (iVar5 == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_0041c98f;
        }
        iVar9 = iVar9 + 0xae;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_EBP + -0x10));
    }
    uVar6 = 0xffffffff;
    DAT_004365e4 = (char)*(undefined4 *)(unaff_EBP + -0x10) + '0';
    do {
      pbVar8 = pbVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar8 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar8;
    } while (bVar2 != 0);
    uVar6 = ~uVar6;
    pbVar10 = pbVar8 + -uVar6;
    pbVar8 = (byte *)(unaff_EBP + -0xc0);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar8 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar8 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar11 = *(char **)(unaff_EBP + 0xc);
    do {
      pcVar12 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar12 + -uVar6;
    pcVar12 = (char *)(unaff_EBP + -0xa0);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar11 = *(char **)(unaff_EBP + 0x10);
    do {
      pcVar12 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar12 + -uVar6;
    pcVar12 = (char *)(unaff_EBP + -0x80);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -0x1b) = 0;
    FUN_00408510(&DAT_00439e50,0,&DAT_004365e0,(BYTE *)(unaff_EBP + -0xc0),0xae);
    FUN_004085a0(&DAT_00439e50,0,s_NumTools_004365f0);
    FUN_0041caf0();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
LAB_0041c98f:
  FUN_0041cae3();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

