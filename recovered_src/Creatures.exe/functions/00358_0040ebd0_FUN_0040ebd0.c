/*
 * Program: Creatures.exe
 * Function: FUN_0040ebd0
 * Entry: 0040ebd0
 * Namespace: Global
 * Prototype: undefined FUN_0040ebd0(int * param_1)
 */


void __fastcall FUN_0040ebd0(int *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char local_20 [16];
  char local_10 [16];
  
  local_10._0_4_ = s_XXXXXXXXXXXXXXX_00436174._0_4_;
  local_10._4_4_ = s_XXXXXXXXXXXXXXX_00436174._4_4_;
  bVar3 = false;
  local_10._8_4_ = s_XXXXXXXXXXXXXXX_00436174._8_4_;
  local_10._12_4_ = s_XXXXXXXXXXXXXXX_00436174._12_4_;
  *(undefined4 *)((int)param_1 + 0x102) = *(undefined4 *)((int)param_1 + 0xf2);
  *(undefined4 *)((int)param_1 + 0x106) = *(undefined4 *)((int)param_1 + 0xf6);
  *(undefined4 *)((int)param_1 + 0x10a) = *(undefined4 *)((int)param_1 + 0xfa);
  *(undefined4 *)((int)param_1 + 0x10e) = *(undefined4 *)((int)param_1 + 0xfe);
  uVar8 = 0xffffffff;
  pcVar11 = (char *)((int)param_1 + 0x8e);
  do {
    pcVar12 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar11 = pcVar12 + -uVar8;
  pcVar12 = local_20;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (local_20[0] == '?') {
    if (*(int *)((int)param_1 + 0x7e6) == 0) {
      local_20[0] = 'X';
    }
    else {
      bVar3 = true;
      local_20[0] = (*(int *)((int)param_1 + 0x7ea) < *(int *)((int)param_1 + 0x72)) + '2';
    }
  }
  else if (local_20[0] == '!') {
    if (*(int *)((int)param_1 + 0x7e6) == 0) {
      local_20[0] = 'X';
    }
    else {
      local_20[0] = (*(int *)((int)param_1 + 0x72) <= *(int *)((int)param_1 + 0x7ea)) + '2';
    }
  }
  if ((local_20[0] != 'X') && (*(char *)((int)param_1 + 0x7e) != local_20[0])) {
    cVar1 = (char)param_1[0x1c];
    if (cVar1 == '\x02') {
      iVar10 = 0;
    }
    else if (cVar1 == '\x03') {
      iVar10 = 2;
    }
    else {
      iVar10 = 4;
    }
    if ((('3' < *(char *)((int)param_1 + 0x7f)) &&
        (iVar10 = iVar10 + 1, *(char *)((int)param_1 + 0x7f) == '4')) && (cVar1 == '\0')) {
      local_20[0] = '2';
    }
    local_20[1] = (char)((uint)*(undefined4 *)
                                (s__d__d__d__d__d__d__d__d__d__d__d_00435f9c +
                                ((int)local_20[0] + iVar10 * 4) * 4 + 0x14) >> 8);
    local_20[0] = (char)*(undefined4 *)
                         (s__d__d__d__d__d__d__d__d__d__d__d_00435f9c +
                         ((int)local_20[0] + iVar10 * 4) * 4 + 0x14);
    if (bVar3) {
      if (local_20[0] == '1') {
        piVar2 = *(int **)((int)param_1 + 0x7e6);
        iVar10 = (**(code **)(*param_1 + 100))();
        iVar6 = (**(code **)(*piVar2 + 100))();
        if (iVar6 < iVar10) {
          local_20[0] = '0';
        }
      }
      if (local_20[1] == '4') {
        piVar2 = *(int **)((int)param_1 + 0x7e6);
        iVar10 = (**(code **)(*param_1 + 100))();
        iVar6 = (**(code **)(*piVar2 + 100))();
        if (iVar6 < iVar10) {
          local_20[1] = '5';
        }
      }
    }
  }
  if (local_20[1] == '?') {
    piVar2 = *(int **)((int)param_1 + 0x7e6);
    if (piVar2 == (int *)0x0) {
      local_20[1] = '1';
    }
    else {
      uVar8 = *(int *)((int)param_1 + 0x7ea) - *(int *)((int)param_1 + 0x72);
      uVar9 = (int)uVar8 >> 0x1f;
      iVar10 = (uVar8 ^ uVar9) - uVar9;
      if (iVar10 < 0x10) {
        iVar10 = (**(code **)(*param_1 + 100))();
        iVar6 = (**(code **)(*piVar2 + 100))();
        local_20[1] = (iVar6 < iVar10) + '4';
      }
      else {
        iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
        if (3 < iVar10) {
          local_20[1] = '1';
          goto LAB_0040ee00;
        }
        iVar6 = *(int *)((int)param_1 + 0x7ee) - *(int *)(param_1[0x15] + 0x12);
        iVar6 = ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + 5;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        if (9 < iVar6) {
          iVar6 = 9;
        }
        local_20[1] = s_33333332332232222222122201220112_00436048[iVar6 * 4 + iVar10];
      }
    }
  }
LAB_0040ee00:
  uVar4 = local_10._0_4_;
  local_10[0] = local_20[0];
  uVar5 = local_10._0_4_;
  iVar10 = 1;
  do {
    cVar1 = local_20[iVar10];
    if (cVar1 != 'X') {
      cVar7 = *(char *)(iVar10 + 0x7e + (int)param_1);
      if (cVar7 < cVar1) {
        cVar7 = cVar7 + '\x01';
      }
      else {
        if (cVar7 <= cVar1) goto LAB_0040ee38;
        cVar7 = cVar7 + -1;
      }
      cVar1 = *(char *)((int)param_1 + 0x7f6);
      local_10[iVar10] = cVar7;
      *(char *)((int)param_1 + 0x7f6) = cVar1 + '\x01';
    }
LAB_0040ee38:
    iVar10 = iVar10 + 1;
    if (0xe < iVar10) {
      local_10._2_2_ = SUB42(uVar4,2);
      if (local_20[1] < '4') {
        if (('3' < *(char *)((int)param_1 + 0x7f)) && (local_20[1] < '4')) {
          local_10[1] = 0x31;
          uVar5 = local_10._0_4_;
        }
      }
      else {
        local_10[1] = local_20[1];
        uVar5 = local_10._0_4_;
      }
      local_10._0_4_ = uVar5;
      FUN_0040eb30(param_1,local_10);
      FUN_0040f1d0((int)param_1);
      return;
    }
  } while( true );
}

