/*
 * Program: Score_Kit.exe
 * Function: FUN_00403bf0
 * Entry: 00403bf0
 * Namespace: Global
 * Prototype: undefined4 FUN_00403bf0(void * param_1)
 */


undefined4 __fastcall FUN_00403bf0(void *param_1)

{
  int *piVar1;
  char cVar2;
  WPARAM WVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  int local_47c [3];
  int local_470;
  int local_46c;
  int local_468 [2];
  CHAR local_460;
  undefined4 local_45f;
  CHAR local_400;
  undefined4 local_3ff;
  
  iVar7 = 0;
  local_460 = '\0';
  puVar10 = &local_45f;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  local_400 = '\0';
  puVar10 = &local_3ff;
  for (iVar4 = 0xff; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  local_468[1] = 0;
  local_470 = 10;
  local_46c = 10;
  local_47c[0] = 0x1e;
  local_47c[1] = 0x14;
  local_468[0] = 0x48;
  wsprintfA(&local_400,s_inst__0040c2b4);
  do {
    wsprintfA(&local_460,s_dde__putv_scor__d__0040c2a0,iVar7);
    uVar5 = 0xffffffff;
    pcVar9 = &local_460;
    do {
      pcVar12 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar9 = &local_400;
    do {
      pcVar11 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar2 != '\0');
    iVar7 = iVar7 + 1;
    pcVar9 = pcVar12 + -uVar5;
    pcVar12 = pcVar11 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar12 = pcVar12 + 1;
    }
  } while (iVar7 < 5);
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_0040c298;
  do {
    pcVar12 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar9 = &local_400;
  do {
    pcVar11 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar11 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar2 != '\0');
  pcVar9 = pcVar12 + -uVar5;
  pcVar12 = pcVar11 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  iVar4 = FUN_004049c0(param_1,&local_400);
  if (iVar4 != 0) {
    iVar4 = FUN_00406fa0(*(void **)((int)param_1 + 0x8c),*(undefined4 *)((int)param_1 + 0x5f8),0);
    if (iVar4 != 0) {
      iVar4 = 5;
      pcVar9 = *(char **)(*(int *)((int)param_1 + 0x8c) + 0x1fc);
      piVar8 = (int *)((int)param_1 + 0x558);
      do {
        iVar7 = FUN_00405d00(pcVar9,local_47c + 2);
        *piVar8 = iVar7;
        pcVar9 = pcVar9 + local_47c[2] + 1;
        iVar4 = iVar4 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar4 != 0);
    }
  }
  if (*(int *)((int)param_1 + 0x564) < *(int *)((int)param_1 + 0x578)) {
    FUN_00406370(*(void **)((int)param_1 + 0xdc),0xd6);
  }
  piVar8 = (int *)((int)param_1 + 0x558);
  iVar7 = 4;
  local_47c[1] = 0;
  iVar4 = *piVar8;
  do {
    FUN_00407c80((void *)((int)param_1 + 0x590),*(void **)((int)param_1 + 0x140),1,local_47c,
                 (int *)0x0,iVar4 % 10);
    iVar4 = iVar4 / 10;
    local_47c[0] = local_47c[0] + -10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar4 = *(int *)((int)param_1 + 0x55c);
  iVar7 = 4;
  local_47c[0] = 0x1e;
  local_47c[1] = 0;
  do {
    FUN_00407c80((void *)((int)param_1 + 0x590),*(void **)((int)param_1 + 0x26c),1,local_47c,
                 (int *)0x0,iVar4 % 10);
    iVar4 = iVar4 / 10;
    local_47c[0] = local_47c[0] + -10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar4 = *(int *)((int)param_1 + 0x560);
  iVar7 = 4;
  local_47c[0] = 0x1e;
  local_47c[1] = 0;
  do {
    FUN_00407c80((void *)((int)param_1 + 0x590),*(void **)((int)param_1 + 0x2d0),1,local_47c,
                 (int *)0x0,iVar4 % 10);
    iVar4 = iVar4 / 10;
    local_47c[0] = local_47c[0] + -10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar4 = *(int *)((int)param_1 + 0x564);
  iVar7 = 4;
  local_47c[0] = 0x1e;
  local_47c[1] = 0;
  do {
    FUN_00407c80((void *)((int)param_1 + 0x590),*(void **)((int)param_1 + 0x334),1,local_47c,
                 (int *)0x0,iVar4 % 10);
    iVar4 = iVar4 / 10;
    local_47c[0] = local_47c[0] + -10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_47c[0] = 0x1e;
  FUN_00405400((void *)((int)param_1 + 0x288),(RECT *)0x0,0,0);
  FUN_00405400((void *)((int)param_1 + 0x224),(RECT *)0x0,0,0);
  FUN_00405400((void *)((int)param_1 + 0x2ec),(RECT *)0x0,0,0);
  iVar7 = 8;
  FUN_00405400((void *)((int)param_1 + 0xf8),(RECT *)0x0,0,0);
  iVar4 = FUN_004041f0((int)param_1);
  do {
    FUN_00407c80((void *)((int)param_1 + 0x590),*(void **)((int)param_1 + 0x1a4),1,local_468,
                 (int *)0x0,iVar4 % 10);
    iVar4 = iVar4 / 10;
    local_468[0] = local_468[0] + -10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar4 = 0;
  FUN_004037d0((int)param_1);
  do {
    local_470 = 10;
    iVar7 = 0;
    if (0 < *piVar8) {
      do {
        if (iVar7 < 0x14) {
          FUN_00407c80((void *)((int)param_1 + 0x4e0),*(void **)((int)param_1 + 0xdc),1,&local_470,
                       (int *)0x0,iVar4);
          local_470 = local_470 + 0x1e;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *piVar8);
    }
    piVar1 = piVar8 + 0x1b;
    WVar3 = 0;
    local_46c = local_46c + 0x32;
    if (param_1 != (void *)0xfffffa24) {
      WVar3 = *(WPARAM *)((int)param_1 + 0x5e0);
    }
    piVar8 = piVar8 + 1;
    iVar4 = iVar4 + 1;
    SendMessageA(*(HWND *)(*piVar1 + 0x20),0x30,WVar3,1);
  } while (iVar4 < 4);
  WVar3 = 0;
  if (param_1 != (void *)0xfffffa24) {
    WVar3 = *(WPARAM *)((int)param_1 + 0x5e0);
  }
  SendMessageA(*(HWND *)(*(int *)((int)param_1 + iVar4 * 4 + 0x5c4) + 0x20),0x30,WVar3,1);
  WVar3 = 0;
  if (param_1 != (void *)0xfffffa24) {
    WVar3 = *(WPARAM *)((int)param_1 + 0x5e0);
  }
  SendMessageA(*(HWND *)(*(int *)((int)param_1 + iVar4 * 4 + 0x5c8) + 0x20),0x30,WVar3,1);
  iVar4 = FUN_004049c0(param_1,s_dde__putv_hour_endm_0040c284);
  if (iVar4 != 0) {
    iVar4 = FUN_00406fa0(*(void **)((int)param_1 + 0x8c),*(undefined4 *)((int)param_1 + 0x5f8),0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_00405d00(*(char **)(*(int *)((int)param_1 + 0x8c) + 0x1fc),local_47c + 2);
    *(int *)((int)param_1 + 0x61c) = iVar4;
  }
  iVar4 = FUN_004049c0(param_1,s_dde__putv_mins_endm_0040c270);
  if (iVar4 != 0) {
    iVar4 = FUN_00406fa0(*(void **)((int)param_1 + 0x8c),*(undefined4 *)((int)param_1 + 0x5f8),0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_00405d00(*(char **)(*(int *)((int)param_1 + 0x8c) + 0x1fc),local_47c + 2);
    *(int *)((int)param_1 + 0x620) = iVar4;
  }
  FUN_00405400((void *)((int)param_1 + 0x94),(RECT *)0x0,0,0);
  FUN_00405400((void *)((int)param_1 + 0x15c),(RECT *)0x0,0,0);
  FUN_00404110((int)param_1);
  *(undefined4 *)((int)param_1 + 0x578) = *(undefined4 *)((int)param_1 + 0x564);
  return 1;
}

