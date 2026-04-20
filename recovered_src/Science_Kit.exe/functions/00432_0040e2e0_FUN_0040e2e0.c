/*
 * Program: Science_Kit.exe
 * Function: FUN_0040e2e0
 * Entry: 0040e2e0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040e2e0(int param_1)
 */


undefined4 __fastcall FUN_0040e2e0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int local_464;
  CHAR local_460;
  undefined4 local_45f;
  CHAR local_400;
  undefined4 local_3ff;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
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
    puVar7 = (undefined4 *)(param_1 + 0x154);
    *(undefined1 *)((int)puVar9 + 2) = 0;
    wsprintfA(&local_400,s_inst__0041512c);
    local_464 = 4;
    do {
      wsprintfA(&local_460,s_dde__putv_chem__d__0041580c,*puVar7);
      uVar5 = 0xffffffff;
      pcVar8 = &local_460;
      do {
        pcVar11 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
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
      puVar7 = puVar7 + 1;
      pcVar8 = pcVar11 + -uVar5;
      pcVar11 = pcVar10 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_464 = local_464 + -1;
    } while (local_464 != 0);
    uVar5 = 0xffffffff;
    pcVar8 = (char *)&DAT_004150a4;
    do {
      pcVar11 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
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
    pcVar8 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    bVar2 = FUN_004081c0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),&local_400);
    uVar3 = CONCAT31(extraout_var,bVar2);
    *(undefined4 *)(param_1 + 0x98) = uVar3;
  }
  return uVar3;
}

