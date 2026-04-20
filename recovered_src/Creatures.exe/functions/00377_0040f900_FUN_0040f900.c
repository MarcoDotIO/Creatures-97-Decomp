/*
 * Program: Creatures.exe
 * Function: FUN_0040f900
 * Entry: 0040f900
 * Namespace: Global
 * Prototype: undefined FUN_0040f900(int param_1, undefined4 param_2)
 */


void FUN_0040f900(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar13;
  int iVar14;
  undefined1 auStack_1dc [256];
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint auStack_a4 [4];
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  int aiStack_58 [7];
  int *piStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  void *pvStack_1c;
  undefined1 uStack_18;
  byte abStack_17 [4];
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410284;
  *unaff_FS_OFFSET = &uStack_10;
  iStack_2c = 0;
  iStack_30 = 0;
  FUN_0040c1f0();
  FUN_004102a0(CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))));
  FUN_0041bd90(param_1);
  iVar2 = FUN_0041be70((void *)param_1,2,1,7,1);
  uStack_20 = 0;
  while (iVar2 != 0) {
    uVar3 = FUN_0041bda0((void *)param_1,0,3);
    uVar4 = FUN_0041bde0(param_1);
    *(undefined4 *)
     (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x4c) = uVar4;
    uVar4 = FUN_0041bde0(param_1);
    *(undefined4 *)
     (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x50) = uVar4;
    iVar2 = FUN_0041be70((void *)param_1,2,1,7,1);
    uStack_20 = uVar3 & 0xff;
  }
  uStack_24 = (uint)*(byte *)(param_1 + 0x14);
  *(uint *)(CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 4) =
       (uStack_24 | 0x40000) << 8 | (uStack_20 + 1) * 0x10000;
  FUN_0041bd90(param_1);
  iVar2 = FUN_0041be70((void *)param_1,2,2,7,1);
  do {
    if (iVar2 == 0) {
      pvStack_1c = (void *)0xe;
      if (iStack_2c == 0) {
        pvStack_1c = (void *)0xc;
      }
      iVar2 = 0;
      if (pvStack_1c != (void *)0x0) {
        do {
          pbVar1 = &DAT_00436158 + iVar2;
          iVar2 = iVar2 + 1;
          iStack_30 = iStack_30 + (uint)*pbVar1;
        } while (iVar2 < (int)pvStack_1c);
      }
      iStack_28 = 0;
      aiStack_58[3] = 0;
      iStack_38 = iStack_30 * 8 + 2;
      piVar6 = (int *)Ordinal_729(iStack_30 * 8 + 0x66);
      uVar4 = 0x1001;
      piStack_34 = piVar6;
      puVar7 = FUN_0040b5c0(*(undefined4 *)(param_1 + 0x10),0x436188,4);
      Ordinal_339(puVar7,uVar4);
      uStack_8 = 0;
      Ordinal_5658(&iStack_28,2);
      Ordinal_5658(piStack_34,iStack_38);
      piStack_3c = (int *)0x0;
      aiStack_58[6] = 0;
      aiStack_58[2] = 0;
      aiStack_58[5] = 0;
      aiStack_58[1] = 0;
      aiStack_58[0] = 0;
      FUN_0041bd90(param_1);
      iVar2 = FUN_0041be70((void *)param_1,2,6,7,1);
      while (iVar2 != 0) {
        uVar3 = FUN_0041bda0((void *)param_1,0,2);
        uVar5 = FUN_0041bda0((void *)param_1,0,0xff);
        aiStack_58[uVar3 + 5] = aiStack_58[uVar3 + 5] + uVar5;
        aiStack_58[uVar3] = aiStack_58[uVar3] + 1;
        iVar2 = FUN_0041be70((void *)param_1,2,6,7,1);
      }
      iVar12 = 0;
      iVar2 = 0;
      do {
        if (*(int *)((int)aiStack_58 + iVar2) < 1) {
          abStack_17[iVar12] = 0x80;
        }
        else {
          abStack_17[iVar12] =
               (byte)(*(int *)((int)aiStack_58 + iVar2 + 0x14) / *(int *)((int)aiStack_58 + iVar2));
        }
        iVar2 = iVar2 + 4;
        iVar12 = iVar12 + 1;
      } while (iVar2 < 0xc);
      FUN_00404090(&DAT_004382d0,(int)auStack_1dc,abStack_17[0],abStack_17[1],abStack_17[2]);
      uStack_18 = 0;
      abStack_17[0] = 0;
      abStack_17[1] = 0;
      abStack_17[2] = 0;
      if (0 < (int)pvStack_1c) {
        aiStack_58[2] = 0;
        uStack_6c = uStack_24;
        do {
          iVar2 = 0;
          iVar14 = 0;
          uVar5 = (uint)(byte)(&DAT_00436158)
                              [CONCAT13(abStack_17[2],
                                        CONCAT12(abStack_17[1],CONCAT11(abStack_17[0],uStack_18)))];
          iVar12 = 0;
          uVar3 = FUN_0040f590(CONCAT13(abStack_17[2],
                                        CONCAT12(abStack_17[1],CONCAT11(abStack_17[0],uStack_18))),
                               uStack_20,uStack_6c,param_2,*(int *)((int)auStack_a4 + aiStack_58[2])
                               ,0x436188,4);
          piStack_3c = FUN_0040c580(uVar3,iVar12,uVar5,iVar14);
          *(int *)((int)&iStack_dc + aiStack_58[2]) = iStack_28;
          FUN_0040c890(piStack_3c,(int)auStack_1dc);
          for (aiStack_58[4] = 0; aiStack_58[4] < piStack_3c[2]; aiStack_58[4] = aiStack_58[4] + 1)
          {
            iVar12 = *(int *)(piStack_3c[1] + iVar2 + 0x11);
            iVar14 = *(int *)(piStack_3c[1] + iVar2 + 0xd);
            *piVar6 = iStack_38 + aiStack_58[3];
            piVar6[1] = iVar14;
            *(int *)((int)piVar6 + 6) = iVar12;
            iVar12 = iVar12 * iVar14;
            iVar11 = piStack_3c[1] + iVar2;
            iVar2 = iVar2 + 0x1d;
            iVar14 = iVar12;
            uVar4 = FUN_0040cb50(iVar11);
            Ordinal_5658(uVar4,iVar14);
            aiStack_58[3] = aiStack_58[3] + iVar12;
            iStack_28 = iStack_28 + 1;
            piVar6 = piVar6 + 2;
          }
          FUN_0040c640(piStack_3c);
          iVar2 = CONCAT13(abStack_17[2],CONCAT12(abStack_17[1],CONCAT11(abStack_17[0],uStack_18)))
                  + 1;
          aiStack_58[2] = aiStack_58[2] + 4;
          uStack_18 = (undefined1)iVar2;
          abStack_17[0] = (byte)((uint)iVar2 >> 8);
          abStack_17[1] = (byte)((uint)iVar2 >> 0x10);
          abStack_17[2] = (byte)((uint)iVar2 >> 0x18);
        } while (iVar2 < (int)pvStack_1c);
      }
      (**(code **)(iStack_68 + 0x30))(0,0);
      Ordinal_5658(&iStack_28,2);
      Ordinal_5658(piStack_34,iStack_38);
      Ordinal_1725();
      Ordinal_731(piStack_34);
      puVar8 = FUN_0040c580(*(int *)(param_1 + 0x10),0,iStack_30,0);
      piVar6 = (int *)CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3])));
      *(undefined4 **)((int)piVar6 + 0x3b) = puVar8;
      iVar2 = FUN_0040f870(piVar6);
      *(int *)(CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x7a) =
           iVar2;
      pvVar9 = (void *)Ordinal_729(0x9e);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      uStack_8._0_1_ = 1;
      puVar8 = (undefined4 *)0x0;
      if (pvVar9 != (void *)0x0) {
        iVar2 = CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3])));
        uVar4 = *(undefined4 *)(iVar2 + 0x7a);
        uVar13 = *(undefined4 *)(iVar2 + 0x3b);
        puVar8 = (undefined4 *)FUN_0040f680(1,uStack_20,uStack_24,param_2,auStack_a4[1]);
        puVar8 = FUN_0041aca0(pvVar9,puVar8,uVar13,(undefined1)uStack_d8,uVar4);
      }
      uStack_8._0_1_ = 0;
      *(undefined4 **)
       (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x54) = puVar8;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_8._0_1_ = 2;
      puVar8 = (undefined4 *)0x0;
      pvStack_1c = pvVar9;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar8 = (undefined4 *)FUN_0040f770(0,uStack_20,uStack_24,param_2,auStack_a4[0]);
        puVar8 = FUN_0041aa30(pvVar9,0,puVar8,uVar4,(undefined1)iStack_dc);
      }
      uStack_8._0_1_ = 0;
      *(undefined4 **)
       (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x58) = puVar8;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      puVar8 = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar8 = (undefined4 *)FUN_0040f770(7,uStack_20,uStack_24,param_2,iStack_88);
        puVar8 = FUN_0041aa30(pvVar9,0,puVar8,uVar4,(undefined1)uStack_c0);
      }
      uStack_8._0_1_ = 0;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_8._0_1_ = 4;
      pvStack_1c = pvVar9;
      if (pvVar9 == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar10 = (undefined4 *)FUN_0040f770(6,uStack_20,uStack_24,param_2,iStack_8c);
        puVar8 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_c4);
      }
      uStack_8._0_1_ = 0;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      uStack_8._0_1_ = 5;
      puVar10 = (undefined4 *)0x0;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar10 = (undefined4 *)FUN_0040f770(5,uStack_20,uStack_24,param_2,iStack_90);
        puVar10 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_c8);
      }
      uStack_8._0_1_ = 0;
      *(undefined4 **)
       (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x60) = puVar10;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      puVar8 = (undefined4 *)0x0;
      uStack_8._0_1_ = 6;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar8 = (undefined4 *)FUN_0040f770(4,uStack_20,uStack_24,param_2,iStack_94);
        puVar8 = FUN_0041aa30(pvVar9,0,puVar8,uVar4,(undefined1)uStack_cc);
      }
      uStack_8._0_1_ = 0;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_8._0_1_ = 7;
      pvStack_1c = pvVar9;
      if (pvVar9 == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar10 = (undefined4 *)FUN_0040f770(3,uStack_20,uStack_24,param_2,auStack_a4[3]);
        puVar8 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_d0);
      }
      uStack_8._0_1_ = 0;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      uStack_8._0_1_ = 8;
      puVar10 = (undefined4 *)0x0;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar10 = (undefined4 *)FUN_0040f770(2,uStack_20,uStack_24,param_2,auStack_a4[2]);
        puVar10 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_d4);
      }
      uStack_8._0_1_ = 0;
      *(undefined4 **)
       (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x5c) = puVar10;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      puVar8 = (undefined4 *)0x0;
      uStack_8._0_1_ = 9;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar8 = (undefined4 *)FUN_0040f770(9,uStack_20,uStack_24,param_2,iStack_80);
        puVar8 = FUN_0041aa30(pvVar9,0,puVar8,uVar4,(undefined1)uStack_b8);
      }
      uStack_8._0_1_ = 0;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_8._0_1_ = 10;
      puVar10 = (undefined4 *)0x0;
      pvStack_1c = pvVar9;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar10 = (undefined4 *)FUN_0040f770(8,uStack_20,uStack_24,param_2,iStack_84);
        puVar10 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_bc);
      }
      uStack_8._0_1_ = 0;
      *(undefined4 **)
       (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 100) = puVar10;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_18 = SUB41(pvVar9,0);
      abStack_17[0] = (byte)((uint)pvVar9 >> 8);
      abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
      abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
      puVar8 = (undefined4 *)0x0;
      uStack_8._0_1_ = 0xb;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar8 = (undefined4 *)FUN_0040f770(0xb,uStack_20,uStack_24,param_2,iStack_78);
        puVar8 = FUN_0041aa30(pvVar9,0,puVar8,uVar4,(undefined1)uStack_b0);
      }
      uStack_8._0_1_ = 0;
      pvVar9 = (void *)Ordinal_729(0x52);
      uStack_8._0_1_ = 0xc;
      puVar10 = (undefined4 *)0x0;
      pvStack_1c = pvVar9;
      if (pvVar9 != (void *)0x0) {
        uVar4 = *(undefined4 *)
                 (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b);
        puVar10 = (undefined4 *)FUN_0040f770(10,uStack_20,uStack_24,param_2,iStack_7c);
        puVar10 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_b4);
      }
      uStack_8._0_1_ = 0;
      *(undefined4 **)
       (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x68) = puVar10;
      if (iStack_2c != 0) {
        pvVar9 = (void *)Ordinal_729(0x52);
        uStack_18 = SUB41(pvVar9,0);
        abStack_17[0] = (byte)((uint)pvVar9 >> 8);
        abStack_17[1] = (byte)((uint)pvVar9 >> 0x10);
        abStack_17[2] = (byte)((uint)pvVar9 >> 0x18);
        puVar8 = (undefined4 *)0x0;
        uStack_8._0_1_ = 0xd;
        if (pvVar9 != (void *)0x0) {
          uVar4 = *(undefined4 *)
                   (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b
                   );
          puVar8 = (undefined4 *)FUN_0040f770(0xc,uStack_20,uStack_24,param_2,iStack_74);
          puVar8 = FUN_0041aa30(pvVar9,0,puVar8,uVar4,(undefined1)uStack_ac);
        }
        uStack_8._0_1_ = 0;
        pvVar9 = (void *)Ordinal_729(0x52);
        uStack_8._0_1_ = 0xe;
        puVar10 = (undefined4 *)0x0;
        pvStack_1c = pvVar9;
        if (pvVar9 != (void *)0x0) {
          uVar4 = *(undefined4 *)
                   (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x3b
                   );
          puVar10 = (undefined4 *)FUN_0040f770(0xd,uStack_20,uStack_24,param_2,iStack_70);
          puVar10 = FUN_0041aa30(pvVar9,puVar8,puVar10,uVar4,(undefined1)uStack_a8);
        }
        *(undefined4 **)
         (CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x6c) =
             puVar10;
      }
      uStack_8._0_1_ = 0;
      FUN_0040eb30((void *)CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3])))
                   ,(char *)(CONCAT13(uStack_11,
                                      CONCAT12(uStack_12,CONCAT11(uStack_13,abStack_17[3]))) + 0x7e)
                  );
      uStack_8 = 0xffffffff;
      FUN_0041028e();
      *unaff_FS_OFFSET = uStack_10;
      return;
    }
    uVar3 = FUN_0041bda0((void *)param_1,0,4);
    iVar2 = 0;
    uVar5 = FUN_0041bda0((void *)param_1,0,9);
    piVar6 = (int *)(&DAT_004360e0 + uVar3 * 0x18);
    do {
      iVar12 = *piVar6;
      if (iVar12 == -1) break;
      piVar6 = piVar6 + 1;
      iVar2 = iVar2 + 1;
      auStack_a4[iVar12] = uVar5;
    } while (iVar2 < 6);
    if (uVar3 == 4) {
      iStack_2c = iStack_2c + 1;
    }
    iVar2 = FUN_0041be70((void *)param_1,2,2,7,1);
  } while( true );
}

