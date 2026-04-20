/*
 * Program: Creatures.exe
 * Function: FUN_00404090
 * Entry: 00404090
 * Namespace: Global
 * Prototype: undefined FUN_00404090(void * this, int param_1, byte param_2, byte param_3, byte param_4)
 */


void __thiscall FUN_00404090(void *this,int param_1,byte param_2,byte param_3,byte param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  uint local_300 [3];
  uint local_2f4 [61];
  byte local_200 [256];
  byte local_100 [256];
  
  local_300[0] = (uint)param_2;
  puVar4 = local_300;
  local_300[1] = (uint)param_3;
  local_300[2] = (uint)param_4;
  piVar5 = &local_324;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar7 = (uVar1 - 0x80) * 0x20;
    iVar3 = (uVar1 * 4 + -0x200) * 5;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x7fU)) >> 7;
    *piVar5 = iVar3 + 0x40;
    piVar5[1] = ((int)(iVar7 + (iVar7 >> 0x1f & 0x7fU)) >> 7) + 0x80;
    piVar5[2] = iVar3 + 0xc0;
    piVar5 = piVar5 + 3;
  } while (puVar4 < local_2f4);
  FUN_00403fb0((int)local_300,0,local_324,local_320,local_31c,0xff);
  FUN_00403fb0((int)local_200,0,local_318,local_314,local_310,0xff);
  FUN_00403fb0((int)local_100,0,local_30c,local_308,local_304,0xff);
  iVar3 = 0;
  do {
    *(char *)(param_1 + iVar3) = (char)iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  iVar3 = 0xf6;
  do {
    *(char *)(param_1 + iVar3) = (char)iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  iVar3 = 0;
  pbVar6 = this;
  do {
    iVar3 = iVar3 + 1;
    cVar2 = FUN_00403f40(this,(uint)*(byte *)((int)local_300 + (uint)*pbVar6),
                         (uint)local_200[pbVar6[1]],(uint)local_100[pbVar6[2]]);
    *(char *)(param_1 + 9 + iVar3) = cVar2 + '\n';
    pbVar6 = pbVar6 + 3;
  } while (iVar3 < 0xec);
  DAT_00435234 = DAT_00435234 + 1;
  return;
}

