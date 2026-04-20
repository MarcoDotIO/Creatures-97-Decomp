/*
 * Program: Creatures.exe
 * Function: FUN_00426670
 * Entry: 00426670
 * Namespace: Global
 * Prototype: undefined FUN_00426670(int * param_1)
 */


void __fastcall FUN_00426670(int *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined3 extraout_var;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_270;
  uint local_268;
  uint local_260;
  undefined1 local_25c [8];
  undefined1 local_254;
  undefined1 local_253;
  undefined1 local_252;
  undefined1 local_251;
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  byte local_218 [16];
  byte abStack_208 [16];
  char local_1f8 [32];
  char local_1d8 [64];
  CHAR local_198 [128];
  uint local_118 [70];
  
  uVar14 = local_118[0];
  do {
    bVar3 = false;
    puVar2 = (uint *)param_1[4];
    uVar5 = *puVar2;
    puVar13 = (uint *)((int)puVar2 + 5);
    param_1[4] = (int)puVar13;
    if (uVar5 < 0x23796174) {
      if (uVar5 == 0x23796173) {
        uVar5 = FUN_00424710(param_1);
        FUN_00421750((void *)param_1[0x29],uVar5);
      }
      else {
        if (uVar5 != 0x236d7473) goto LAB_004266a9;
        uVar5 = *puVar13;
        param_1[4] = (int)puVar2 + 10;
        if (uVar5 < 0x74636175) {
          if (uVar5 == 0x74636174) {
            uVar5 = FUN_00424710(param_1);
            FUN_00401d60((int *)param_1[0x25],uVar5);
          }
          else if (uVar5 == 0x6e676973) {
            uVar5 = FUN_00424710(param_1);
            FUN_00401d00((int *)param_1[0x25],uVar5);
          }
        }
        else if (uVar5 == 0x74697277) {
          uVar5 = FUN_00424710(param_1);
          uVar6 = FUN_00424710(param_1);
          FUN_00401c60(param_1[0x25],uVar5,uVar6);
        }
        else if (uVar5 == 0x756f6873) {
          uVar5 = FUN_00424710(param_1);
          FUN_00401ca0((int *)param_1[0x25],uVar5);
        }
      }
LAB_004281f1:
      bVar3 = true;
    }
    else {
      if (uVar5 < 0x3a646263) {
        if (uVar5 == 0x3a646262) {
          FUN_004264b0(param_1);
        }
        else {
          if (uVar5 != 0x24796173) goto LAB_004266a9;
          FUN_004253e0(param_1,local_218);
          FUN_00421830((void *)param_1[0x29],(char *)local_218);
        }
        goto LAB_004281f1;
      }
      if (uVar5 < 0x3a6d6962) {
        if (uVar5 == 0x3a6d6961) {
          uVar5 = FUN_00424710(param_1);
          *(uint *)(param_1[0x29] + 0x7f2) = uVar5;
          goto LAB_004281f1;
        }
        if (uVar5 != 0x3a656464) goto LAB_004266a9;
        FUN_00425420(param_1);
      }
      else if (uVar5 < 0x3a737974) {
        if (uVar5 == 0x3a737973) {
          FUN_00425cd0(param_1);
        }
        else {
          if (uVar5 != 0x3a707061) goto LAB_004266a9;
          FUN_00425f80(param_1);
        }
      }
      else {
        if (0x52505041 < uVar5) {
          if (uVar5 < 0x626f6e6c) {
            if (uVar5 == 0x626f6e6b) {
              uVar5 = FUN_00424710(param_1);
              uVar6 = FUN_00424710(param_1);
              *(uint *)(param_1[0x29] + 0x124 + uVar5 * 4) = uVar6;
            }
            else {
              if (uVar5 != 0x61657264) goto LAB_004266a9;
              uVar5 = FUN_00424710(param_1);
              *(uint *)(param_1[0x29] + 0x2b6a) = uVar5;
            }
          }
          else if (uVar5 < 0x63646e74) {
            if (uVar5 == 0x63646e73) {
              uVar5 = *puVar13;
              param_1[4] = (int)puVar2 + 10;
              FUN_004191d0((void *)param_1[0x29],uVar5,0);
            }
            else {
              if (uVar5 != 0x62757367) goto LAB_004266a9;
              *(int *)param_1[0x1a] = (int)puVar13 + (5 - param_1[3]);
              param_1[0x1a] = param_1[0x1a] + 4;
              iVar8 = *(int *)param_1[4];
              param_1[4] = param_1[4] + 5;
              if (param_1[0x2b] == iVar8) {
                param_1[4] = param_1[0x2c];
              }
              else {
                param_1[4] = param_1[3];
                do {
                  do {
                    piVar12 = (int *)param_1[4];
                    param_1[4] = (int)piVar12 + 1;
                  } while (*piVar12 != 0x72627573);
                  param_1[4] = (int)piVar12 + 5;
                  iVar9 = *(int *)((int)piVar12 + 5);
                  param_1[4] = (int)piVar12 + 10;
                } while (iVar9 != iVar8);
                param_1[0x2b] = iVar8;
                param_1[0x2c] = (int)piVar12 + 10;
              }
            }
          }
          else if (uVar5 < 0x63707474) {
            if (uVar5 != 0x63707473) {
              if (uVar5 != 0x63657865) goto LAB_004266a9;
              FUN_004253e0(param_1,local_218);
              FUN_004253e0(param_1,local_198);
              bVar4 = local_218[0];
              for (pbVar7 = local_218; (bVar4 != 0 && (*pbVar7 != 0x5c)); pbVar7 = pbVar7 + 1) {
                bVar4 = pbVar7[1];
              }
              if (*pbVar7 == 0) {
                DAT_00436c28 = param_1[0x29];
                FUN_0041cdd0((char *)local_218,local_198,0);
              }
              else {
                iVar8 = Ordinal_3307(local_218,local_118);
                if (iVar8 != 0) {
                  ShellExecuteA(*(HWND *)((int)DAT_00436ea8 + 0x20),(LPCSTR)0x0,(LPCSTR)local_218,
                                local_198,&DAT_00435c44,1);
                }
              }
              goto LAB_004281f6;
            }
            FUN_00419280((void *)param_1[0x29],0);
          }
          else if (uVar5 < 0x646c7271) {
            if (uVar5 != 0x646c7270) {
              if (uVar5 != 0x63756f74) goto LAB_004266a9;
              uVar5 = FUN_0040f0c0((void *)param_1[0x29],0);
              if (uVar5 == 0) {
                param_1[4] = param_1[4] + -5;
              }
              else if (uVar5 == 0xffffffff) {
                FUN_0041eee0(param_1[0x29]);
                FUN_00424250(param_1);
                return;
              }
              goto LAB_004281f6;
            }
            iVar8 = (**(code **)(*(int *)param_1[0x29] + 0x90))(puVar13,param_1[0x2a]);
            param_1[4] = iVar8;
          }
          else if (uVar5 < 0x65646e74) {
            if (uVar5 == 0x65646e73) {
              uVar5 = *puVar13;
              param_1[4] = (int)puVar2 + 10;
              FUN_00419180((void *)param_1[0x29],uVar5,0);
            }
            else {
              if (uVar5 != 0x65646166) goto LAB_004266a9;
              FUN_00419280((void *)param_1[0x29],1);
            }
          }
          else if (uVar5 < 0x656e6f65) {
            if (uVar5 == 0x656e6f64) {
              iVar8 = param_1[0x29];
              if (*(char *)(iVar8 + 0x835) < '\0') {
                FUN_0042beb0(*(void **)(iVar8 + 0x2ac8),6,(int)*(char *)(iVar8 + 0x833),0);
                *(undefined1 *)(iVar8 + 0x834) = 0;
              }
              else {
                *(undefined1 *)(iVar8 + 0x835) = 0xff;
              }
            }
            else {
              if (uVar5 != 0x656c6574) goto LAB_004266a9;
              uVar14 = 0;
              uVar5 = FUN_00424710(param_1);
              uVar6 = FUN_00424710(param_1);
              if (0 < DAT_00438868) {
                iVar8 = 0;
                do {
                  piVar12 = *(int **)(DAT_00438864 + iVar8);
                  if (*(int *)((int)piVar12 + 0x1a) == param_1[0x29]) {
                    *(undefined4 *)((int)piVar12 + 0x1a) = 0;
                    *(undefined1 *)(piVar12 + 2) = 2;
                    FUN_00414f10(piVar12);
                    (**(code **)(*piVar12 + 0x54))(uVar5,uVar6);
                    *(undefined1 *)(piVar12 + 2) = 0;
                    FUN_00414f10(piVar12);
                    if ((piVar12 == DAT_004382c4) &&
                       (FUN_00403640(*(int *)(DAT_00436eb0 + 0x60)), DAT_00436eb4 != 0)) {
                      FUN_00428e00(DAT_00436eb4);
                    }
                  }
                  iVar8 = iVar8 + 4;
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < DAT_00438868);
              }
            }
          }
          else if (uVar5 < 0x65726967) {
            if (uVar5 == 0x65726966) {
              uVar5 = FUN_00424710(param_1);
              uVar14 = FUN_00424710(param_1);
              uVar6 = FUN_00424710(param_1);
              FUN_0042bef0(*(void **)(param_1[0x29] + 0x2ac8),uVar5,uVar14,uVar6);
            }
            else {
              if (uVar5 != 0x65706572) goto LAB_004266a9;
              iVar8 = param_1[0x1a];
              param_1[0x1a] = iVar8 + -4;
              iVar9 = *(int *)(iVar8 + -4) + -1;
              if (iVar9 < 1) {
                param_1[0x1a] = iVar8 + -8;
              }
              else {
                piVar12 = (int *)(iVar8 + -8);
                param_1[0x1a] = (int)piVar12;
                iVar8 = *piVar12 + param_1[3];
                param_1[4] = iVar8;
                *piVar12 = iVar8 - param_1[3];
                iVar8 = param_1[0x1a];
                param_1[0x1a] = iVar8 + 4;
                *(int *)(iVar8 + 4) = iVar9;
                param_1[0x1a] = param_1[0x1a] + 4;
              }
            }
          }
          else if (uVar5 < 0x65736c66) {
            if (uVar5 == 0x65736c65) {
              local_270 = 1;
              do {
                iVar8 = *(int *)param_1[4];
                while ((iVar8 != 0x69646e65 && (*(int *)param_1[4] != 0x66696f64))) {
                  piVar12 = (int *)(param_1[4] + 1);
                  param_1[4] = (int)piVar12;
                  iVar8 = *piVar12;
                }
                iVar8 = *(int *)param_1[4];
                if (iVar8 == 0x66696f64) {
                  local_270 = local_270 + 1;
                }
                else if (iVar8 == 0x69646e65) {
                  local_270 = local_270 + -1;
                }
                param_1[4] = param_1[4] + 5;
              } while (0 < local_270);
            }
            else {
              if (uVar5 != 0x65736162) goto LAB_004266a9;
              piVar12 = (int *)param_1[0x29];
              iVar8 = param_1[0x2a];
              uVar5 = FUN_00424710(param_1);
              (**(code **)(*piVar12 + 0x94))(uVar5,iVar8);
            }
          }
          else if (uVar5 < 0x66646e74) {
            if (uVar5 != 0x66646e73) {
              if (uVar5 != 0x65736f70) goto LAB_004266a9;
              iVar8 = param_1[0x2a];
              uVar5 = FUN_00424710(param_1);
              iVar8 = (**(code **)(*(int *)param_1[0x29] + 0x88))(uVar5,iVar8);
              if (iVar8 == 0) {
                param_1[4] = (int)puVar2;
              }
              goto LAB_004281f6;
            }
            uVar5 = *puVar13;
            param_1[4] = (int)puVar2 + 10;
            if (uVar5 < 0x5f666670) {
              if (uVar5 == 0x5f66666f) {
                FUN_00402550(DAT_00436eb0);
              }
              else if (uVar5 == 0x5f5f6e6f) {
                FUN_00402520(DAT_00436eb0);
              }
            }
            else if (uVar5 == 0x65726f66) {
              FUN_004025a0(DAT_00436eb0);
            }
            else if (uVar5 == 0x736e6f63) {
              FUN_00402570(DAT_00436eb0);
            }
          }
          else if (uVar5 < 0x67697275) {
            if (uVar5 == 0x67697274) {
              uVar5 = FUN_00424710(param_1);
              uVar14 = FUN_00424710(param_1);
              uVar6 = FUN_00424710(param_1);
              FUN_0042beb0(*(void **)(param_1[0x29] + 0x2ac8),uVar5,uVar14,(char)uVar6);
            }
            else {
              if (uVar5 != 0x66696f64) goto LAB_004266a9;
              uVar5 = FUN_00424710(param_1);
              uVar14 = (uint)*(short *)param_1[4];
              param_1[4] = param_1[4] + 3;
              uVar6 = FUN_00424710(param_1);
              if (((((uVar14 != 0x7165) || (uVar6 != uVar5)) &&
                   ((uVar14 != 0x656e || (uVar6 == uVar5)))) &&
                  (((uVar14 != 0x7467 || ((int)uVar5 <= (int)uVar6)) &&
                   ((uVar14 != 0x746c || ((int)uVar6 <= (int)uVar5)))))) &&
                 (((((uVar14 != 0x6567 || ((int)uVar5 < (int)uVar6)) &&
                    ((uVar14 != 0x656c || ((int)uVar6 < (int)uVar5)))) &&
                   ((uVar14 != 0x7462 || ((uVar5 & uVar6) == 0)))) &&
                  ((uVar14 != 0x6662 || ((uVar5 & uVar6) != 0)))))) {
                local_270 = 1;
                do {
                  iVar8 = *(int *)param_1[4];
                  while (iVar8 != 0x69646e65) {
                    iVar8 = *(int *)param_1[4];
                    if ((iVar8 == 0x65736c65) || (iVar8 == 0x66696f64)) break;
                    piVar12 = (int *)(param_1[4] + 1);
                    param_1[4] = (int)piVar12;
                    iVar8 = *piVar12;
                  }
                  iVar8 = *(int *)param_1[4];
                  if (iVar8 == 0x66696f64) {
                    local_270 = local_270 + 1;
                  }
                  else if ((iVar8 == 0x69646e65) || ((local_270 == 1 && (iVar8 == 0x65736c65)))) {
                    local_270 = local_270 + -1;
                  }
                  param_1[4] = param_1[4] + 5;
                } while (0 < local_270);
              }
            }
          }
          else if (uVar5 < 0x6773656e) {
            if (uVar5 == 0x6773656d) {
              uVar5 = *puVar13;
              param_1[4] = (int)puVar2 + 10;
              if (uVar5 < 0x74636175) {
                if (uVar5 == 0x74636174) {
                  iVar8 = 0;
                  uVar15 = 0;
                  uVar5 = FUN_00424710(param_1);
                  FUN_00401930((int *)param_1[0x25],uVar5,uVar15,iVar8);
                }
                else if (uVar5 == 0x6e676973) {
                  iVar8 = 0;
                  uVar16 = 0;
                  uVar15 = 0;
                  uVar5 = FUN_00424710(param_1);
                  FUN_004018d0((int *)param_1[0x25],uVar5,uVar15,uVar16,iVar8);
                }
              }
              else if (uVar5 == 0x74697277) {
                uVar5 = FUN_00424710(param_1);
                iVar8 = 0;
                uVar16 = 0;
                uVar15 = 0;
                uVar6 = FUN_00424710(param_1);
                FUN_004016c0(param_1[0x25],uVar5,uVar6,uVar15,uVar16,iVar8);
              }
              else if (uVar5 == 0x756f6873) {
                iVar8 = 0;
                uVar16 = 0;
                uVar15 = 0;
                uVar5 = FUN_00424710(param_1);
                FUN_00401870((int *)param_1[0x25],uVar5,uVar15,uVar16,iVar8);
              }
            }
            else {
              if (uVar5 != 0x67726174) goto LAB_004266a9;
              uVar5 = FUN_00424710(param_1);
              if (uVar5 != 0) {
                param_1[0x29] = uVar5;
              }
            }
          }
          else if (uVar5 < 0x69646e66) {
            if (uVar5 != 0x69646e65) {
              if (uVar5 != 0x67756264) goto LAB_004266a9;
              uVar5 = FUN_00424710(param_1);
              wsprintfA((LPSTR)local_218,s_Debug___d_00436d50,uVar5);
              param_1[2] = 1;
              goto LAB_004281f6;
            }
          }
          else {
            if (0x6b636974 < uVar5) {
              if (uVar5 < 0x6c646e74) {
                if (uVar5 == 0x6c646e73) {
                  uVar5 = *puVar13;
                  param_1[4] = (int)puVar2 + 10;
                  FUN_004191d0((void *)param_1[0x29],uVar5,1);
                  goto LAB_004281f1;
                }
                if (uVar5 != 0x6b6c6177) goto LAB_004266a9;
                FUN_0041ee90((void *)param_1[0x29]);
              }
              else {
                if (0x6c6f6f74 < uVar5) {
                  if (uVar5 < 0x6d646e66) {
                    if (uVar5 == 0x6d646e65) {
LAB_0042820c:
                      param_1[4] = param_1[4] + -5;
                      FUN_00424250(param_1);
                      return;
                    }
                    if (uVar5 != 0x6c746e75) goto LAB_004266a9;
                    uVar5 = FUN_00424710(param_1);
                    uVar14 = (uint)*(short *)param_1[4];
                    param_1[4] = param_1[4] + 3;
                    uVar6 = FUN_00424710(param_1);
                    if ((((((uVar14 == 0x7165) && (uVar6 == uVar5)) ||
                          ((uVar14 == 0x656e && (uVar6 != uVar5)))) ||
                         ((uVar14 == 0x7467 && ((int)uVar6 < (int)uVar5)))) ||
                        (((uVar14 == 0x746c && ((int)uVar5 < (int)uVar6)) ||
                         ((((uVar14 == 0x6567 && ((int)uVar6 <= (int)uVar5)) ||
                           ((uVar14 == 0x656c && ((int)uVar5 <= (int)uVar6)))) ||
                          ((uVar14 == 0x7462 && ((uVar5 & uVar6) != 0)))))))) ||
                       ((uVar14 == 0x6662 && ((uVar5 & uVar6) == 0)))) {
                      param_1[0x1a] = param_1[0x1a] + -4;
                    }
                    else {
                      piVar12 = (int *)(param_1[0x1a] + -4);
                      param_1[0x1a] = (int)piVar12;
                      iVar8 = *piVar12 + param_1[3];
                      param_1[4] = iVar8;
                      *piVar12 = iVar8 - param_1[3];
                      param_1[0x1a] = param_1[0x1a] + 4;
                    }
                  }
                  else if (uVar5 < 0x6d676265) {
                    if (uVar5 == 0x6d676264) {
                      FUN_004253e0(param_1,local_218);
                    }
                    else {
                      if (uVar5 != 0x6d656863) goto LAB_004266a9;
                      uVar5 = FUN_00424710(param_1);
                      local_260 = FUN_00424710(param_1);
                      if (((*(uint *)(param_1[0x29] + 4) & 0xff000000) == 0x4000000) && (uVar5 != 0)
                         ) {
                        pbVar7 = (byte *)(*(int *)(param_1[0x29] + 0x2acc) + 8 + uVar5 * 2);
                        local_260 = local_260 & 0xff;
                        local_260 = *pbVar7 + local_260;
                        if (0xfe < local_260) {
                          local_260 = 0xff;
                        }
                        *pbVar7 = (byte)local_260;
                      }
                    }
                  }
                  else if (uVar5 < 0x6d696e62) {
                    if (uVar5 == 0x6d696e61) {
                      iVar8 = (**(code **)(*(int *)param_1[0x29] + 0x80))(puVar13,param_1[0x2a]);
                      param_1[4] = iVar8;
                      goto LAB_004281f6;
                    }
                    if (uVar5 != 0x6d696c73) goto LAB_004266a9;
                    *(undefined1 *)(param_1[0x29] + 8) = 0;
                    FUN_00414f10((int *)param_1[0x29]);
                  }
                  else if (uVar5 < 0x6d6f6f73) {
                    if (uVar5 == 0x6d6f6f72) {
                      uVar5 = FUN_00424710(param_1);
                      uVar6 = FUN_00424710(param_1);
                      uVar14 = FUN_00424710(param_1);
                      uVar11 = FUN_00424710(param_1);
                      local_23c = FUN_00424710(param_1);
                      iVar8 = DAT_00438594 + uVar5 * 0x14;
                      *(uint *)(iVar8 + 0xc) = uVar6;
                      *(uint *)(iVar8 + 0x10) = uVar14;
                      *(uint *)(iVar8 + 0x14) = uVar11;
                      *(uint *)(iVar8 + 0x18) = local_23c;
                      local_248 = uVar6;
                      local_244 = uVar14;
                      local_240 = uVar11;
                      uVar6 = FUN_00424710(param_1);
                      *(uint *)(uVar5 * 0x14 + 0x1c + DAT_00438594) = uVar6;
                      if (*(int *)(DAT_00438594 + 8) <= (int)uVar5) {
                        *(uint *)(DAT_00438594 + 8) = uVar5 + 1;
                      }
                      goto LAB_004281f6;
                    }
                    if (uVar5 != 0x6d697473) goto LAB_004266a9;
                    uVar5 = *puVar13;
                    param_1[4] = (int)puVar2 + 10;
                    if (uVar5 == 0x74697277) {
                      uVar14 = FUN_00424710(param_1);
                    }
                    uVar6 = FUN_00424710(param_1);
                    local_254 = (undefined1)uVar6;
                    uVar6 = FUN_00424710(param_1);
                    local_253 = (undefined1)uVar6;
                    uVar6 = FUN_00424710(param_1);
                    local_252 = (undefined1)uVar6;
                    uVar6 = FUN_00424710(param_1);
                    local_270 = 0;
                    local_251 = (undefined1)uVar6;
                    do {
                      uVar6 = FUN_00424710(param_1);
                      auStack_250[local_270] = (char)uVar6;
                      uVar6 = FUN_00424710(param_1);
                      iVar8 = local_270 + 1;
                      auStack_24c[local_270] = (char)uVar6;
                      local_270 = iVar8;
                    } while (iVar8 < 4);
                    if ((int)uVar5 < 0x74636175) {
                      if (uVar5 == 0x74636174) {
                        FUN_00401ba0((int *)param_1[0x25]);
                      }
                      else if (uVar5 == 0x6e676973) {
                        FUN_00401b40(local_25c,(int *)param_1[0x25]);
                      }
                    }
                    else if (uVar5 == 0x74697277) {
                      FUN_00401a80(local_25c,param_1[0x25],uVar14);
                    }
                    else if (uVar5 == 0x756f6873) {
                      FUN_00401ae0(local_25c,(int *)param_1[0x25]);
                    }
                  }
                  else if (uVar5 < 0x6e626164) {
                    if (uVar5 == 0x6e626163) {
                      uVar5 = FUN_00424710(param_1);
                      uVar6 = FUN_00424710(param_1);
                      uVar14 = FUN_00424710(param_1);
                      local_22c = FUN_00424710(param_1);
                      iVar8 = param_1[0x29];
                      *(uint *)(iVar8 + 0x14c) = uVar5;
                      *(uint *)(iVar8 + 0x150) = uVar6;
                      *(uint *)(iVar8 + 0x154) = uVar14;
                      *(uint *)(iVar8 + 0x158) = local_22c;
                      local_238 = uVar5;
                      local_234 = uVar6;
                      local_230 = uVar14;
                    }
                    else {
                      if (uVar5 != 0x6d756e65) goto LAB_004266a9;
                      uVar5 = FUN_00424710(param_1);
                      uVar6 = FUN_00424710(param_1);
                      uVar14 = FUN_00424710(param_1);
                      local_268 = 0;
                      uVar11 = (uVar5 << 0x10 | uVar14) << 8 | uVar6 << 0x10;
                      if (uVar5 != 0) {
                        local_268 = 0xff000000;
                      }
                      if (uVar6 != 0) {
                        local_268 = local_268 | 0xff0000;
                      }
                      if (uVar14 != 0) {
                        local_268 = local_268 | 0xff00;
                      }
                      local_270 = 0;
                      if (0 < DAT_00437fb8) {
                        do {
                          piVar12 = *(int **)(DAT_00437fb4 + local_270 * 4);
                          if (((piVar12[1] & local_268) == uVar11) &&
                             (iVar8 = (**(code **)(*piVar12 + 0x5c))(), iVar8 == 0)) break;
                          local_270 = local_270 + 1;
                        } while (local_270 < DAT_00437fb8);
                      }
                      if (local_270 < DAT_00437fb8) {
                        param_1[0x29] = *(int *)(DAT_00437fb4 + local_270 * 4);
                        *(int *)param_1[0x1a] = param_1[4] - param_1[3];
                        iVar8 = param_1[0x1a];
                        param_1[0x1a] = iVar8 + 4;
                        *(uint *)(iVar8 + 4) = uVar11;
                        iVar8 = param_1[0x1a];
                        param_1[0x1a] = iVar8 + 4;
                        *(uint *)(iVar8 + 4) = local_268;
                        iVar8 = param_1[0x1a];
                        param_1[0x1a] = iVar8 + 4;
                        *(int *)(iVar8 + 4) = local_270;
                        param_1[0x1a] = param_1[0x1a] + 4;
                      }
                      else {
                        for (iVar8 = *(int *)param_1[4]; iVar8 != 0x7478656e;
                            iVar8 = *(int *)(iVar8 + 1)) {
                          iVar8 = param_1[4];
                          param_1[4] = iVar8 + 1;
                        }
                        param_1[4] = param_1[4] + 5;
                      }
                    }
                  }
                  else if (uVar5 < 0x6e746573) {
                    if (uVar5 != 0x6e746572) {
                      if (uVar5 != 0x6e696f70) goto LAB_004266a9;
                      uVar5 = FUN_0040f0c0((void *)param_1[0x29],1);
                      if (uVar5 == 0) {
                        param_1[4] = param_1[4] + -5;
                      }
                      goto LAB_004281f6;
                    }
                    iVar8 = param_1[0x1a];
                    param_1[0x1a] = iVar8 + -4;
                    param_1[4] = param_1[3] + *(int *)(iVar8 + -4);
                  }
                  else if (uVar5 < 0x6f74766e) {
                    if (uVar5 == 0x6f74766d) {
                      uVar5 = FUN_00424710(param_1);
                      piVar12 = (int *)param_1[0x29];
                      uVar6 = FUN_00424710(param_1);
                      (**(code **)(*piVar12 + 0x54))(uVar5,uVar6);
                      goto LAB_004281f6;
                    }
                    if (uVar5 != 0x6e796173) goto LAB_004266a9;
                    FUN_00421430((void *)param_1[0x29]);
                  }
                  else if (uVar5 < 0x706f6f6d) {
                    if (uVar5 == 0x706f6f6c) {
                      *(int *)param_1[0x1a] = (int)puVar13 - param_1[3];
                      param_1[0x1a] = param_1[0x1a] + 4;
                    }
                    else {
                      if (uVar5 != 0x706c7361) goto LAB_004266a9;
                      uVar5 = FUN_00424710(param_1);
                      FUN_00422ed0((void *)param_1[0x29],uVar5);
                    }
                  }
                  else if (uVar5 < 0x706f7474) {
                    if (uVar5 == 0x706f7473) goto LAB_0042820c;
                    if (uVar5 != 0x706f7264) goto LAB_004266a9;
                    FUN_0041ef00((void *)param_1[0x29]);
                  }
                  else if (uVar5 < 0x71646e74) {
                    if (uVar5 != 0x71646e73) {
                      if (uVar5 == 0x70726373) {
                        uVar14 = FUN_00424710(param_1);
                        uVar5 = FUN_00424710(param_1);
                        uVar6 = FUN_00424710(param_1);
                        uVar11 = FUN_00424710(param_1);
                        FUN_00424300(uVar14 << 0x18 | uVar5 << 0x10 | uVar6 << 8 | uVar11,
                                     (char *)param_1[4]);
                        FUN_00424250(param_1);
                        return;
                      }
LAB_004266a9:
                      FUN_004265c0(param_1,s_Instruction_00436d44);
                      param_1[1] = 1;
                      FUN_00424250(param_1);
                      return;
                    }
                    uVar5 = *puVar13;
                    param_1[4] = (int)puVar2 + 10;
                    uVar6 = FUN_00424710(param_1);
                    FUN_00419180((void *)param_1[0x29],uVar5,uVar6);
                  }
                  else if (uVar5 < 0x72657666) {
                    if (uVar5 != 0x72657665) {
                      if (uVar5 == 0x72627573) {
                        param_1[4] = param_1[4] + -5;
                        FUN_00424250(param_1);
                        return;
                      }
                      goto LAB_004266a9;
                    }
                    piVar12 = (int *)(param_1[0x1a] + -4);
                    param_1[0x1a] = (int)piVar12;
                    iVar8 = *piVar12 + param_1[3];
                    param_1[4] = iVar8;
                    *piVar12 = iVar8 - param_1[3];
                    param_1[0x1a] = param_1[0x1a] + 4;
                  }
                  else {
                    if (uVar5 < 0x72707062) {
                      if (uVar5 == 0x72707061) {
                        FUN_0041ee90((void *)param_1[0x29]);
                        iVar8 = param_1[4];
                        param_1[4] = iVar8 + -5;
                        *(undefined4 *)(iVar8 + -5) = 0x52505041;
                      }
                      else {
                        if (uVar5 != 0x7265766f) goto LAB_004266a9;
                        iVar8 = (**(code **)(*(int *)param_1[0x29] + 0x84))(param_1[0x2a]);
                        if (iVar8 == 0) {
                          param_1[4] = param_1[4] + -5;
                        }
                      }
                      goto LAB_004281f6;
                    }
                    if (uVar5 < 0x73617065) {
                      if (uVar5 == 0x73617064) {
                        FUN_00418060(param_1[0x29]);
                      }
                      else {
                        if (uVar5 != 0x72766862) goto LAB_004266a9;
                        uVar5 = FUN_00424710(param_1);
                        uVar6 = FUN_00424710(param_1);
                        if ((*(uint *)(param_1[0x29] + 4) & 0xff000000) == 0x2000000) {
                          FUN_00416640((void *)param_1[0x29],uVar5,(char)uVar6);
                        }
                      }
                    }
                    else if (uVar5 < 0x73617074) {
                      if (uVar5 == 0x73617073) {
                        uVar5 = FUN_00424710(param_1);
                        uVar6 = FUN_00424710(param_1);
                        FUN_004016c0(uVar5,uVar6,4,0,0,0);
                      }
                      else {
                        if (uVar5 != 0x73617067) goto LAB_004266a9;
                        FUN_00417fe0((void *)param_1[0x29]);
                      }
                    }
                    else if (uVar5 < 0x73706573) {
                      if (uVar5 == 0x73706572) {
                        uVar5 = FUN_00424710(param_1);
                        *(int *)param_1[0x1a] = param_1[4] - param_1[3];
                        iVar8 = param_1[0x1a];
                        param_1[0x1a] = iVar8 + 4;
                        *(uint *)(iVar8 + 4) = uVar5;
                        param_1[0x1a] = param_1[0x1a] + 4;
                      }
                      else {
                        if (uVar5 != 0x73646c70) goto LAB_004266a9;
                        bVar4 = FUN_00414c60((int *)param_1[0x29]);
                        if (CONCAT31(extraout_var,bVar4) != 0) {
                          iVar8 = *(int *)param_1[4];
                          param_1[4] = param_1[4] + 5;
                          FUN_00409680(DAT_00436eb8,iVar8);
                        }
                      }
                    }
                    else {
                      if (uVar5 < 0x74696466) {
                        if (uVar5 == 0x74696465) {
                          DAT_004352c8 = param_1[0x29];
                          SetForegroundWindow(*(HWND *)((int)DAT_00436ea8 + 0x20));
                        }
                        else {
                          if (uVar5 != 0x74696177) goto LAB_004266a9;
                          if (param_1[0x2d] == 0) {
                            uVar5 = FUN_00424710(param_1);
                            param_1[0x2d] = uVar5;
                            param_1[4] = (int)puVar13;
                          }
                          iVar8 = param_1[4];
                          iVar9 = param_1[0x2d];
                          param_1[4] = iVar8 + -5;
                          param_1[0x2d] = iVar9 + -1;
                          if (iVar9 + -1 == 0) {
                            param_1[4] = iVar8;
                            FUN_00424710(param_1);
                          }
                        }
                        goto LAB_004281f6;
                      }
                      if (uVar5 < 0x746f7074) {
                        if (uVar5 == 0x746f7073) {
                          uVar5 = FUN_00424710(param_1);
                          uVar6 = FUN_00424710(param_1);
                          uVar14 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          local_21c = FUN_00424710(param_1);
                          iVar8 = uVar5 * 0x10 + param_1[0x29];
                          *(uint *)(iVar8 + 0xc4) = uVar6;
                          *(uint *)(iVar8 + 200) = uVar14;
                          *(uint *)(iVar8 + 0xcc) = uVar11;
                          *(uint *)(iVar8 + 0xd0) = local_21c;
                          local_228 = uVar6;
                          local_224 = uVar14;
                          local_220 = uVar11;
                        }
                        else {
                          if (uVar5 != 0x746e7665) goto LAB_004266a9;
                          uVar5 = FUN_00424710(param_1);
                          FUN_0041c130(DAT_00436ebc,uVar5);
                        }
                      }
                      else if (uVar5 < 0x74726171) {
                        if (uVar5 == 0x74726170) {
                          uVar5 = FUN_00424710(param_1);
                          param_1[0x2a] = uVar5;
                        }
                        else {
                          if (uVar5 != 0x74706d69) goto LAB_004266a9;
                          uVar5 = FUN_00424710(param_1);
                          *(char *)(param_1[0x29] + 0x834) = (char)uVar5;
                        }
                      }
                      else if (uVar5 < 0x74736e6a) {
                        if (uVar5 == 0x74736e69) {
                          param_1[2] = 1;
                          goto LAB_004281f6;
                        }
                        if (uVar5 != 0x7472636d) goto LAB_004266a9;
                        uVar5 = FUN_00424710(param_1);
                        uVar6 = FUN_00424710(param_1);
                        *(undefined4 *)(param_1[0x29] + 0x1a) = 0;
                        *(undefined1 *)(param_1[0x29] + 8) = 2;
                        FUN_00414f10((int *)param_1[0x29]);
                        (**(code **)(*(int *)param_1[0x29] + 0x54))(uVar5,uVar6);
                        *(undefined1 *)(param_1[0x29] + 8) = 0;
                        FUN_00414f10((int *)param_1[0x29]);
                      }
                      else if (uVar5 < 0x76627574) {
                        if (uVar5 == 0x76627573) {
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,uVar6 - uVar11);
                        }
                        else {
                          if (uVar5 != 0x7478656e) goto LAB_004266a9;
                          iVar8 = param_1[0x1a];
                          param_1[0x1a] = iVar8 + -4;
                          iVar9 = *(int *)(iVar8 + -4);
                          param_1[0x1a] = iVar8 + -8;
                          uVar5 = *(uint *)(iVar8 + -8);
                          param_1[0x1a] = iVar8 + -0xc;
                          piVar12 = (int *)(iVar8 + -0x10);
                          uVar6 = *(uint *)(iVar8 + -0xc);
                          param_1[0x1a] = (int)piVar12;
                          iVar8 = *piVar12 + param_1[3];
                          do {
                            iVar9 = iVar9 + 1;
                            if (DAT_00437fb8 <= iVar9) break;
                          } while ((*(uint *)(*(int *)(DAT_00437fb4 + iVar9 * 4) + 4) & uVar5) !=
                                   uVar6);
                          if (iVar9 < DAT_00437fb8) {
                            param_1[0x29] = *(int *)(DAT_00437fb4 + iVar9 * 4);
                            param_1[4] = iVar8;
                            *piVar12 = iVar8 - param_1[3];
                            iVar8 = param_1[0x1a];
                            param_1[0x1a] = iVar8 + 4;
                            *(uint *)(iVar8 + 4) = uVar6;
                            iVar8 = param_1[0x1a];
                            param_1[0x1a] = iVar8 + 4;
                            *(uint *)(iVar8 + 4) = uVar5;
                            iVar8 = param_1[0x1a];
                            param_1[0x1a] = iVar8 + 4;
                            *(int *)(iVar8 + 4) = iVar9;
                            param_1[0x1a] = param_1[0x1a] + 4;
                          }
                          else {
                            param_1[0x29] = param_1[0x25];
                          }
                        }
                      }
                      else if (uVar5 < 0x76646e62) {
                        if (uVar5 == 0x76646e61) {
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,uVar11 & uVar6);
                        }
                        else {
                          if (uVar5 != 0x76646461) goto LAB_004266a9;
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,uVar6 + uVar11);
                        }
                      }
                      else if (uVar5 < 0x76646f6e) {
                        if (uVar5 == 0x76646f6d) {
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,(int)uVar6 % (int)uVar11);
                        }
                        else if (uVar5 == 0x76646e72) {
                          uVar5 = *puVar13;
                          param_1[4] = (int)puVar2 + 10;
                          uVar6 = FUN_00424710(param_1);
                          uVar14 = FUN_00424710(param_1);
                          iVar8 = rand();
                          FUN_004251f0(param_1,uVar5,uVar6 + iVar8 % (int)((uVar14 - uVar6) + 1));
                        }
                        else {
                          if (uVar5 != 0x76646e73) goto LAB_004266a9;
                          FUN_004253e0(param_1,local_218);
                          iVar9 = 0;
                          iVar8 = 3;
                          do {
                            iVar9 = iVar9 * 0x100 + (int)(char)local_218[iVar8];
                            iVar8 = iVar8 + -1;
                          } while (-1 < iVar8);
                          FUN_00419180((void *)param_1[0x29],iVar9,0);
                        }
                      }
                      else if (uVar5 < 0x7667656f) {
                        if (uVar5 == 0x7667656e) {
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,-uVar6);
                        }
                        else {
                          if (uVar5 != 0x76656d72) goto LAB_004266a9;
                          uVar5 = FUN_00424710(param_1);
                          FUN_0041c1b0(DAT_00436ebc,uVar5,1);
                        }
                      }
                      else if (uVar5 < 0x76727270) {
                        if (uVar5 == 0x7672726f) {
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,uVar11 | uVar6);
                        }
                        else {
                          if (uVar5 != 0x766c756d) goto LAB_004266a9;
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,uVar11 * uVar6);
                        }
                      }
                      else if (uVar5 < 0x76766965) {
                        if (uVar5 == 0x76766964) {
                          uVar5 = *puVar13;
                          uVar6 = FUN_00424710(param_1);
                          uVar11 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,(int)uVar6 / (int)uVar11);
                        }
                        else {
                          if (uVar5 != 0x76746573) goto LAB_004266a9;
                          uVar5 = *puVar13;
                          param_1[4] = (int)puVar2 + 10;
                          uVar6 = FUN_00424710(param_1);
                          FUN_004251f0(param_1,uVar5,uVar6);
                        }
                      }
                      else {
                        if (uVar5 < 0x7962766e) {
                          if (uVar5 != 0x7962766d) {
                            if (uVar5 == 0x78726373) {
                              uVar14 = FUN_00424710(param_1);
                              uVar5 = FUN_00424710(param_1);
                              uVar6 = FUN_00424710(param_1);
                              uVar11 = FUN_00424710(param_1);
                              FUN_004243a0(uVar14 << 0x18 | uVar5 << 0x10 | uVar6 << 8 | uVar11);
                              return;
                            }
                            goto LAB_004266a9;
                          }
                          uVar5 = FUN_00424710(param_1);
                          piVar12 = (int *)param_1[0x29];
                          uVar6 = FUN_00424710(param_1);
                          (**(code **)(*piVar12 + 0x50))(uVar5,uVar6);
                          goto LAB_004281f6;
                        }
                        if (uVar5 == 0x7963746c) {
                          uVar5 = FUN_00424710(param_1);
                          uVar6 = FUN_00424710(param_1);
                          uVar14 = FUN_00424710(param_1);
                          iVar8 = rand();
                          *(char *)(param_1[0x29] + 0x2ae6 + uVar5 * 2) =
                               (char)uVar6 + (char)(iVar8 % (int)((uVar14 - uVar6) + 1));
                        }
                        else {
                          if (uVar5 != 0x7a656e73) goto LAB_004266a9;
                          piVar12 = (int *)param_1[0x29];
                          if ((piVar12[1] & 0xff000000U) == 0x4000000) {
                            FUN_00401580((void *)((int)piVar12 + 0x2b79),piVar12);
                          }
                        }
                      }
                    }
                  }
                  goto LAB_004281f1;
                }
                if (uVar5 == 0x6c6f6f74) {
                  FUN_004253e0(param_1,local_218);
                  FUN_004253e0(param_1,local_1f8);
                  FUN_004253e0(param_1,local_1d8);
                  uVar5 = FUN_00424710(param_1);
                  FUN_0041c930(local_218,local_1f8,local_1d8,(char)uVar5);
                  FUN_004118a0(DAT_00436ea8,abStack_208,1);
                }
                else {
                  if (uVar5 != 0x6c6c696b) goto LAB_004266a9;
                  piVar10 = (int *)FUN_00424710(param_1);
                  piVar12 = (int *)param_1[0x25];
                  if (piVar10 != (int *)0x0) {
                    FUN_004190b0(piVar10);
                  }
                  if (piVar12 == piVar10) {
                    return;
                  }
                }
              }
              goto LAB_004281f6;
            }
            if (uVar5 == 0x6b636974) {
              uVar5 = FUN_00424710(param_1);
              *(uint *)(param_1[0x29] + 0x43) = uVar5;
              *(undefined4 *)(param_1[0x29] + 0x3f) = *(undefined4 *)(param_1[0x29] + 0x43);
            }
            else {
              if (uVar5 != 0x6b2a2a66) goto LAB_004266a9;
              if ((*(uint *)(param_1[0x29] + 4) & 0xff000000) == 0x4000000) {
                FUN_00422630(param_1[0x29]);
              }
            }
          }
          goto LAB_004281f1;
        }
        if (uVar5 == 0x52505041) {
          uVar5 = *(int *)(param_1[0x29] + 0x72) - *(int *)(param_1[0x29] + 0x7ea);
          uVar6 = (int)uVar5 >> 0x1f;
          if ((int)((uVar5 ^ uVar6) - uVar6) < 0x37) {
            *puVar2 = 0x72707061;
            iVar8 = param_1[0x29];
            puVar1 = (undefined1 *)(iVar8 + 0x9e);
            *puVar1 = 0;
            *(undefined1 **)(iVar8 + 0xbe) = puVar1;
          }
          else {
            param_1[4] = (int)puVar2;
          }
        }
        else {
          if (uVar5 != 0x3a77656e) goto LAB_004266a9;
          FUN_00425fb0(param_1);
        }
      }
    }
LAB_004281f6:
    if (param_1[2] == 0 && !bVar3) {
      return;
    }
  } while( true );
}

