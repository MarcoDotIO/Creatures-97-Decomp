/*
 * Program: Creatures.exe
 * Function: FUN_00403fb0
 * Entry: 00403fb0
 * Namespace: Global
 * Prototype: undefined FUN_00403fb0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 */


void FUN_00403fb0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;
  
  iVar2 = 0;
  iVar1 = 0;
  local_14 = 0;
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    *(char *)(iVar3 + param_1) = (char)param_2 + (char)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6)
    ;
    *(char *)(iVar3 + 0x40 + param_1) =
         (char)param_3 + (char)((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6);
    *(char *)(iVar3 + 0x80 + param_1) =
         (char)param_4 + (char)((int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6);
    *(char *)(iVar3 + 0xc0 + param_1) =
         (char)param_5 + (char)((int)(local_14 + (local_14 >> 0x1f & 0x3fU)) >> 6);
    local_14 = local_14 + (param_6 - param_5);
    iVar2 = iVar2 + (param_5 - param_4);
    iVar1 = iVar1 + (param_4 - param_3);
    iVar5 = iVar5 + (param_3 - param_2);
    iVar3 = iVar4;
  } while (iVar4 < 0x40);
  return;
}

