/*
 * Program: Hatchery.exe
 * Function: FUN_00402ad0
 * Entry: 00402ad0
 * Namespace: Global
 * Prototype: undefined4 FUN_00402ad0(int param_1)
 */


undefined4 __fastcall FUN_00402ad0(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  time_t tVar11;
  char *local_4c;
  undefined4 *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  char cStack_3a;
  undefined1 uStack_39;
  undefined1 local_38;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  undefined4 local_20;
  undefined2 local_1c;
  char cStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  *(undefined4 *)(param_1 + 0x54) = 1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar7 = 6;
    tVar11 = time((time_t *)0x0);
    srand((uint)tVar11);
    puVar6 = (undefined4 *)(param_1 + 0x1d0);
    do {
      *puVar6 = 1;
      uVar3 = rand();
      uVar5 = (int)uVar3 >> 0x1f;
      iVar7 = iVar7 + -1;
      puVar6[0x1e] = ((uVar3 ^ uVar5) - uVar5 & 1 ^ uVar5) - uVar5;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0);
    return 1;
  }
  iVar7 = FUN_004027e0();
  if (iVar7 == 0) {
    return 0;
  }
  iVar7 = 0;
  local_48 = (undefined4 *)(param_1 + 0x1d0);
  local_4c = (char *)(param_1 + 0x328);
  bVar1 = false;
  do {
    local_40 = DAT_0040a3d4;
    local_38 = DAT_0040a3dc;
    local_37 = 0;
    local_33 = 0;
    local_2f = 0;
    local_2b = 0;
    local_27 = 0;
    local_23 = 0;
    local_21 = 0;
    local_20 = DAT_0040a3d4;
    local_18 = DAT_0040a3dc;
    uVar3 = 0xffffffff;
    local_17 = 0;
    local_13 = 0;
    local_f = 0;
    local_b = 0;
    local_7 = 0;
    local_3 = 0;
    local_1 = 0;
    cVar2 = (char)iVar7 + '1';
    uStack_39 = (undefined1)((uint)DAT_0040a3d8 >> 0x18);
    local_3c = (undefined2)DAT_0040a3d8;
    _local_3c = CONCAT12(cVar2,local_3c);
    _local_1c = CONCAT13(uStack_39,CONCAT12(cVar2,local_3c));
    pcVar8 = local_4c;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar8 = (char *)&local_40;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar8 = local_4c + 0x36;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar8 = (char *)&local_20;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar4 = FUN_00402710(&local_40);
    if (iVar4 != 0) {
      iVar4 = FUN_00402710(&local_20);
      if (iVar4 != 0) {
        bVar1 = true;
        *local_48 = 1;
      }
    }
    local_48 = local_48 + 1;
    local_4c = local_4c + 9;
    iVar7 = iVar7 + 1;
    if (5 < iVar7) {
      if (!bVar1) {
        iVar7 = FUN_00402fe0(param_1);
        if (iVar7 == 0) {
          FUN_004031c0();
          Ordinal_1060(0xef15,0,0xffffffff);
          return 0;
        }
      }
      return 1;
    }
  } while( true );
}

