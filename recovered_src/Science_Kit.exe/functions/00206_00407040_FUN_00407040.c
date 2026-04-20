/*
 * Program: Science_Kit.exe
 * Function: FUN_00407040
 * Entry: 00407040
 * Namespace: Global
 * Prototype: undefined4 FUN_00407040(int param_1)
 */


undefined4 __fastcall FUN_00407040(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  CHAR local_460;
  undefined4 local_45f;
  CHAR local_400;
  undefined4 local_3ff;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    uVar3 = 0;
  }
  else {
    local_460 = '\0';
    puVar9 = &local_45f;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    *(undefined1 *)((int)puVar9 + 2) = 0;
    local_400 = '\0';
    puVar9 = &local_3ff;
    for (iVar4 = 0xff; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    *(undefined1 *)((int)puVar9 + 2) = 0;
    wsprintfA(&local_400,s_inst__0041512c);
    iVar5 = *(int *)(param_1 + 0x11c) >> 3;
    iVar4 = *(int *)(param_1 + 0x118) + 100;
    *(int *)(param_1 + 0x11c) = iVar5;
    *(int *)(param_1 + 0x118) = iVar4;
    wsprintfA(&local_460,s_chem__d__d__00415464,iVar4,iVar5);
    uVar6 = 0xffffffff;
    pcVar8 = &local_460;
    do {
      pcVar11 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar8 = &local_400;
    do {
      pcVar10 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar6;
    pcVar11 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar8 = (char *)&DAT_004150a4;
    do {
      pcVar11 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar8 = &local_400;
    do {
      pcVar10 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar6;
    pcVar11 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + -100;
    bVar2 = FUN_004081c0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),&local_400);
    uVar3 = CONCAT31(extraout_var,bVar2);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
  }
  return uVar3;
}

