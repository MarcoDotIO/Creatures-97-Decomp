/*
 * Program: Health_Kit.exe
 * Function: FUN_0040b2d0
 * Entry: 0040b2d0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b2d0(int param_1)
 */


undefined4 __fastcall FUN_0040b2d0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  CHAR local_460;
  undefined4 local_45f;
  CHAR local_400;
  undefined4 local_3ff;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 0;
  }
  iVar6 = 0;
  local_400 = '\0';
  puVar8 = &local_3ff;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_460 = '\0';
  puVar8 = &local_45f;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  wsprintfA(&local_400,s_inst__004110e4);
  do {
    iVar6 = iVar6 + 1;
    wsprintfA(&local_460,s_dde__putv_chem__d__00411600,iVar6);
    uVar4 = 0xffffffff;
    pcVar7 = &local_460;
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
    pcVar7 = &local_400;
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
  } while (iVar6 < 0x10);
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&DAT_004110cc;
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
  pcVar7 = &local_400;
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
  bVar2 = FUN_00407fc0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),&local_400);
  *(uint *)(param_1 + 0x98) = CONCAT31(extraout_var,bVar2);
  return CONCAT31(extraout_var,bVar2);
}

