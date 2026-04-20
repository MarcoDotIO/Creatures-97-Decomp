/*
 * Program: Creatures.exe
 * Function: FUN_0041ee90
 * Entry: 0041ee90
 * Namespace: Global
 * Prototype: undefined FUN_0041ee90(void * param_1)
 */


void __fastcall FUN_0041ee90(void *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  
  bVar3 = 0;
  iVar2 = 0;
  pcVar4 = (char *)((int)param_1 + 0x768);
  iVar5 = 0;
  do {
    if ((*pcVar4 != '\0') && (bVar1 = *(byte *)((int)param_1 + iVar5 + 0x2afe), bVar3 < bVar1)) {
      iVar2 = iVar5;
      bVar3 = bVar1;
    }
    pcVar4 = pcVar4 + 0x12;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  FUN_0040efb0(param_1,(char *)((int)param_1 + iVar2 * 0x12 + 0x756));
  return;
}

