/*
 * Program: Creatures.exe
 * Function: FUN_00422320
 * Entry: 00422320
 * Namespace: Global
 * Prototype: undefined FUN_00422320(int * param_1)
 */


void __fastcall FUN_00422320(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  local_8 = 0;
  if ((*(int *)((int)param_1 + 0x2b6a) == 0) && (0x7f < *(byte *)((int)param_1 + 0x835))) {
    iVar6 = 0;
    pbVar8 = (byte *)((int)param_1 + 0x2ae5);
    local_c = -1;
    bVar3 = 0;
    do {
      if (pbVar8[1] == 0) {
        if (*pbVar8 != 0) {
          uVar4 = rand();
          uVar5 = (int)uVar4 >> 0x1f;
          bVar1 = *pbVar8;
          if (((int)(((uVar4 ^ uVar5) - uVar5 & 0xff ^ uVar5) - uVar5) < (int)(uint)bVar1) &&
             (bVar3 < bVar1)) {
            local_c = iVar6;
            bVar3 = bVar1;
          }
        }
      }
      else {
        pbVar8[1] = pbVar8[1] - 1;
      }
      pbVar8 = pbVar8 + 2;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    if (((bVar3 != 0) && (*(char *)((int)param_1 + 0x115) == '\0')) &&
       (*(char *)((int)param_1 + 0x835) != local_c)) {
      *(char *)((int)param_1 + 0x835) = (char)local_c;
      *(undefined1 *)(param_1 + 0x20d) = 0;
      *(undefined1 *)((int)param_1 + 0x833) = 0;
      iVar6 = FUN_00423d00((int)param_1,(int)param_1,param_1[1] + local_c + 0x40,0);
      if (iVar6 != 0) {
        return;
      }
    }
    iVar6 = 0;
    do {
      cVar2 = (&DAT_00436870)[iVar6];
      if (cVar2 == '\x01') {
LAB_00422424:
        bVar3 = *(byte *)(*(int *)(param_1[0xab2] + 0x52b) + 2 + iVar6 * 0x10);
        if (bVar7 < bVar3) {
          local_8 = iVar6;
          bVar7 = bVar3;
        }
      }
      else if (*(int *)((int)param_1 + 0x7e6) == 0) {
LAB_0042241f:
        if (cVar2 == '\x02') goto LAB_00422424;
      }
      else {
        if (cVar2 == '\x03') goto LAB_00422424;
        if (*(int *)((int)param_1 + 0x7e6) == 0) goto LAB_0042241f;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    if (*(char *)((int)param_1 + 0x833) != local_8) {
      FUN_0042beb0((void *)param_1[0xab2],6,(int)*(char *)((int)param_1 + 0x833),0);
      FUN_00422ed0(param_1,0);
      *(undefined1 *)((int)param_1 + 0x835) = 0xff;
      FUN_004218c0(param_1,local_8);
      iVar6 = rand();
      if (iVar6 % 6 == 0) {
        FUN_00421250(param_1);
      }
      FUN_0042be10((void *)param_1[0xab2],6,local_8,10);
    }
  }
  return;
}

