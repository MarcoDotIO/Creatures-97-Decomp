/*
 * Program: Science_Kit.exe
 * Function: FUN_004025c0
 * Entry: 004025c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004025c0(int param_1)
 */


undefined4 __fastcall FUN_004025c0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_400;
  undefined4 local_3ff;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 0;
  }
  local_400 = '\0';
  puVar7 = &local_3ff;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 2) = 0;
  wsprintfA(&local_400,s_inst__0041512c);
  uVar4 = 0xffffffff;
  pcVar6 = s_dde__putv__it___0041511c;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_dde__putv_chem_54__00415108;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_dde__putv_chem_55__004150f4;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_setv_var0_0__004150e4;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_004150d8;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_dde__cell_6_var0_0__004150c4;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_addv_var0_1__004150b4;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_004150ac;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_004150a4;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = &local_400;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  bVar2 = FUN_004081c0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),&local_400);
  *(uint *)(param_1 + 0x98) = CONCAT31(extraout_var,bVar2);
  return CONCAT31(extraout_var,bVar2);
}

