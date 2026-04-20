/*
 * Program: Science_Kit.exe
 * Function: FUN_004081c0
 * Entry: 004081c0
 * Namespace: Global
 * Prototype: bool FUN_004081c0(void * this, undefined4 param_1, char * param_2)
 */


bool __thiscall FUN_004081c0(void *this,undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined2 local_10 [4];
  undefined4 local_8;
  
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = *(char **)((int)this + 0x1fc);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  local_10[0] = 3;
  local_18 = *(undefined4 *)((int)this + 0x1fc);
  local_8 = param_1;
  local_20[0] = 8;
  iVar2 = FUN_00402d90((void *)((int)this + 0x8c),local_10,local_20);
  return (bool)('\x01' - (iVar2 == 0));
}

