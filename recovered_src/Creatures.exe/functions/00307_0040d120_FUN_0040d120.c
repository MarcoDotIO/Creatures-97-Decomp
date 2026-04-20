/*
 * Program: Creatures.exe
 * Function: FUN_0040d120
 * Entry: 0040d120
 * Namespace: Global
 * Prototype: short FUN_0040d120(char * param_1)
 */


short __cdecl FUN_0040d120(char *param_1)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  
  sVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    cVar2 = *param_1;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar3 = sVar3 + *(short *)(&DAT_00438a20 + cVar2 * 2) + 1;
    cVar2 = *pcVar1;
  }
  return sVar3;
}

