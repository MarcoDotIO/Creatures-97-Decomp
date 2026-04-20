/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040a000
 * Entry: 0040a000
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040a000(void * this, undefined4 param_1)
 */


undefined4 * __thiscall FUN_0040a000(void *this,undefined4 param_1)

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
  puStack_c = &LAB_0040a49a;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0x294) != 0) {
    Ordinal_340();
    uVar13 = 0;
    uVar12 = 0x30;
    local_8 = 0;
    puVar3 = FUN_00409fe0();
    iVar4 = Ordinal_4619(puVar3,uVar12,uVar13);
    if (iVar4 == 0) {
      local_8 = 0xffffffff;
      FUN_0040a4a4();
    }
    else {
      local_1c = DAT_00412638;
      local_18 = DAT_0041263c;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      Ordinal_4819(&local_1c,4);
      pbVar5 = (byte *)&local_1c;
      pbVar8 = &DAT_00412630;
      do {
        bVar2 = *pbVar5;
        bVar11 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_0040a0d6:
          iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0040a0db;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar11 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_0040a0d6;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_0040a0db:
      if (iVar4 == 0) {
        Ordinal_4819(local_70,4);
        Ordinal_4819(&local_1c,4);
        pbVar5 = (byte *)&local_1c;
        pbVar8 = &DAT_00412628;
        do {
          bVar2 = *pbVar5;
          bVar11 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_0040a134:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0040a139;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar11 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_0040a134;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0040a139:
        if (iVar4 == 0) {
          Ordinal_4819(&local_1c,4);
          pbVar5 = (byte *)&local_1c;
          pbVar8 = &DAT_00412620;
          do {
            bVar2 = *pbVar5;
            bVar11 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_0040a184:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_0040a189;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar11 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_0040a184;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_0040a189:
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
            pbVar8 = &DAT_00412618;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar8;
              if (bVar2 != *pbVar8) {
LAB_0040a24d:
                iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_0040a252;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar8[1];
              if (bVar2 != pbVar8[1]) goto LAB_0040a24d;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_0040a252:
            if (iVar4 == 0) {
              Ordinal_5110(8,1);
              Ordinal_4819(&local_1c,4);
            }
            pbVar5 = (byte *)&local_1c;
            pbVar8 = &DAT_00412610;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar8;
              if (bVar2 != *pbVar8) {
LAB_0040a298:
                iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_0040a29d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar8[1];
              if (bVar2 != pbVar8[1]) goto LAB_0040a298;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_0040a29d:
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
                    local_74 = FUN_00409c20(local_38);
                  }
                  local_74[1] = param_1;
                  local_74[2] = *(undefined4 *)((int)this + 0x2b8);
                  *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + 1;
                  local_8 = 0xffffffff;
                  local_74[3] = local_30[0];
                  local_74[4] = 0;
                  local_74[5] = local_14;
                  FUN_0040a4a4();
                  goto LAB_0040a02e;
                }
                local_8 = 0xffffffff;
                FUN_0040a4a4();
              }
              else {
                if (iVar4 < -0x7ff8fff1) {
                  if (iVar4 == -0x7ff8fff2) {
                    pcVar9 = s_Not_enough_memory_004125a0;
                    goto LAB_0040a466;
                  }
                  if (iVar4 == -0x7ffbfef0) {
                    pcVar9 = s_NO_aggregation__004125b4;
                    goto LAB_0040a466;
                  }
                }
                else {
                  if (iVar4 == -0x7ff8ffa9) {
                    pcVar9 = s_Invalid_parameter_004125c4;
                  }
                  else if (iVar4 == -0x7787fff6) {
                    pcVar9 = s_Resources_already_in_use__004125f4;
                  }
                  else {
                    if (iVar4 != -0x7787ff9c) goto LAB_0040a489;
                    pcVar9 = s_Wave_format_not_supported_004125d8;
                  }
LAB_0040a466:
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
LAB_0040a489:
                local_8 = 0xffffffff;
                FUN_0040a4a4();
              }
            }
            else {
              local_8 = 0xffffffff;
              FUN_0040a4a4();
            }
          }
          else {
            local_8 = 0xffffffff;
            FUN_0040a4a4();
          }
        }
        else {
          local_8 = 0xffffffff;
          FUN_0040a4a4();
        }
      }
      else {
        local_8 = 0xffffffff;
        FUN_0040a4a4();
      }
    }
  }
  local_74 = (undefined4 *)0x0;
LAB_0040a02e:
  *unaff_FS_OFFSET = local_10;
  return local_74;
}

