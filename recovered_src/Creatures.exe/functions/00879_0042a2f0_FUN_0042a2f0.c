/*
 * Program: Creatures.exe
 * Function: FUN_0042a2f0
 * Entry: 0042a2f0
 * Namespace: Global
 * Prototype: undefined FUN_0042a2f0(int param_1)
 */


void __fastcall FUN_0042a2f0(int param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *unaff_FS_OFFSET;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042a5ae;
  *unaff_FS_OFFSET = &uStack_10;
  iVar11 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x9f) = iVar11;
  iVar3 = Ordinal_729(iVar11 * 0x10);
  uStack_8 = 0;
  iVar9 = iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    while (iVar11 = iVar11 + -1, -1 < iVar11) {
      FUN_0042a5e0(iVar9);
      iVar9 = iVar9 + 0x10;
    }
  }
  uStack_8 = 0xffffffff;
  *(int *)(param_1 + 0x97) = iVar3;
  uVar4 = Ordinal_729(*(int *)(param_1 + 0x9f) << 2);
  iVar11 = 0;
  *(undefined4 *)(param_1 + 0xa7) = uVar4;
  puVar6 = *(undefined1 **)(param_1 + 0x97);
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar9 = 0;
      puVar5 = puVar6;
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          *puVar5 = (char)iVar9;
          puVar6 = puVar5 + 0x10;
          iVar9 = iVar9 + 1;
          puVar5[1] = (char)iVar11;
          puVar5 = puVar6;
        } while (iVar9 < *(int *)(param_1 + 0xc));
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x10));
  }
  iStack_1c = 0;
  iStack_18 = param_1 + 0x23;
  iVar11 = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  do {
    iVar9 = (uint)*(byte *)(iStack_18 + 5) - (uint)*(byte *)(iStack_18 + 4);
    uVar2 = *(undefined1 *)(iStack_18 + 6);
    iStack_20 = 0;
    if (0 < *(int *)(param_1 + 0x9f)) {
      iStack_24 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x97);
        switch(uVar2) {
        case 0:
          iVar11 = rand();
          iVar11 = iVar11 % (iVar9 + 1);
          break;
        case 1:
          iVar11 = rand();
          iVar7 = rand();
          iVar11 = (iVar11 % (iVar9 + 1) + iVar7 % (iVar9 + 1)) / 2;
          break;
        case 2:
          iVar11 = rand();
          iVar7 = rand();
          uVar12 = (iVar11 % (iVar9 + 1) + iVar7 % (iVar9 + 1)) - iVar9;
          uVar8 = (int)uVar12 >> 0x1f;
          iVar11 = (uVar12 ^ uVar8) - uVar8;
          break;
        case 3:
          iVar11 = rand();
          iVar7 = rand();
          uVar12 = (iVar11 % (iVar9 + 1) + iVar7 % (iVar9 + 1)) - iVar9;
          uVar8 = (int)uVar12 >> 0x1f;
          iVar11 = iVar9 - ((uVar12 ^ uVar8) - uVar8);
        }
        iVar11 = iVar11 + (uint)*(byte *)(iStack_18 + 4);
        *(char *)(iStack_24 + iVar3 + 0xc + iStack_1c) = (char)iVar11;
        iStack_24 = iStack_24 + 0x10;
        *(int *)(param_1 + 0xa3) = *(int *)(param_1 + 0xa3) + iVar11;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < *(int *)(param_1 + 0x9f));
    }
    iStack_18 = iStack_18 + 0x3a;
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 2);
  iVar11 = *(int *)(param_1 + 0xa3);
  if (iVar11 != 0) {
    iVar3 = Ordinal_729(iVar11 * 10);
    uStack_8 = 1;
    iVar9 = iVar3;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      while (iVar11 = iVar11 + -1, -1 < iVar11) {
        FUN_0042a600(iVar9);
        iVar9 = iVar9 + 10;
      }
    }
    *(int *)(param_1 + 0x9b) = iVar3;
  }
  iVar9 = 0;
  iVar3 = 0;
  iVar11 = *(int *)(param_1 + 0x9b);
  if (0 < *(int *)(param_1 + 0x9f)) {
    do {
      iVar10 = 0;
      iVar7 = *(int *)(param_1 + 0x97) + iVar9;
      do {
        *(int *)(iVar7 + 4 + iVar10 * 4) = iVar11;
        pbVar1 = (byte *)(iVar7 + 0xc + iVar10);
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + (uint)*pbVar1 * 10;
      } while (iVar10 < 2);
      iVar9 = iVar9 + 0x10;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x9f));
  }
  *unaff_FS_OFFSET = uStack_10;
  return;
}

