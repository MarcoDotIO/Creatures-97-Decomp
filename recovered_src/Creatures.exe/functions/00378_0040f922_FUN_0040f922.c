/*
 * Program: Creatures.exe
 * Function: FUN_0040f922
 * Entry: 0040f922
 * Namespace: Global
 * Prototype: undefined FUN_0040f922(void)
 */


void FUN_0040f922(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int unaff_EBP;
  int iVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar13;
  undefined1 uVar14;
  int iVar15;
  
  uVar11 = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  FUN_0040c1f0();
  FUN_004102a0(*(int *)(unaff_EBP + -0x10));
  FUN_0041bd90(*(int *)(unaff_EBP + 8));
  iVar2 = FUN_0041be70(*(void **)(unaff_EBP + 8),2,1,7,1);
  while (iVar2 != 0) {
    uVar11 = FUN_0041bda0(*(void **)(unaff_EBP + 8),0,3);
    uVar11 = uVar11 & 0xff;
    uVar3 = FUN_0041bde0(*(int *)(unaff_EBP + 8));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x4c) = uVar3;
    uVar3 = FUN_0041bde0(*(int *)(unaff_EBP + 8));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x50) = uVar3;
    iVar2 = FUN_0041be70(*(void **)(unaff_EBP + 8),2,1,7,1);
  }
  uVar4 = (uint)*(byte *)(*(int *)(unaff_EBP + 8) + 0x14);
  *(uint *)(unaff_EBP + -0x20) = uVar4;
  *(uint *)(unaff_EBP + -0x1c) = uVar11;
  *(uint *)(*(int *)(unaff_EBP + -0x10) + 4) = (uVar4 | 0x40000) << 8 | (uVar11 + 1) * 0x10000;
  FUN_0041bd90(*(int *)(unaff_EBP + 8));
  iVar2 = FUN_0041be70(*(void **)(unaff_EBP + 8),2,2,7,1);
  do {
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0xe;
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0xc;
      }
      iVar2 = 0;
      if (0 < *(int *)(unaff_EBP + -0x18)) {
        do {
          pbVar1 = &DAT_00436158 + iVar2;
          iVar2 = iVar2 + 1;
          *(uint *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + (uint)*pbVar1;
        } while (iVar2 < *(int *)(unaff_EBP + -0x18));
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      iVar2 = *(int *)(unaff_EBP + -0x2c) * 8;
      *(int *)(unaff_EBP + -0x34) = iVar2 + 2;
      piVar5 = (int *)Ordinal_729(iVar2 + 0x66);
      *(int **)(unaff_EBP + -0x30) = piVar5;
      uVar3 = 0x1001;
      puVar6 = FUN_0040b5c0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x10),0x436188,4);
      Ordinal_339(puVar6,uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      Ordinal_5658(unaff_EBP + -0x24,2);
      Ordinal_5658(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x34));
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x50) = 0;
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      FUN_0041bd90(*(int *)(unaff_EBP + 8));
      iVar2 = FUN_0041be70(*(void **)(unaff_EBP + 8),2,6,7,1);
      while (iVar2 != 0) {
        uVar11 = FUN_0041bda0(*(void **)(unaff_EBP + 8),0,2);
        uVar4 = FUN_0041bda0(*(void **)(unaff_EBP + 8),0,0xff);
        *(uint *)(unaff_EBP + -0x40 + uVar11 * 4) = *(int *)(unaff_EBP + -0x40 + uVar11 * 4) + uVar4
        ;
        *(int *)(unaff_EBP + -0x54 + uVar11 * 4) = *(int *)(unaff_EBP + -0x54 + uVar11 * 4) + 1;
        iVar2 = FUN_0041be70(*(void **)(unaff_EBP + 8),2,6,7,1);
      }
      iVar12 = 0;
      iVar2 = 0;
      do {
        iVar15 = *(int *)(unaff_EBP + -0x54 + iVar2);
        if (iVar15 < 1) {
          *(undefined1 *)(unaff_EBP + -0x13 + iVar12) = 0x80;
        }
        else {
          *(char *)(unaff_EBP + -0x13 + iVar12) =
               (char)(*(int *)(unaff_EBP + -0x40 + iVar2) / iVar15);
        }
        iVar2 = iVar2 + 4;
        iVar12 = iVar12 + 1;
      } while (iVar2 < 0xc);
      FUN_00404090(&DAT_004382d0,unaff_EBP + -0x1d8,(byte)*(undefined4 *)(unaff_EBP + -0x13),
                   (byte)*(undefined4 *)(unaff_EBP + -0x12),(byte)*(undefined4 *)(unaff_EBP + -0x11)
                  );
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (0 < *(int *)(unaff_EBP + -0x18)) {
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x20);
        do {
          iVar2 = 0;
          iVar15 = 0;
          uVar4 = (uint)(byte)(&DAT_00436158)[*(int *)(unaff_EBP + -0x14)];
          iVar12 = 0;
          uVar11 = FUN_0040f590(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x1c),
                                *(int *)(unaff_EBP + -0x68),*(int *)(unaff_EBP + 0xc),
                                *(int *)(unaff_EBP + -0xa0 + *(int *)(unaff_EBP + -0x4c)),0x436188,4
                               );
          puVar7 = FUN_0040c580(uVar11,iVar12,uVar4,iVar15);
          *(undefined4 **)(unaff_EBP + -0x38) = puVar7;
          *(undefined4 *)(unaff_EBP + -0xd8 + *(int *)(unaff_EBP + -0x4c)) =
               *(undefined4 *)(unaff_EBP + -0x24);
          FUN_0040c890(*(void **)(unaff_EBP + -0x38),unaff_EBP + -0x1d8);
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
          while (*(int *)(unaff_EBP + -0x44) < *(int *)(*(int *)(unaff_EBP + -0x38) + 8)) {
            iVar15 = *(int *)(*(int *)(unaff_EBP + -0x38) + 4) + iVar2;
            iVar12 = *(int *)(iVar15 + 0x11);
            iVar15 = *(int *)(iVar15 + 0xd);
            *piVar5 = *(int *)(unaff_EBP + -0x34) + *(int *)(unaff_EBP + -0x48);
            piVar5[1] = iVar15;
            *(int *)((int)piVar5 + 6) = iVar12;
            iVar12 = iVar12 * iVar15;
            iVar10 = *(int *)(*(int *)(unaff_EBP + -0x38) + 4) + iVar2;
            iVar2 = iVar2 + 0x1d;
            iVar15 = iVar12;
            uVar3 = FUN_0040cb50(iVar10);
            Ordinal_5658(uVar3,iVar15);
            *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + iVar12;
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
            piVar5 = piVar5 + 2;
          }
          FUN_0040c640(*(int **)(unaff_EBP + -0x38));
          iVar2 = *(int *)(unaff_EBP + -0x14) + 1;
          *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 4;
          *(int *)(unaff_EBP + -0x14) = iVar2;
        } while (iVar2 < *(int *)(unaff_EBP + -0x18));
      }
      (**(code **)(*(int *)(unaff_EBP + -100) + 0x30))(0,0);
      Ordinal_5658(unaff_EBP + -0x24,2);
      Ordinal_5658(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x34));
      Ordinal_1725();
      Ordinal_731(*(undefined4 *)(unaff_EBP + -0x30));
      puVar7 = FUN_0040c580(*(int *)(*(int *)(unaff_EBP + 8) + 0x10),0,*(int *)(unaff_EBP + -0x2c),0
                           );
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 **)((int)piVar5 + 0x3b) = puVar7;
      iVar2 = FUN_0040f870(piVar5);
      *(int *)(*(int *)(unaff_EBP + -0x10) + 0x7a) = iVar2;
      pvVar8 = (void *)Ordinal_729(0x9e);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puVar7 = (undefined4 *)0x0;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xd4);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x7a);
        uVar13 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar7 = (undefined4 *)
                 FUN_0040f680(1,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x9c));
        puVar7 = FUN_0041aca0(pvVar8,puVar7,uVar13,uVar14,uVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x54) = puVar7;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x18) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puVar7 = (undefined4 *)0x0;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xd8);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar7 = (undefined4 *)
                 FUN_0040f770(0,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0xa0));
        puVar7 = FUN_0041aa30(pvVar8,0,puVar7,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x58) = puVar7;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      puVar7 = (undefined4 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xbc);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar7 = (undefined4 *)
                 FUN_0040f770(7,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x84));
        puVar7 = FUN_0041aa30(pvVar8,0,puVar7,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x18) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (pvVar8 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xc0);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar9 = (undefined4 *)
                 FUN_0040f770(6,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x88));
        puVar7 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puVar9 = (undefined4 *)0x0;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xc4);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar9 = (undefined4 *)
                 FUN_0040f770(5,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x8c));
        puVar9 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x60) = puVar9;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      puVar7 = (undefined4 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -200);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar7 = (undefined4 *)
                 FUN_0040f770(4,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x90));
        puVar7 = FUN_0041aa30(pvVar8,0,puVar7,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x18) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (pvVar8 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xcc);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar9 = (undefined4 *)
                 FUN_0040f770(3,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x94));
        puVar7 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puVar9 = (undefined4 *)0x0;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xd0);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar9 = (undefined4 *)
                 FUN_0040f770(2,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x98));
        puVar9 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x5c) = puVar9;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      puVar7 = (undefined4 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xb4);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar7 = (undefined4 *)
                 FUN_0040f770(9,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x7c));
        puVar7 = FUN_0041aa30(pvVar8,0,puVar7,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x18) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puVar9 = (undefined4 *)0x0;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xb8);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar9 = (undefined4 *)
                 FUN_0040f770(8,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x80));
        puVar9 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 100) = puVar9;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x14) = pvVar8;
      puVar7 = (undefined4 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xac);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar7 = (undefined4 *)
                 FUN_0040f770(0xb,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x74));
        puVar7 = FUN_0041aa30(pvVar8,0,puVar7,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pvVar8 = (void *)Ordinal_729(0x52);
      *(void **)(unaff_EBP + -0x18) = pvVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puVar9 = (undefined4 *)0x0;
      if (pvVar8 != (void *)0x0) {
        uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xb0);
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
        puVar9 = (undefined4 *)
                 FUN_0040f770(10,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                              *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x78));
        puVar9 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x68) = puVar9;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        pvVar8 = (void *)Ordinal_729(0x52);
        *(void **)(unaff_EBP + -0x14) = pvVar8;
        puVar7 = (undefined4 *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (pvVar8 != (void *)0x0) {
          uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xa8);
          uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
          puVar7 = (undefined4 *)
                   FUN_0040f770(0xc,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                                *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x70));
          puVar7 = FUN_0041aa30(pvVar8,0,puVar7,uVar3,uVar14);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        pvVar8 = (void *)Ordinal_729(0x52);
        *(void **)(unaff_EBP + -0x18) = pvVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puVar9 = (undefined4 *)0x0;
        if (pvVar8 != (void *)0x0) {
          uVar14 = (undefined1)*(undefined4 *)(unaff_EBP + -0xa4);
          uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3b);
          puVar9 = (undefined4 *)
                   FUN_0040f770(0xd,*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x20),
                                *(int *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x6c));
          puVar9 = FUN_0041aa30(pvVar8,puVar7,puVar9,uVar3,uVar14);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x6c) = puVar9;
      }
      FUN_0040eb30(*(void **)(unaff_EBP + -0x10),(char *)(*(int *)(unaff_EBP + -0x10) + 0x7e));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0041028e();
      *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
      return;
    }
    uVar11 = FUN_0041bda0(*(void **)(unaff_EBP + 8),0,4);
    iVar2 = 0;
    uVar4 = FUN_0041bda0(*(void **)(unaff_EBP + 8),0,9);
    piVar5 = (int *)(&DAT_004360e0 + uVar11 * 0x18);
    do {
      iVar12 = *piVar5;
      if (iVar12 == -1) break;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + 1;
      *(uint *)(unaff_EBP + -0xa0 + iVar12 * 4) = uVar4;
    } while (iVar2 < 6);
    if (uVar11 == 4) {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    }
    iVar2 = FUN_0041be70(*(void **)(unaff_EBP + 8),2,2,7,1);
  } while( true );
}

