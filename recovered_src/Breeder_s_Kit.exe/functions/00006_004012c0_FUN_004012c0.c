/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004012c0
 * Entry: 004012c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004012c0(void * this, char * param_1)
 */


undefined4 __thiscall FUN_004012c0(void *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar2 = (byte *)strchr(param_1,0x2e);
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  pbVar6 = &DAT_00412088;
  pbVar5 = pbVar2;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00401308:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_0040130d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00401308;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0040130d:
  if (iVar4 == 0) {
    uVar3 = FUN_00401370(this,param_1);
    return uVar3;
  }
  pbVar5 = &DAT_00412080;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00401344:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00401349;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00401344;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00401349:
  if (iVar4 == 0) {
    uVar3 = FUN_00401570(this,param_1);
    return uVar3;
  }
  return 0;
}

