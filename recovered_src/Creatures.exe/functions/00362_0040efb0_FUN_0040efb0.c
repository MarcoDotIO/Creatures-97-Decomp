/*
 * Program: Creatures.exe
 * Function: FUN_0040efb0
 * Entry: 0040efb0
 * Namespace: Global
 * Prototype: undefined FUN_0040efb0(void * this, char * param_1)
 */


void __thiscall FUN_0040efb0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar2 = 0xffffffff;
  pcVar5 = (char *)((int)this + 0x9e);
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar6 = pcVar5;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(char **)((int)this + 0xbe) = pcVar5;
  uVar2 = 0xffffffff;
  pcVar5 = (char *)(((int)*(char *)((int)this + 0x9f) + *pcVar5 * 10) * 0x10 + -0x1fea + (int)this);
  do {
    pcVar4 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar4 + -uVar2;
  pcVar4 = (char *)((int)this + 0x8e);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return;
}

