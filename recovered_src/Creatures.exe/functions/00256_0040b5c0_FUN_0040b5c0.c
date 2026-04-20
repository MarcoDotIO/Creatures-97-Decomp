/*
 * Program: Creatures.exe
 * Function: FUN_0040b5c0
 * Entry: 0040b5c0
 * Namespace: Global
 * Prototype: undefined1 * FUN_0040b5c0(undefined4 param_1, int param_2, int param_3)
 */


undefined1 * __cdecl FUN_0040b5c0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  puVar3 = &param_1;
  iVar4 = 0;
  do {
    uVar2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    (&DAT_00435e70)[iVar4] = uVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    (&DAT_00435e75)[iVar4] = *(undefined1 *)(param_2 + iVar4);
    iVar4 = iVar5;
  } while (iVar5 < 3);
  if (param_3 == -1) {
    DAT_00438908 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    pcVar8 = (char *)(param_3 * 0x80 + 0x11c + DAT_00436ea0);
    do {
      pcVar10 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar10 + -uVar6;
    pcVar10 = &DAT_00438908;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_00435e70;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar4 = -1;
  pcVar8 = &DAT_00438908;
  do {
    pcVar9 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return &DAT_00438908;
}

