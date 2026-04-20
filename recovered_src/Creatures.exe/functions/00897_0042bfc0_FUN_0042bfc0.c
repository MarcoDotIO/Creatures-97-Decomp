/*
 * Program: Creatures.exe
 * Function: FUN_0042bfc0
 * Entry: 0042bfc0
 * Namespace: Global
 * Prototype: char * FUN_0042bfc0(void * this, char * param_1, undefined4 param_2, int param_3)
 */


char * __thiscall FUN_0042bfc0(void *this,char *param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = 0;
  pcVar7 = param_1;
  if (0 < *(int *)((int)this + 0xc28)) {
    local_10 = (int)this + 8;
    do {
      local_8 = 0;
      if (0 < *(int *)(local_10 + 0x9f)) {
        local_c = 0;
        do {
          pcVar8 = (char *)(*(int *)(local_10 + 0x97) + local_c);
          switch(param_2) {
          case 0:
            if (pcVar8[2] != '\0') {
              *pcVar7 = (char)*(undefined4 *)(local_10 + 4) + *pcVar8 + '0';
              pcVar7[1] = (char)*(undefined4 *)(local_10 + 8) + pcVar8[1] + '0';
              bVar2 = (byte)pcVar8[2] >> 4;
LAB_0042c198:
              pcVar7[2] = bVar2 + 0x30;
LAB_0042c19c:
              pcVar7 = pcVar7 + 3;
            }
            break;
          case 1:
            if (pcVar8[3] != '\0') {
              *pcVar7 = (char)*(undefined4 *)(local_10 + 4) + *pcVar8 + '0';
              pcVar7[1] = (char)*(undefined4 *)(local_10 + 8) + pcVar8[1] + '0';
              bVar2 = (byte)pcVar8[3] >> 4;
              goto LAB_0042c198;
            }
            break;
          case 2:
            if (pcVar8[param_3 + 0xc] != 0) {
              iVar6 = *(int *)(pcVar8 + param_3 * 4 + 4);
              uVar5 = 0;
              uVar3 = (uint)(byte)pcVar8[param_3 + 0xc];
              do {
                if (uVar5 < *(byte *)(iVar6 + 6)) {
                  uVar5 = (uint)*(byte *)(iVar6 + 6);
                }
                iVar6 = iVar6 + 10;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
              if (uVar5 != 0) {
                *pcVar7 = (char)*(undefined4 *)(local_10 + 4) + *pcVar8 + '0';
                pcVar7[1] = (char)*(undefined4 *)(local_10 + 8) + pcVar8[1] + '0';
                pcVar7[2] = (char)((int)uVar5 >> 4) + '0';
                goto LAB_0042c19c;
              }
            }
            break;
          case 3:
            bVar2 = pcVar8[param_3 + 0xc];
            if (bVar2 != 0) {
              uVar5 = (uint)bVar2;
              iVar6 = *(int *)(pcVar8 + param_3 * 4 + 4);
              iVar4 = 0;
              do {
                pbVar1 = (byte *)(iVar6 + 7);
                iVar6 = iVar6 + 10;
                iVar4 = iVar4 + (uint)*pbVar1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
              iVar4 = iVar4 / (int)(uint)bVar2;
joined_r0x0042c16f:
              if (iVar4 != 0) {
                bVar2 = (byte)(iVar4 >> 4);
                *pcVar7 = (char)*(undefined4 *)(local_10 + 4) + *pcVar8 + '0';
                pcVar7[1] = (char)*(undefined4 *)(local_10 + 8) + pcVar8[1] + '0';
                goto LAB_0042c198;
              }
            }
            break;
          case 4:
            bVar2 = pcVar8[param_3 + 0xc];
            if (bVar2 != 0) {
              uVar5 = (uint)bVar2;
              iVar6 = *(int *)(pcVar8 + param_3 * 4 + 4);
              iVar4 = 0;
              do {
                pbVar1 = (byte *)(iVar6 + 9);
                iVar6 = iVar6 + 10;
                iVar4 = iVar4 + (uint)*pbVar1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
              iVar4 = iVar4 / (int)(uint)bVar2;
              goto joined_r0x0042c16f;
            }
          }
          local_c = local_c + 0x10;
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(local_10 + 0x9f));
      }
      local_10 = local_10 + 0xc2;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)((int)this + 0xc28));
  }
  *pcVar7 = '\0';
  return pcVar7 + (1 - (int)param_1);
}

