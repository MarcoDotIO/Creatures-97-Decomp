/*
 * Program: Creatures.exe
 * Function: FUN_004226d0
 * Entry: 004226d0
 * Namespace: Global
 * Prototype: undefined FUN_004226d0(int * param_1)
 */


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004226d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  uint uVar7;
  LONG LVar8;
  LONG LVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  byte bVar17;
  int local_104;
  int *local_fc;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  int *local_e0 [16];
  int *local_a0 [40];
  
  iVar11 = 0;
  local_f4 = 0;
  local_ec = 0;
  if (((((char)param_1[0xade] == '\0') && (*(int *)((int)param_1 + 0x1a) == 0)) &&
      (*(char *)((int)param_1 + 0x115) == '\0')) && (*(int *)((int)param_1 + 0x2b6a) == 0)) {
    iVar14 = 0;
    do {
      iVar15 = iVar14 + 4;
      iVar2 = iVar11 + 0x2b06;
      iVar11 = iVar11 + 1;
      iVar2 = (uint)*(byte *)((int)param_1 + iVar2) * *(int *)((int)&DAT_00436b48 + iVar14);
      *(int *)((int)local_e0 + iVar14) = (int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8;
      iVar14 = iVar15;
    } while (iVar15 < 0x40);
    local_104 = 10;
    ppiVar5 = local_e0;
    do {
      piVar6 = *ppiVar5;
      if (local_104 < (int)piVar6) {
        local_104 = (int)((int)piVar6 + ((int)piVar6 >> 0x1f & 3U)) >> 2;
      }
      ppiVar5 = ppiVar5 + 1;
    } while (ppiVar5 < local_a0);
    local_fc = param_1 + 0x6f8;
    piVar6 = param_1 + 0x213;
    ppiVar5 = local_a0 + 1;
    piVar13 = piVar6;
    do {
      iVar11 = *piVar13;
      *ppiVar5 = (int *)0x0;
      if (iVar11 != -1) {
        ppiVar3 = local_e0;
        piVar10 = local_fc;
        do {
          iVar11 = *piVar10;
          ppiVar4 = ppiVar3 + 1;
          piVar10 = piVar10 + 1;
          *ppiVar5 = (int *)((int)*ppiVar5 + ((uint)(iVar11 * (int)*ppiVar3) >> 8));
          ppiVar3 = ppiVar4;
        } while (ppiVar4 < local_a0);
      }
      piVar13 = piVar13 + 4;
      local_fc = local_fc + 0x10;
      ppiVar5 = ppiVar5 + 1;
    } while (ppiVar5 < &stack0x00000000);
    piVar16 = (int *)0x1;
    piVar13 = (int *)0xffff8001;
    ppiVar5 = local_a0 + 1;
    local_e0[0] = param_1;
    piVar10 = local_a0[0];
    do {
      if (((int)piVar13 < (int)*ppiVar5) && (-1 < *piVar6)) {
        piVar13 = *ppiVar5;
        piVar10 = piVar16;
      }
      piVar6 = piVar6 + 4;
      ppiVar5 = ppiVar5 + 1;
      piVar16 = (int *)((int)piVar16 + 1);
    } while (ppiVar5 < &stack0x00000000);
    if (0 < (int)piVar13) {
      iVar11 = *(int *)((int)piVar10 * 0x10 + 0x836 + (int)param_1);
      bVar17 = (byte)local_104;
      if (iVar11 == 0) {
        iVar11 = param_1[(int)piVar10 * 4 + 0x20f];
        local_a0[0] = (int *)param_1[(int)piVar10 * 4 + 0x210];
        local_e0[0] = (int *)FUN_0042daa0(DAT_00438594,*(LONG *)((int)param_1 + 0x72),
                                          *(LONG *)((int)param_1 + 0x76));
        piVar6 = (int *)FUN_0042daa0(DAT_00438594,iVar11,(LONG)local_a0[0]);
        if ((local_e0[0] == piVar6) &&
           (((((char)param_1[0x1c] == '\x03' && (iVar11 < *(int *)((int)param_1 + 0x72))) ||
             (((char)param_1[0x1c] == '\x02' && (*(int *)((int)param_1 + 0x72) < iVar11)))) &&
            (uVar7 = iVar11 - *(int *)((int)param_1 + 0x72), uVar12 = (int)uVar7 >> 0x1f,
            (int)((uVar7 ^ uVar12) - uVar12) < 500)))) {
          param_1[(int)piVar10 * 4 + 0x20f] = -1;
          param_1[(int)piVar10 * 4 + 0x210] = -1;
          return;
        }
        iVar11 = *(int *)((int)param_1 + (int)piVar10 * 0x10 + 0x836);
        if (iVar11 == 0) {
          ppiVar5 = local_a0;
          for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
            *ppiVar5 = (int *)0x0;
            ppiVar5 = ppiVar5 + 1;
          }
          local_f8 = (uint)(*(int *)((int)param_1 + 0x9e6) != 0);
          if (*(int *)((int)param_1 + 0x856) != 0) {
            local_f4 = 2 - (uint)(*(char *)(*(int *)((int)param_1 + 0x856) + 0x22) == '\0');
          }
          local_f0 = (uint)(*(int *)((int)param_1 + 0x72) < param_1[(int)piVar10 * 4 + 0x20f]);
          iVar11 = param_1[(int)piVar10 * 4 + 0x210];
          iVar14 = *(int *)((int)param_1 + 0x16);
          iVar2 = *(int *)((int)param_1 + 0xe);
          iVar15 = *param_1;
          LVar8 = (**(code **)(iVar15 + 0x74))();
          LVar9 = (**(code **)(iVar15 + 0x70))();
          iVar15 = FUN_0042daa0(DAT_00438594,LVar9,LVar8);
          if ((iVar15 == 0) || (*(int *)(iVar15 + 0x10) == 1)) {
            local_ec = 1;
          }
          iVar15 = 0;
          local_e0[0] = (int *)(local_f4 * 6);
          ppiVar5 = local_a0;
          do {
            piVar6 = (int *)((int)(char)(&DAT_00436afc)[local_f4 * 6 + iVar15] +
                            (int)(char)(&DAT_00436af0)[local_f8 * 6 + iVar15] + (int)*ppiVar5);
            *ppiVar5 = (int *)((int)(char)(&DAT_00436af0)[local_f8 * 6 + iVar15] + (int)*ppiVar5);
            *ppiVar5 = piVar6;
            piVar6 = (int *)((int)(char)(&DAT_00436b0e)[local_f0 * 6 + iVar15] + (int)piVar6);
            *ppiVar5 = piVar6;
            if (iVar11 < iVar2) {
              *ppiVar5 = (int *)((int)(char)(&DAT_00436b1a)[iVar15] + (int)piVar6);
            }
            if (iVar14 < iVar11) {
              *ppiVar5 = (int *)((int)*ppiVar5 + (int)(char)(&DAT_00436b20)[iVar15]);
            }
            ppiVar3 = ppiVar5 + 1;
            iVar1 = iVar15 + 0x436b26;
            iVar15 = iVar15 + 1;
            *ppiVar5 = (int *)((int)*ppiVar5 + (int)*(char *)(iVar1 + local_ec * 6));
            ppiVar5 = ppiVar3;
          } while (ppiVar3 < local_a0 + 6);
          piVar10 = (int *)0x0;
          piVar6 = (int *)0xffffd8f1;
          piVar13 = local_a0[0];
          do {
            if ((int)piVar6 < (int)local_a0[(int)piVar10]) {
              piVar6 = local_a0[(int)piVar10];
              piVar13 = piVar10;
            }
            piVar10 = (int *)((int)piVar10 + 1);
          } while ((int)piVar10 < 6);
          if ((int)piVar6 < 1) {
            return;
          }
          FUN_00420f80(param_1,(int)(char)piVar13[0x10dace],(int)(char)piVar13[0x10dad0],bVar17,
                       bVar17);
          return;
        }
      }
      if (*(int *)((int)param_1 + 0x7e6) != iVar11) {
        FUN_0042be10((void *)param_1[0xab2],2,(int)piVar10,bVar17);
        return;
      }
    }
  }
  return;
}

