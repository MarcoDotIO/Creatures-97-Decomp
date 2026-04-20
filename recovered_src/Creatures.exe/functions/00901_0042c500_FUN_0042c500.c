/*
 * Program: Creatures.exe
 * Function: FUN_0042c500
 * Entry: 0042c500
 * Namespace: Global
 * Prototype: undefined FUN_0042c500(void * this, int param_1, uint param_2)
 */


/* WARNING: Removing unreachable block (ram,0x0042cbc7) */

void __thiscall FUN_0042c500(void *this,int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  void *this_00;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  byte local_5a;
  byte local_59;
  void *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  byte local_3b;
  undefined1 local_3a;
  byte local_39;
  byte local_38 [6];
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  char local_2f;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  char *local_14;
  int local_10 [3];
  int *local_4;
  
  local_10[0] = -1;
  local_18 = 0;
  local_10[1] = 0xffffffff;
  puVar13 = &local_44;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = 0;
  local_44 = (char *)CONCAT13(0x40,CONCAT12(1,(undefined2)local_44));
  local_40 = 0xff;
  *(undefined4 *)((int)this + 0xab) = 0;
  *(undefined1 *)((int)this + 0xbd) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  local_3f = *(undefined1 *)((int)this + 0xbe);
  local_3e = *(undefined1 *)((int)this + 0xbf);
  local_14 = (char *)((int)this + 0x2f);
  local_3d = *(undefined1 *)((int)this + 0xc0);
  local_3c = *(undefined1 *)((int)this + 0xc1);
  if (*(char *)((int)this + 0x2f) == '\x01') {
    *(undefined1 *)((int)this + 0xbc) = 0xff;
  }
  if (*(char *)((int)this + 0x69) == '\x01') {
    *(undefined1 *)((int)this + 0xbd) = 0xff;
  }
  local_48 = 0;
  iVar7 = *(int *)((int)this + 0x97);
  local_58 = this;
  if (0 < *(int *)((int)this + 0x9f)) {
    local_10[2] = (int)this + 0x23;
    local_4 = (int *)((int)this + 0xb3);
    do {
      local_3b = *(undefined1 *)(iVar7 + 3);
      local_3a = *(undefined1 *)(iVar7 + 2);
      local_39 = *(byte *)((int)local_58 + 0x14);
      iVar9 = 0;
      do {
        bVar1 = *(byte *)(iVar7 + 0xc + iVar9);
        if (bVar1 == 0) break;
        iVar2 = 0;
        piVar14 = *(int **)(iVar7 + 4 + iVar9 * 4);
        local_50 = -1;
        uVar8 = (uint)bVar1;
        do {
          if (*(byte *)(*piVar14 + 2) == 0) {
            local_50 = 0;
          }
          else {
            iVar2 = iVar2 + ((uint)*(byte *)((int)piVar14 + 7) * (uint)*(byte *)(*piVar14 + 2) >> 8)
            ;
          }
          piVar14 = (int *)((int)piVar14 + 10);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if (iVar2 < 0x100) {
          if (iVar2 < 0) {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = 0xff;
        }
        iVar12 = iVar9 + 1;
        bVar1 = (byte)((uint)*(byte *)((int)local_58 + 0x17) * iVar2 >> 8);
        local_38[iVar9] = bVar1;
        local_38[iVar9 + 2] = (byte)local_50 & bVar1;
        iVar9 = iVar12;
      } while (iVar12 < 2);
      uVar8 = 0;
      uVar5 = 0;
      bVar1 = *(byte *)((int)local_58 + 0x18);
      pbVar3 = (byte *)((int)local_58 + 0x19);
      while (bVar1 != 0) {
        cVar6 = (char)uVar8;
        if (bVar1 < 0x16) {
          uVar8 = (uint)*(byte *)((int)&local_44 + (uint)bVar1);
        }
        else {
          switch(bVar1) {
          case 0x16:
            if (cVar6 == '\0') {
              uVar5 = 0;
              goto LAB_0042c728;
            }
            break;
          case 0x17:
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar8 = *(byte *)((int)&local_44 + (uint)bVar1) + uVar8;
            if (0xfe < uVar8) {
              uVar8 = 0xff;
            }
            uVar8 = uVar8 & 0xff;
            break;
          case 0x18:
            uVar8 = uVar8 - *(byte *)((int)&local_44 + (uint)*pbVar3);
            if ((int)uVar8 < 1) {
              uVar8 = 0;
            }
            uVar8 = uVar8 & 0xff;
            pbVar3 = pbVar3 + 1;
            break;
          case 0x19:
            uVar8 = *(byte *)((int)&local_44 + (uint)*pbVar3) * uVar8 >> 8;
            pbVar3 = pbVar3 + 1;
            break;
          case 0x1a:
            if (cVar6 != -1) {
              uVar8 = (uint)(byte)(cVar6 + 1);
            }
            break;
          case 0x1b:
            if (cVar6 != '\0') {
              uVar8 = (uint)(byte)(cVar6 - 1);
            }
          }
        }
        uVar5 = (undefined1)uVar8;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      }
LAB_0042c728:
      *(undefined1 *)(iVar7 + 3) = uVar5;
      local_3b = *(byte *)(iVar7 + 3);
      iVar9 = (uint)*(byte *)(iVar7 + 3) - (uint)local_39;
      if (iVar9 < 1) {
        *(undefined1 *)(iVar7 + 2) = 0;
      }
      else {
        *(char *)(iVar7 + 2) = (char)iVar9;
        local_18 = local_18 + 1;
        *(int *)(*(int *)((int)local_58 + 0xa7) + *(int *)((int)local_58 + 0xab) * 4) = iVar7;
        *(int *)((int)local_58 + 0xab) = *(int *)((int)local_58 + 0xab) + 1;
      }
      bVar1 = *(byte *)(iVar7 + 3);
      local_5a = bVar1;
      if (bVar1 != *(byte *)((int)local_58 + 0x16)) {
        bVar1 = FUN_00428b80(&local_5a,*(byte *)((int)local_58 + 0x15),
                             *(byte *)((int)local_58 + 0x16),param_2);
      }
      *(byte *)(iVar7 + 3) = bVar1;
      local_20 = local_4;
      local_24 = local_10;
      local_1c = (undefined4 *)(iVar7 + 4);
      local_54 = 0;
      iVar9 = local_10[2];
      do {
        local_4c = 0;
        piVar14 = (int *)*local_1c;
        local_50 = 0;
        if (*(char *)(iVar7 + 0xc + local_54) != '\0') {
          do {
            local_38[4] = *(undefined1 *)(*piVar14 + 2);
            local_32 = *(undefined1 *)((int)piVar14 + 6);
            local_31 = *(undefined1 *)((int)piVar14 + 7);
            local_30 = (char)piVar14[2];
            local_2f = *(char *)((int)piVar14 + 9);
            if (*(char *)((int)piVar14 + 9) == '\0') {
              local_4c = local_4c + 1;
            }
            bVar10 = 0;
            bVar1 = *(byte *)(iVar9 + 0x26);
            pbVar3 = (byte *)(iVar9 + 0x27);
            while (bVar1 != 0) {
              if (bVar1 < 0x16) {
                bVar10 = *(byte *)((int)&local_44 + (uint)bVar1);
              }
              else {
                switch(bVar1) {
                case 0x16:
                  if (bVar10 == 0) goto LAB_0042c8d5;
                  break;
                case 0x17:
                  bVar1 = *pbVar3;
                  pbVar3 = pbVar3 + 1;
                  uVar8 = (uint)*(byte *)((int)&local_44 + (uint)bVar1) + (uint)bVar10;
                  if (0xfe < uVar8) {
                    uVar8 = 0xff;
                  }
                  bVar10 = (byte)uVar8;
                  break;
                case 0x18:
                  iVar2 = (uint)bVar10 - (uint)*(byte *)((int)&local_44 + (uint)*pbVar3);
                  if (iVar2 < 1) {
                    iVar2 = 0;
                  }
                  bVar10 = (byte)iVar2;
                  pbVar3 = pbVar3 + 1;
                  break;
                case 0x19:
                  bVar10 = (byte)((uint)*(byte *)((int)&local_44 + (uint)*pbVar3) * (uint)bVar10 >>
                                 8);
                  pbVar3 = pbVar3 + 1;
                  break;
                case 0x1a:
                  if (bVar10 != 0xff) {
                    bVar10 = bVar10 + 1;
                  }
                  break;
                case 0x1b:
                  if (bVar10 != 0) {
                    bVar10 = bVar10 - 1;
                  }
                }
              }
              bVar1 = *pbVar3;
              pbVar3 = pbVar3 + 1;
            }
LAB_0042c8d5:
            bVar1 = *(byte *)((int)piVar14 + 6);
            pbVar3 = (byte *)((int)piVar14 + 6);
            if (bVar1 < bVar10) {
              bVar1 = bVar1 + 4;
LAB_0042c909:
              *pbVar3 = bVar1;
            }
            else if (bVar1 != 0) {
              bVar1 = FUN_00428b30(pbVar3,*(byte *)(iVar9 + 0xd),param_2);
              goto LAB_0042c909;
            }
            if (*pbVar3 != 0) {
              uVar8 = 0;
              bVar1 = *(byte *)(iVar9 + 0x30);
              pbVar4 = (byte *)(iVar9 + 0x31);
              while (bVar1 != 0) {
                if (bVar1 < 0x16) {
                  uVar8 = (uint)*(byte *)((int)&local_44 + (uint)bVar1);
                }
                else {
                  cVar6 = (char)uVar8;
                  switch(bVar1) {
                  case 0x16:
                    if (cVar6 == '\0') goto LAB_0042c9ca;
                    break;
                  case 0x17:
                    bVar1 = *pbVar4;
                    pbVar4 = pbVar4 + 1;
                    uVar8 = *(byte *)((int)&local_44 + (uint)bVar1) + uVar8;
                    if (0xfe < uVar8) {
                      uVar8 = 0xff;
                    }
                    uVar8 = uVar8 & 0xff;
                    break;
                  case 0x18:
                    uVar8 = uVar8 - *(byte *)((int)&local_44 + (uint)*pbVar4);
                    if ((int)uVar8 < 1) {
                      uVar8 = 0;
                    }
                    uVar8 = uVar8 & 0xff;
                    pbVar4 = pbVar4 + 1;
                    break;
                  case 0x19:
                    uVar8 = *(byte *)((int)&local_44 + (uint)*pbVar4) * uVar8 >> 8;
                    pbVar4 = pbVar4 + 1;
                    break;
                  case 0x1a:
                    if (cVar6 != -1) {
                      uVar8 = (uint)(byte)(cVar6 + 1);
                    }
                    break;
                  case 0x1b:
                    if (cVar6 != '\0') {
                      uVar8 = (uint)(byte)(cVar6 - 1);
                    }
                  }
                }
                bVar1 = *pbVar4;
                pbVar4 = pbVar4 + 1;
              }
LAB_0042c9ca:
              bVar1 = (byte)(uVar8 * *pbVar3 >> 8);
              if (bVar1 != 0) {
                iVar2 = (uint)*(byte *)((int)piVar14 + 7) - (uint)*(byte *)(piVar14 + 2);
                if (iVar2 < (int)(uint)bVar1) {
                  uVar8 = (uint)(byte)(bVar1 - (char)iVar2) + (uint)*(byte *)((int)piVar14 + 7);
                  if (0xfe < uVar8) {
                    uVar8 = 0xff;
                  }
                  *(char *)((int)piVar14 + 7) = (char)uVar8;
                }
              }
            }
            bVar1 = *(byte *)((int)piVar14 + 7);
            local_59 = bVar1;
            if (bVar1 != *(byte *)(piVar14 + 2)) {
              bVar1 = FUN_00428b80(&local_59,*(byte *)(iVar9 + 0xe),*(byte *)(piVar14 + 2),param_2);
            }
            *(byte *)((int)piVar14 + 7) = bVar1;
            bVar1 = *(byte *)(piVar14 + 2);
            if (((*(byte *)((int)piVar14 + 7) != bVar1) && (*(byte *)(iVar9 + 0xf) != 0)) &&
               (param_2 % (uint)*(byte *)(iVar9 + 0xf) == 0)) {
              if (bVar1 < *(byte *)((int)piVar14 + 7)) {
                cVar6 = bVar1 + 1;
              }
              else {
                cVar6 = bVar1 - 1;
              }
              *(char *)(piVar14 + 2) = cVar6;
            }
            if (((*(byte *)(iVar9 + 0x10) != 0) && (*(char *)((int)piVar14 + 9) != -1)) &&
               (param_2 % (uint)*(byte *)(iVar9 + 0x10) == 0)) {
              uVar8 = 0;
              bVar1 = *(byte *)(iVar9 + 0x11);
              pbVar3 = (byte *)(iVar9 + 0x12);
              while (cVar6 = (char)uVar8, bVar1 != 0) {
                if (bVar1 < 0x16) {
                  uVar8 = (uint)*(byte *)((int)&local_44 + (uint)bVar1);
                }
                else {
                  switch(bVar1) {
                  case 0x16:
                    if (cVar6 == '\0') goto LAB_0042cb4b;
                    break;
                  case 0x17:
                    bVar1 = *pbVar3;
                    pbVar3 = pbVar3 + 1;
                    uVar8 = *(byte *)((int)&local_44 + (uint)bVar1) + uVar8;
                    if (0xfe < uVar8) {
                      uVar8 = 0xff;
                    }
                    uVar8 = uVar8 & 0xff;
                    break;
                  case 0x18:
                    uVar8 = uVar8 - *(byte *)((int)&local_44 + (uint)*pbVar3);
                    if ((int)uVar8 < 1) {
                      uVar8 = 0;
                    }
                    uVar8 = uVar8 & 0xff;
                    pbVar3 = pbVar3 + 1;
                    break;
                  case 0x19:
                    uVar8 = *(byte *)((int)&local_44 + (uint)*pbVar3) * uVar8 >> 8;
                    pbVar3 = pbVar3 + 1;
                    break;
                  case 0x1a:
                    if (cVar6 != -1) {
                      uVar8 = (uint)(byte)(cVar6 + 1);
                    }
                    break;
                  case 0x1b:
                    if (cVar6 != '\0') {
                      uVar8 = (uint)(byte)(cVar6 - 1);
                    }
                  }
                }
                bVar1 = *pbVar3;
                pbVar3 = pbVar3 + 1;
              }
LAB_0042cb4b:
              if (*(byte *)((int)piVar14 + 9) < uVar8) {
                *(char *)((int)piVar14 + 9) = cVar6;
              }
            }
            if (((*(byte *)(iVar9 + 0x1b) != 0) && (*(char *)((int)piVar14 + 9) != '\0')) &&
               (param_2 % (uint)*(byte *)(iVar9 + 0x1b) == 0)) {
              uVar8 = 0;
              cVar6 = '\0';
              bVar1 = *(byte *)(iVar9 + 0x1c);
              pbVar3 = (byte *)(iVar9 + 0x1c);
              while (bVar1 != 0) {
                pbVar4 = pbVar3 + 1;
                if (bVar1 < 0x16) {
                  uVar8 = (uint)*(byte *)((int)&local_44 + (uint)bVar1);
                }
                else {
                  cVar6 = (char)uVar8;
                  switch(bVar1) {
                  case 0x16:
                    if (cVar6 == '\0') goto LAB_0042cc64;
                    break;
                  case 0x17:
                    bVar1 = *pbVar4;
                    pbVar4 = pbVar3 + 2;
                    uVar8 = *(byte *)((int)&local_44 + (uint)bVar1) + uVar8;
                    if (0xfe < uVar8) {
                      uVar8 = 0xff;
                    }
                    uVar8 = uVar8 & 0xff;
                    break;
                  case 0x18:
                    uVar8 = uVar8 - *(byte *)((int)&local_44 + (uint)*pbVar4);
                    if ((int)uVar8 < 1) {
                      uVar8 = 0;
                    }
                    uVar8 = uVar8 & 0xff;
                    pbVar4 = pbVar3 + 2;
                    break;
                  case 0x19:
                    uVar8 = *(byte *)((int)&local_44 + (uint)*pbVar4) * uVar8 >> 8;
                    pbVar4 = pbVar3 + 2;
                    break;
                  case 0x1a:
                    if (cVar6 != -1) {
                      uVar8 = (uint)(byte)(cVar6 + 1);
                    }
                    break;
                  case 0x1b:
                    if (cVar6 != '\0') {
                      uVar8 = (uint)(byte)(cVar6 - 1);
                    }
                  }
                }
                cVar6 = (char)uVar8;
                pbVar3 = pbVar4;
                bVar1 = *pbVar4;
              }
              if ((cVar6 != '\0') &&
                 (cVar6 = *(char *)((int)piVar14 + 9) + -1, *(char *)((int)piVar14 + 9) = cVar6,
                 cVar6 == '\0')) {
                *(undefined1 *)((int)piVar14 + 6) = 0;
                *(undefined1 *)((int)piVar14 + 7) = 0;
                *(undefined1 *)(piVar14 + 2) = 0;
                *(undefined1 *)(iVar7 + 2) = 0;
                *(undefined1 *)(iVar7 + 3) = 0;
                local_4c = local_4c + 1;
              }
            }
LAB_0042cc64:
            piVar14 = (int *)((int)piVar14 + 10);
            local_50 = local_50 + 1;
          } while (local_50 < (int)(uint)*(byte *)(iVar7 + 0xc + local_54));
        }
        if (*(char *)(iVar9 + 0xc) == '\x01') {
          if (local_4c < (int)(uint)*(byte *)((int)local_58 + local_54 + 0xbc)) {
            *(char *)((int)local_58 + local_54 + 0xbc) = (char)local_4c;
          }
        }
        else if (local_4c != 0) {
          cVar6 = *(char *)((int)local_58 + local_54 + 0xbc);
          if (cVar6 != -1) {
            *(char *)((int)local_58 + local_54 + 0xbc) = cVar6 + '\x01';
          }
          if (local_48 < *local_20) {
            *local_24 = local_48;
          }
        }
        local_24 = local_24 + 1;
        local_54 = local_54 + 1;
        iVar9 = iVar9 + 0x3a;
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_24 < local_10 + 2);
      iVar7 = iVar7 + 0x10;
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)((int)local_58 + 0x9f));
  }
  iVar7 = (local_18 << 8) / *(int *)((int)local_58 + 0x9f);
  if (0xfe < iVar7) {
    iVar7 = 0xff;
  }
  *(char *)((int)local_58 + 0xbb) = (char)iVar7;
  if ((*(int *)((int)local_58 + 0xab) != 0) && ((*(byte *)((int)local_58 + 0x22) & 1) != 0)) {
    bVar1 = 0;
    iVar7 = *(int *)((int)local_58 + 0x97);
    iVar2 = 0;
    iVar9 = iVar7;
    if (0 < *(int *)((int)local_58 + 0x9f)) {
      do {
        if ((*(char *)(iVar7 + 0xe) == '\0') && (bVar1 < *(byte *)(iVar7 + 2))) {
          iVar9 = iVar7;
          bVar1 = *(byte *)(iVar7 + 2);
        }
        *(undefined1 *)(iVar7 + 2) = 0;
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar2 < *(int *)((int)local_58 + 0x9f));
    }
    if (bVar1 != 0) {
      *(byte *)(iVar9 + 2) = bVar1;
    }
  }
  iVar7 = 0;
  local_44 = local_14;
  do {
    if (*local_44 == '\x01') {
      iVar9 = 0;
      this_00 = *(void **)((int)local_58 + 0x97);
      if (0 < *(int *)((int)local_58 + 0x9f)) {
        do {
          if (*(char *)((int)this_00 + 2) != '\0') {
            FUN_0042cf10(this_00,param_1,(int)local_58,iVar7);
          }
          iVar9 = iVar9 + 1;
          this_00 = (void *)((int)this_00 + 0x10);
        } while (iVar9 < *(int *)((int)local_58 + 0x9f));
      }
    }
    iVar7 = iVar7 + 1;
    local_44 = local_44 + 0x3a;
  } while (iVar7 < 2);
  piVar14 = local_10;
  piVar15 = (int *)((int)local_58 + 0xb3);
  local_54 = 0;
  pcVar11 = local_14;
  do {
    if (*pcVar11 == '\x02') {
      if (*piVar14 == -1) {
        *piVar15 = 99999;
      }
      else {
        FUN_0042d000((void *)(*piVar14 * 0x10 + *(int *)((int)local_58 + 0x97)),param_1,
                     (int)local_58,local_54);
        *piVar15 = *piVar14;
      }
    }
    piVar15 = piVar15 + 1;
    piVar14 = piVar14 + 1;
    pcVar11 = pcVar11 + 0x3a;
    local_54 = local_54 + 1;
  } while (piVar14 < local_10 + 2);
  return;
}

