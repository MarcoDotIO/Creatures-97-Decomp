/*
 * Program: Creatures.exe
 * Function: FUN_0041c930
 * Entry: 0041c930
 * Namespace: Global
 * Prototype: undefined FUN_0041c930(byte * param_1, char * param_2, char * param_3, undefined1 param_4)
 */


void FUN_0041c930(byte *param_1,char *param_2,char *param_3,undefined1 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *unaff_FS_OFFSET;
  bool bVar12;
  byte abStack_c4 [32];
  char acStack_a4 [32];
  char acStack_84 [100];
  undefined1 uStack_20;
  undefined1 uStack_1f;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041cad9;
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_392();
  uStack_8 = 2;
  FUN_00408420(&DAT_00439e50,0,s_NumTools_004365f0,(LPBYTE)&iStack_14,0);
  if (iStack_14 < 10) {
    iVar3 = 0;
    if (0 < iStack_14) {
      iVar9 = 0;
      do {
        pbVar4 = (byte *)(DAT_00436ea8 + iVar9 + 0xc4);
        pbVar8 = param_1;
        do {
          bVar2 = *pbVar4;
          bVar12 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_0041c9e2:
            iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_0041c9e7;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar12 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_0041c9e2;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_0041c9e7:
        if (iVar5 == 0) goto LAB_0041c98f;
        iVar9 = iVar9 + 0xae;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack_14);
    }
    uVar6 = 0xffffffff;
    DAT_004365e4 = (char)iStack_14 + '0';
    do {
      pbVar8 = param_1;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar8 = param_1 + 1;
      bVar2 = *param_1;
      param_1 = pbVar8;
    } while (bVar2 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar8 + -uVar6;
    pbVar4 = abStack_c4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar4 = pbVar4 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar4 = pbVar4 + 1;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar10 = param_2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar10 + -uVar6;
    pcVar11 = acStack_a4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar10 = param_3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar10 + -uVar6;
    pcVar11 = acStack_84;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uStack_20 = param_4;
    uStack_1f = 0;
    FUN_00408510(&DAT_00439e50,0,&DAT_004365e0,abStack_c4,0xae);
    FUN_004085a0(&DAT_00439e50,0,s_NumTools_004365f0);
    FUN_0041caf0();
  }
LAB_0041c98f:
  uStack_8 = 0xffffffff;
  FUN_0041cae3();
  *unaff_FS_OFFSET = uStack_10;
  return;
}

