/*
 * Program: Creatures.exe
 * Function: FUN_0040d1b0
 * Entry: 0040d1b0
 * Namespace: Global
 * Prototype: undefined FUN_0040d1b0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)
 */


void __cdecl
FUN_0040d1b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)(param_1 + param_3 * param_4 + param_2);
  pcVar4 = (char *)(param_5 + param_8 * param_7 + param_6);
  iVar2 = param_9;
  do {
    do {
      pcVar1 = pcVar3 + 1;
      if (*pcVar3 != '\0') {
        *pcVar4 = *pcVar3;
      }
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + -1;
      pcVar3 = pcVar1;
    } while (iVar2 != 0);
    pcVar3 = pcVar1 + (param_4 - param_9);
    pcVar4 = pcVar4 + (param_8 - param_9);
    param_10 = param_10 + -1;
    iVar2 = param_9;
  } while (param_10 != 0);
  return;
}

