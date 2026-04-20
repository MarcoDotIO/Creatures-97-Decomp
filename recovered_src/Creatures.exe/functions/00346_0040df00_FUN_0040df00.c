/*
 * Program: Creatures.exe
 * Function: FUN_0040df00
 * Entry: 0040df00
 * Namespace: Global
 * Prototype: undefined FUN_0040df00(int param_1)
 */


void __fastcall FUN_0040df00(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  puVar9 = (undefined4 *)(param_1 + 0x58);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar3 = 100;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 100;
  *(undefined1 *)(param_1 + 0x112) = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined1 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined4 *)(param_1 + 0x102) = *(undefined4 *)(param_1 + 0xf2);
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x106) = *(undefined4 *)(param_1 + 0xf6);
  *(undefined4 *)(param_1 + 0x10a) = *(undefined4 *)(param_1 + 0xfa);
  *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)(param_1 + 0xfe);
  pcVar8 = &DAT_00435ff0;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = (char *)(param_1 + 0x7e);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00435ff0;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = (char *)(param_1 + 0x8e);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  pcVar7 = (char *)(param_1 + 0x116);
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  do {
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_00435ff0;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = pcVar7;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    pcVar7 = pcVar7 + 0x10;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0040eac0(param_1);
  bVar2 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0x7e6) = 0;
  *(undefined4 *)(param_1 + 0x7f2) = 0;
  *(byte *)(param_1 + 9) = bVar2 | 4;
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(byte *)(param_1 + 9) = bVar2 | 0x44;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x115) = 0;
  *(int *)(param_1 + 0xbe) = param_1 + 0x9e;
  uVar4 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x114) = 1;
  pcVar8 = &DAT_00436168;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = (char *)(param_1 + 0x756);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  puVar6 = (undefined1 *)(param_1 + 0x768);
  iVar3 = 7;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 0x12;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x7f6) = 0;
  return;
}

