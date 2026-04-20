/*
 * Program: Hatchery.exe
 * Function: FUN_00406ee0
 * Entry: 00406ee0
 * Namespace: Global
 * Prototype: undefined4 FUN_00406ee0(void * this, char * param_1)
 */


undefined4 __thiscall FUN_00406ee0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 auStack_18 [4];
  undefined4 uStack_10;
  
  if (*(int *)((int)this + 0x5c) == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = Ordinal_150(param_1,~uVar4 - 1);
  if (iVar2 == 0) {
    return 0;
  }
  uStack_10 = *(undefined4 *)((int)this + 0x5c);
  auStack_18[0] = 3;
  iVar3 = FUN_00403e20((void *)((int)this + 0x54),auStack_18,&stack0xffffffd8);
  if (iVar3 == 0) {
    Ordinal_6(iVar2);
    return 0;
  }
  Ordinal_6(iVar2);
  return 1;
}

