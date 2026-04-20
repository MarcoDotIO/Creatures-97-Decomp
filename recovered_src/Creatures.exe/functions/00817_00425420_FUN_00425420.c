/*
 * Program: Creatures.exe
 * Function: FUN_00425420
 * Entry: 00425420
 * Namespace: Global
 * Prototype: undefined FUN_00425420(void * param_1)
 */


void __fastcall FUN_00425420(void *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  char *pcVar19;
  int *piVar20;
  undefined4 *puVar21;
  int local_138;
  char local_134 [4];
  char local_130;
  int local_100 [64];
  
  puVar4 = *(uint **)((int)param_1 + 0x10);
  uVar9 = *puVar4;
  puVar15 = (uint *)((int)puVar4 + 5);
  *(uint **)((int)param_1 + 0x10) = puVar15;
  if (uVar9 < 0x62747571) {
    if (uVar9 == 0x62747570) {
      FUN_004253e0(param_1,(undefined1 *)local_100);
      iVar14 = **(int **)((int)param_1 + 0x10);
      *(int *)((int)param_1 + 0x10) = (int)*(int **)((int)param_1 + 0x10) + 5;
      if (iVar14 == 0x61746164) {
        FUN_0041ed80(*(void **)((int)param_1 + 0xa4),(char *)local_100);
        return;
      }
      if (iVar14 != 0x6d616e63) {
        return;
      }
      Ordinal_762(local_100);
      return;
    }
    if (uVar9 == 0x62746567) {
      uVar9 = *puVar15;
      *(int *)((int)param_1 + 0x10) = (int)puVar4 + 10;
      if (0x6b6e6f6d < uVar9) {
        if (uVar9 != 0x6d616e63) {
          if (uVar9 != 0x6d697463) {
            return;
          }
          iVar14 = *(int *)(*(int *)((int)param_1 + 0xa4) + 0x82b) / 600;
          iVar14 = wsprintfA(*(LPSTR *)((int)param_1 + 0xb8),s__2d__2d_00436c68,iVar14 / 0x3c,
                             iVar14 % 0x3c);
          if (*(char *)(*(int *)((int)param_1 + 0xb8) + -3 + iVar14 + 1) == ' ') {
            *(undefined1 *)(*(int *)((int)param_1 + 0xb8) + -3 + iVar14 + 1) = 0x30;
          }
          *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + iVar14 + 2;
          return;
        }
        uVar9 = 0xffffffff;
        pcVar8 = *(char **)(*(int *)((int)param_1 + 0xa4) + 0x807);
        do {
          pcVar13 = pcVar8;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar13;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar8 = pcVar13 + -uVar9;
        pcVar13 = *(char **)((int)param_1 + 0xb8);
        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar13 = pcVar13 + 1;
        }
        uVar9 = 0xffffffff;
        pcVar8 = *(char **)((int)param_1 + 0xb8);
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        *(uint *)((int)param_1 + 0xbc) = ~uVar9;
        return;
      }
      if (uVar9 == 0x6b6e6f6d) {
        wsprintfA(*(LPSTR *)((int)param_1 + 0xb8),&DAT_00436b98,
                  *(undefined4 *)(*(int *)((int)param_1 + 0xa4) + 0x48));
        uVar9 = 0xffffffff;
        pcVar8 = *(char **)((int)param_1 + 0xb8);
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        *(uint *)((int)param_1 + 0xbc) = ~uVar9;
        return;
      }
      if (uVar9 != 0x61746164) {
        return;
      }
      pcVar8 = *(char **)((int)param_1 + 0xb8);
      iVar14 = 0;
      puVar12 = (undefined4 *)(*(int *)((int)param_1 + 0xa4) + 0x803);
      *pcVar8 = '\0';
      while (iVar14 < 10) {
        uVar9 = 0xffffffff;
        pcVar13 = (char *)*puVar12;
        do {
          pcVar16 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar10 = -1;
        pcVar13 = pcVar8;
        do {
          pcVar19 = pcVar13;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar19 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar19;
        } while (cVar1 != '\0');
        pcVar13 = pcVar16 + -uVar9;
        pcVar16 = pcVar19 + -1;
        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar9 = 0xffffffff;
        pcVar13 = (char *)&DAT_00436c74;
        do {
          pcVar16 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar10 = -1;
        pcVar13 = pcVar8;
        do {
          pcVar19 = pcVar13;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar19 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar19;
        } while (cVar1 != '\0');
        puVar12 = puVar12 + 1;
        pcVar13 = pcVar16 + -uVar9;
        pcVar16 = pcVar19 + -1;
        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        iVar14 = iVar14 + 1;
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      uVar9 = 0xffffffff;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      *(uint *)((int)param_1 + 0xbc) = ~uVar9;
      return;
    }
  }
  else if (uVar9 < 0x63746169) {
    if (uVar9 == 0x63746168) {
      FUN_0040b070(DAT_00436ec0,0,1);
      FUN_0040b0c0();
      return;
    }
    if (uVar9 == 0x636e6170) {
      FUN_00402630(DAT_00436eb0,1);
      FUN_00403700(*(int *)((int)DAT_00436eb0 + 0x60));
      return;
    }
  }
  else if (uVar9 < 0x64726f78) {
    if (uVar9 == 0x64726f77) {
      uVar9 = FUN_00424710(param_1);
      iVar14 = wsprintfA(*(LPSTR *)((int)param_1 + 0xb8),&DAT_00436c70,
                         *(undefined4 *)(*(int *)((int)param_1 + 0xa4) + 0x1ec + uVar9 * 4));
      pcVar13 = (char *)(*(int *)((int)param_1 + 0xb8) + iVar14);
      *(char **)((int)param_1 + 0xb8) = pcVar13;
      *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + iVar14;
      uVar11 = 0xffffffff;
      pcVar8 = (char *)(uVar9 * 0xb + 0x13c + *(int *)((int)param_1 + 0xa4));
      pcVar16 = pcVar8;
      do {
        pcVar19 = pcVar16;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar19 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar19 + -uVar11;
      for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = 0xffffffff;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xb8) + (~uVar9 - 1));
      *(undefined1 **)((int)param_1 + 0xb8) = puVar5;
      *puVar5 = 0x7c;
      *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + 1;
      *(uint *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + ~uVar9;
      return;
    }
    if (uVar9 == 0x64656964) {
      FUN_0040b070(DAT_00436ec0,2,1);
      FUN_0040b0c0();
      return;
    }
  }
  else if (uVar9 < 0x656e6568) {
    if (uVar9 == 0x656e6567) {
      if (DAT_004382c4 == (void *)0x0) {
        return;
      }
      FUN_004233c0(DAT_004382c4,&local_138);
      piVar18 = &local_138;
      do {
        iVar14 = *piVar18;
        piVar18 = piVar18 + 1;
        iVar14 = wsprintfA(*(LPSTR *)((int)param_1 + 0xb8),&DAT_00436c70,iVar14);
        *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + iVar14;
        *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + iVar14;
      } while (piVar18 < local_100);
      return;
    }
    if (uVar9 == 0x65626f6c) {
      iVar14 = *(int *)(*(int *)((int)param_1 + 0xa4) + 0x2ac8);
      iVar10 = *(int *)(iVar14 + 0xc28);
      **(undefined1 **)((int)param_1 + 0xb8) = (char)iVar10;
      *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + 1;
      iVar14 = iVar14 + 8;
      for (iVar17 = 0; iVar17 < iVar10; iVar17 = iVar17 + 1) {
        **(undefined1 **)((int)param_1 + 0xb8) = *(undefined1 *)(iVar14 + 4);
        puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xb8) + 1);
        *(undefined1 **)((int)param_1 + 0xb8) = puVar5;
        *puVar5 = *(undefined1 *)(iVar14 + 8);
        puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xb8) + 1);
        *(undefined1 **)((int)param_1 + 0xb8) = puVar5;
        *puVar5 = *(undefined1 *)(iVar14 + 0xc);
        puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xb8) + 1);
        *(undefined1 **)((int)param_1 + 0xb8) = puVar5;
        *puVar5 = *(undefined1 *)(iVar14 + 0x10);
        puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xb8) + 1);
        *(undefined1 **)((int)param_1 + 0xb8) = puVar5;
        *puVar5 = *(undefined1 *)(iVar14 + 0x22);
        *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + 1;
        iVar14 = iVar14 + 0xc2;
      }
      **(undefined1 **)((int)param_1 + 0xb8) = 0xff;
      *(int *)((int)param_1 + 0xbc) = iVar10 * 4 + 1;
      return;
    }
  }
  else if (uVar9 < 0x6767656f) {
    if (uVar9 == 0x6767656e) {
      FUN_0040b070(DAT_00436ec0,1,1);
      FUN_0040b0c0();
      return;
    }
    if (uVar9 == 0x6576696c) {
      FUN_0040b070(DAT_00436ec0,3,1);
      FUN_0040b0c0();
      return;
    }
  }
  else if (uVar9 < 0x70726374) {
    if (uVar9 == 0x70726373) {
      uVar9 = FUN_00424710(param_1);
      uVar11 = FUN_00424710(param_1);
      uVar6 = FUN_00424710(param_1);
      uVar7 = FUN_00424710(param_1);
      pcVar8 = (char *)FUN_004242c0(uVar9 << 0x18 | uVar11 << 0x10 | uVar6 << 8 | uVar7);
      iVar14 = 0;
      if (pcVar8 != (char *)0x0) {
        uVar9 = 0xffffffff;
        pcVar13 = pcVar8;
        do {
          pcVar16 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar13 = pcVar16 + -uVar9;
        pcVar16 = *(char **)((int)param_1 + 0xb8);
        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar9 = 0xffffffff;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar14 = ~uVar9 - 1;
        *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + iVar14;
      }
      **(undefined1 **)((int)param_1 + 0xb8) = 0x7c;
      *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + 1;
      *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + iVar14 + 1;
      return;
    }
    if (uVar9 == 0x6c6c6563) {
      uVar9 = FUN_00424710(param_1);
      uVar11 = FUN_00424710(param_1);
      uVar6 = FUN_00424710(param_1);
      FUN_0042c210(*(void **)(*(int *)((int)param_1 + 0xa4) + 0x2ac8),uVar9,uVar11,uVar6,
                   *(char **)((int)param_1 + 0xb8));
      uVar9 = 0xffffffff;
      pcVar8 = *(char **)((int)param_1 + 0xb8);
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      *(uint *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + (~uVar9 - 1);
      *(uint *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + (~uVar9 - 1);
      return;
    }
  }
  else {
    if (uVar9 == 0x73747570) {
      FUN_004253e0(param_1,(undefined1 *)local_100);
      uVar9 = 0xffffffff;
      piVar18 = local_100;
      do {
        piVar20 = piVar18;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        piVar20 = (int *)((int)piVar18 + 1);
        iVar14 = *piVar18;
        piVar18 = piVar20;
      } while ((char)iVar14 != '\0');
      uVar9 = ~uVar9;
      puVar12 = (undefined4 *)((int)piVar20 - uVar9);
      puVar21 = *(undefined4 **)((int)param_1 + 0xb8);
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar21 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar21 = puVar21 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar21 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar21 = (undefined4 *)((int)puVar21 + 1);
      }
      uVar9 = 0xffffffff;
      piVar18 = local_100;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        iVar14 = *piVar18;
        piVar18 = (int *)((int)piVar18 + 1);
      } while ((char)iVar14 != '\0');
      puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xb8) + (~uVar9 - 1));
      *(undefined1 **)((int)param_1 + 0xb8) = puVar5;
      *puVar5 = 0x7c;
      *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + 1;
      *(uint *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + ~uVar9;
      return;
    }
    if (uVar9 == 0x74636970) {
      bVar2 = *(byte *)puVar15;
      *(byte **)((int)param_1 + 0x10) = (byte *)((int)puVar4 + 7);
      bVar3 = *(byte *)((int)puVar4 + 7);
      *(int *)((int)param_1 + 0x10) = (int)puVar4 + 9;
      local_138._0_1_ = s_temp_spr_00436c5c[0];
      local_138._1_1_ = s_temp_spr_00436c5c[1];
      local_138._2_1_ = s_temp_spr_00436c5c[2];
      local_138._3_1_ = s_temp_spr_00436c5c[3];
      local_134[0] = s_temp_spr_00436c5c[4];
      local_134[1] = s_temp_spr_00436c5c[5];
      local_134[2] = s_temp_spr_00436c5c[6];
      local_134[3] = s_temp_spr_00436c5c[7];
      local_130 = s_temp_spr_00436c5c[8];
      iVar14 = FUN_00406880(bVar2,bVar3,*(int **)((int)param_1 + 0xa4),&local_138);
      if (iVar14 == 0) {
        **(undefined1 **)((int)param_1 + 0xb8) = 0;
        *(undefined4 *)((int)param_1 + 0xbc) = 0;
        return;
      }
      uVar9 = 0xffffffff;
      piVar18 = &local_138;
      do {
        piVar20 = piVar18;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        piVar20 = (int *)((int)piVar18 + 1);
        iVar14 = *piVar18;
        piVar18 = piVar20;
      } while ((char)iVar14 != '\0');
      uVar9 = ~uVar9;
      puVar12 = (undefined4 *)((int)piVar20 - uVar9);
      puVar21 = *(undefined4 **)((int)param_1 + 0xb8);
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar21 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar21 = puVar21 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar21 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar21 = (undefined4 *)((int)puVar21 + 1);
      }
      uVar9 = 0xffffffff;
      pcVar8 = *(char **)((int)param_1 + 0xb8);
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      *(uint *)((int)param_1 + 0xbc) = ~uVar9;
      return;
    }
    if (uVar9 == 0x76747570) {
      uVar9 = FUN_00424710(param_1);
      iVar14 = wsprintfA(*(LPSTR *)((int)param_1 + 0xb8),&DAT_00436c70,uVar9);
      *(int *)((int)param_1 + 0xb8) = *(int *)((int)param_1 + 0xb8) + iVar14;
      *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + iVar14;
      return;
    }
  }
  FUN_004265c0(param_1,s__dde___command_00436c4c);
  return;
}

