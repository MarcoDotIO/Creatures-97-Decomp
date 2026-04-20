/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407360
 * Entry: 00407360
 * Namespace: Global
 * Prototype: undefined4 * FUN_00407360(void * this, undefined4 param_1)
 */


undefined4 * __thiscall FUN_00407360(void *this,undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char local_c0 [76];
  undefined4 *local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [5];
  undefined4 local_1c;
  undefined1 local_18;
  int *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004077fa;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0x294) != 0) {
    Ordinal_340();
    uVar13 = 0;
    uVar12 = 0x30;
    local_8 = 0;
    puVar3 = FUN_00407340();
    iVar4 = Ordinal_4619(puVar3,uVar12,uVar13);
    if (iVar4 == 0) {
      local_8 = 0xffffffff;
      FUN_00407804();
    }
    else {
      local_1c = DAT_00410510;
      local_18 = DAT_00410514;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      Ordinal_4819(&local_1c,4);
      pbVar5 = (byte *)&local_1c;
      pbVar8 = &DAT_00410508;
      do {
        bVar2 = *pbVar5;
        bVar11 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_00407436:
          iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0040743b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar11 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_00407436;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_0040743b:
      if (iVar4 == 0) {
        Ordinal_4819(local_70,4);
        Ordinal_4819(&local_1c,4);
        pbVar5 = (byte *)&local_1c;
        pbVar8 = &DAT_00410500;
        do {
          bVar2 = *pbVar5;
          bVar11 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_00407494:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00407499;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar11 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_00407494;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00407499:
        if (iVar4 == 0) {
          Ordinal_4819(&local_1c,4);
          pbVar5 = (byte *)&local_1c;
          pbVar8 = &DAT_004104f8;
          do {
            bVar2 = *pbVar5;
            bVar11 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_004074e4:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_004074e9;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar11 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_004074e4;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_004074e9:
          if (iVar4 == 0) {
            Ordinal_4819(&local_48,4);
            Ordinal_4819(&local_58,2);
            Ordinal_4819((int)&local_58 + 2,2);
            Ordinal_4819(&local_54,4);
            Ordinal_4819(&local_50,4);
            Ordinal_4819(&local_4c,2);
            Ordinal_4819((int)&local_4c + 2,2);
            if (0x10 < local_48) {
              Ordinal_5110(local_48 - 0x10,1);
            }
            Ordinal_4819(&local_1c,4);
            pbVar5 = (byte *)&local_1c;
            pbVar8 = &DAT_004104f0;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar8;
              if (bVar2 != *pbVar8) {
LAB_004075ad:
                iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_004075b2;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar8[1];
              if (bVar2 != pbVar8[1]) goto LAB_004075ad;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_004075b2:
            if (iVar4 == 0) {
              Ordinal_5110(8,1);
              Ordinal_4819(&local_1c,4);
            }
            pbVar5 = (byte *)&local_1c;
            pbVar8 = &DAT_004104e8;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar8;
              if (bVar2 != *pbVar8) {
LAB_004075f8:
                iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_004075fd;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar8[1];
              if (bVar2 != pbVar8[1]) goto LAB_004075f8;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_004075fd:
            if (iVar4 == 0) {
              Ordinal_4819(local_30,4);
              local_60 = 0;
              local_5c = &local_58;
              local_64 = local_30[0];
              local_6c = 0x14;
              local_68 = 0xe2;
              iVar4 = (**(code **)(**(int **)((int)this + 4) + 0xc))
                                (*(int **)((int)this + 4),&local_6c,&local_14,0);
              if (iVar4 == 0) {
                iVar4 = (**(code **)(*local_14 + 0x2c))
                                  (local_14,0,local_30[0],&local_3c,&local_40,&local_34,&local_44,0)
                ;
                if (iVar4 == -0x7787ff6a) {
                  (**(code **)(*local_14 + 0x50))(local_14);
                  iVar4 = (**(code **)(*local_14 + 0x2c))
                                    (local_14,0,local_30[0],&local_3c,&local_40,&local_34,&local_44,
                                     0);
                }
                if (iVar4 == 0) {
                  Ordinal_4819(local_3c,local_40);
                  if (local_34 != 0) {
                    Ordinal_4819(local_34,local_44);
                  }
                  (**(code **)(*local_14 + 0x4c))(local_14,local_3c,local_40,local_34,local_44);
                  local_38 = (undefined4 *)Ordinal_729(0x18);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  if (local_38 == (undefined4 *)0x0) {
                    local_74 = (undefined4 *)0x0;
                  }
                  else {
                    local_74 = FUN_00406f80(local_38);
                  }
                  local_74[1] = param_1;
                  local_74[2] = *(undefined4 *)((int)this + 0x2b8);
                  *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + 1;
                  local_8 = 0xffffffff;
                  local_74[3] = local_30[0];
                  local_74[4] = 0;
                  local_74[5] = local_14;
                  FUN_00407804();
                  goto LAB_0040738e;
                }
                local_8 = 0xffffffff;
                FUN_00407804();
              }
              else {
                if (iVar4 < -0x7ff8fff1) {
                  if (iVar4 == -0x7ff8fff2) {
                    pcVar9 = s_Not_enough_memory_00410478;
                    goto LAB_004077c6;
                  }
                  if (iVar4 == -0x7ffbfef0) {
                    pcVar9 = s_NO_aggregation__0041048c;
                    goto LAB_004077c6;
                  }
                }
                else {
                  if (iVar4 == -0x7ff8ffa9) {
                    pcVar9 = s_Invalid_parameter_0041049c;
                  }
                  else if (iVar4 == -0x7787fff6) {
                    pcVar9 = s_Resources_already_in_use__004104cc;
                  }
                  else {
                    if (iVar4 != -0x7787ff9c) goto LAB_004077e9;
                    pcVar9 = s_Wave_format_not_supported_004104b0;
                  }
LAB_004077c6:
                  uVar6 = 0xffffffff;
                  do {
                    pcVar10 = pcVar9;
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    pcVar10 = pcVar9 + 1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar10;
                  } while (cVar1 != '\0');
                  uVar6 = ~uVar6;
                  pcVar9 = pcVar10 + -uVar6;
                  pcVar10 = local_c0;
                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
                    pcVar9 = pcVar9 + 4;
                    pcVar10 = pcVar10 + 4;
                  }
                  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *pcVar10 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                    pcVar10 = pcVar10 + 1;
                  }
                }
LAB_004077e9:
                local_8 = 0xffffffff;
                FUN_00407804();
              }
            }
            else {
              local_8 = 0xffffffff;
              FUN_00407804();
            }
          }
          else {
            local_8 = 0xffffffff;
            FUN_00407804();
          }
        }
        else {
          local_8 = 0xffffffff;
          FUN_00407804();
        }
      }
      else {
        local_8 = 0xffffffff;
        FUN_00407804();
      }
    }
  }
  local_74 = (undefined4 *)0x0;
LAB_0040738e:
  *unaff_FS_OFFSET = local_10;
  return local_74;
}

