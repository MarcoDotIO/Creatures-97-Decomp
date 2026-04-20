/*
 * Program: Creatures.exe
 * Function: FUN_0042a30f
 * Entry: 0042a30f
 * Namespace: Global
 * Prototype: undefined FUN_0042a30f(int param_1)
 */


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_0042a30f(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_EBP;
  int iVar10;
  uint uVar11;
  undefined4 *unaff_FS_OFFSET;
  
  iVar10 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x9f) = iVar10;
  iVar2 = Ordinal_729(iVar10 * 0x10);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar7 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    while (iVar10 = iVar10 + -1, -1 < iVar10) {
      FUN_0042a5e0(iVar7);
      iVar7 = iVar7 + 0x10;
    }
  }
  iVar10 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(iVar10 + 0x97) = iVar2;
  uVar3 = Ordinal_729(*(int *)(iVar10 + 0x9f) << 2);
  iVar10 = *(int *)(unaff_EBP + -0x10);
  iVar7 = 0;
  *(undefined4 *)(iVar10 + 0xa7) = uVar3;
  puVar5 = *(undefined1 **)(iVar10 + 0x97);
  if (0 < *(int *)(iVar10 + 0x10)) {
    do {
      iVar10 = 0;
      puVar4 = puVar5;
      if (0 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc)) {
        do {
          *puVar4 = (char)iVar10;
          puVar5 = puVar4 + 0x10;
          iVar10 = iVar10 + 1;
          iVar2 = *(int *)(unaff_EBP + -0x10);
          puVar4[1] = (char)iVar7;
          puVar4 = puVar5;
        } while (iVar10 < *(int *)(iVar2 + 0xc));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar10 = *(int *)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x23;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xa3) = 0;
  do {
    iVar7 = *(int *)(unaff_EBP + -0x14);
    iVar2 = (uint)*(byte *)(iVar7 + 5) - (uint)*(byte *)(iVar7 + 4);
    *(uint *)(unaff_EBP + -0x2c) = (uint)*(byte *)(iVar7 + 6);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (0 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9f)) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      do {
        *(int *)(unaff_EBP + -0x28) =
             *(int *)(unaff_EBP + -0x20) + *(int *)(*(int *)(unaff_EBP + -0x10) + 0x97);
        switch(*(undefined4 *)(unaff_EBP + -0x2c)) {
        case 0:
          iVar10 = rand();
          iVar10 = iVar10 % (iVar2 + 1);
          break;
        case 1:
          iVar10 = rand();
          iVar7 = rand();
          iVar10 = (iVar10 % (iVar2 + 1) + iVar7 % (iVar2 + 1)) / 2;
          break;
        case 2:
          iVar10 = rand();
          iVar7 = rand();
          uVar11 = (iVar10 % (iVar2 + 1) + iVar7 % (iVar2 + 1)) - iVar2;
          uVar8 = (int)uVar11 >> 0x1f;
          iVar10 = (uVar11 ^ uVar8) - uVar8;
          break;
        case 3:
          *(int *)(unaff_EBP + -0x24) = iVar2;
          iVar10 = rand();
          iVar7 = rand();
          uVar11 = (iVar10 % (iVar2 + 1) + iVar7 % (iVar2 + 1)) - iVar2;
          uVar8 = (int)uVar11 >> 0x1f;
          iVar10 = *(int *)(unaff_EBP + -0x24) - ((uVar11 ^ uVar8) - uVar8);
          *(int *)(unaff_EBP + -0x24) = iVar10;
        }
        iVar10 = iVar10 + (uint)*(byte *)(*(int *)(unaff_EBP + -0x14) + 4);
        iVar7 = *(int *)(unaff_EBP + -0x10);
        *(char *)(*(int *)(unaff_EBP + -0x28) + 0xc + *(int *)(unaff_EBP + -0x18)) = (char)iVar10;
        iVar6 = *(int *)(unaff_EBP + -0x20);
        *(int *)(iVar7 + 0xa3) = *(int *)(iVar7 + 0xa3) + iVar10;
        *(int *)(unaff_EBP + -0x20) = iVar6 + 0x10;
        iVar7 = *(int *)(unaff_EBP + -0x1c) + 1;
        *(int *)(unaff_EBP + -0x1c) = iVar7;
      } while (iVar7 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9f));
    }
    iVar7 = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3a;
    *(int *)(unaff_EBP + -0x18) = iVar7;
  } while (iVar7 < 2);
  iVar10 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xa3);
  if (iVar10 != 0) {
    iVar2 = Ordinal_729(iVar10 * 10);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar7 = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      while (iVar10 = iVar10 + -1, -1 < iVar10) {
        FUN_0042a600(iVar7);
        iVar7 = iVar7 + 10;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9b) = iVar2;
  }
  iVar7 = 0;
  iVar2 = 0;
  iVar10 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9b);
  if (0 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9f)) {
    do {
      iVar9 = 0;
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x97) + iVar7;
      do {
        *(int *)(iVar6 + 4 + iVar9 * 4) = iVar10;
        pbVar1 = (byte *)(iVar6 + 0xc + iVar9);
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + (uint)*pbVar1 * 10;
      } while (iVar9 < 2);
      iVar7 = iVar7 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9f));
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

