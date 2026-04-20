/*
 * Program: Creatures.exe
 * Function: FUN_0040ef20
 * Entry: 0040ef20
 * Namespace: Global
 * Prototype: undefined FUN_0040ef20(int * param_1)
 */


void __fastcall FUN_0040ef20(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_0040ebd0(param_1);
  if (**(char **)((int)param_1 + 0xbe) != '\0') {
    iVar2 = FUN_0040eef0((int)param_1);
    if (iVar2 != 0) {
      pcVar3 = (char *)(*(int *)((int)param_1 + 0xbe) + 2);
      *(char **)((int)param_1 + 0xbe) = pcVar3;
      if (*pcVar3 == 'R') {
        *(int *)((int)param_1 + 0xbe) = (int)param_1 + 0x9e;
      }
      cVar1 = **(char **)((int)param_1 + 0xbe);
      if (cVar1 != '\0') {
        uVar4 = 0xffffffff;
        pcVar3 = (char *)(((int)(*(char **)((int)param_1 + 0xbe))[1] + cVar1 * 10) * 0x10 + -0x1fea
                         + (int)param_1);
        do {
          pcVar6 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar3 = pcVar6 + -uVar4;
        pcVar6 = (char *)((int)param_1 + 0x8e);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar6 = pcVar6 + 1;
        }
      }
    }
  }
  return;
}

