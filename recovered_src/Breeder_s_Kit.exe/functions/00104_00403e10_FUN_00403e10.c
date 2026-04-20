/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403e10
 * Entry: 00403e10
 * Namespace: Global
 * Prototype: undefined4 FUN_00403e10(void * this, char * param_1)
 */


undefined4 __thiscall FUN_00403e10(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined2 local_10 [4];
  int local_8;
  
  iVar2 = FUN_00403c90(this,0,0);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = *(char **)((int)this + 0x1fc);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_10[0] = 3;
  local_18 = *(undefined4 *)((int)this + 0x1fc);
  local_20[0] = 8;
  local_8 = iVar2;
  iVar3 = FUN_00409b60((void *)((int)this + 0x8c),local_10,local_20);
  if (iVar3 == 0) {
    FUN_00403d10(this,iVar2);
    return 0;
  }
  if (*(int *)((int)this + 0x230) == 0) {
    FUN_00403d10(this,iVar2);
  }
  return 1;
}

