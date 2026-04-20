/*
 * Program: Creatures.exe
 * Function: FUN_00424300
 * Entry: 00424300
 * Namespace: Global
 * Prototype: undefined FUN_00424300(int param_1, char * param_2)
 */


void __cdecl FUN_00424300(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  iVar7 = 0;
  if (0 < DAT_00436c24) {
    piVar2 = &DAT_0043912c;
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_00436c24);
  }
  if (iVar7 < DAT_00436c24) {
    Ordinal_731((&DAT_00439128)[iVar7 * 2]);
  }
  else {
    DAT_00436c24 = DAT_00436c24 + 1;
  }
  uVar4 = 0xffffffff;
  (&DAT_0043912c)[iVar7 * 2] = param_1;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = Ordinal_729(~uVar4);
  uVar4 = 0xffffffff;
  (&DAT_00439128)[iVar7 * 2] = uVar3;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar8 = (char *)(&DAT_00439128)[iVar7 * 2];
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return;
}

