/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00409220
 * Entry: 00409220
 * Namespace: Global
 * Prototype: int FUN_00409220(char * param_1, int * param_2)
 */


int __cdecl FUN_00409220(char *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = param_1;
  while( true ) {
    cVar1 = *pcVar4;
    if ((cVar1 < '0') || (bVar2 = true, '9' < cVar1)) {
      bVar2 = false;
    }
    if (!bVar2) break;
    pcVar4 = pcVar4 + 1;
    iVar3 = cVar1 + -0x30 + iVar3 * 10;
  }
  *param_2 = (int)pcVar4 - (int)param_1;
  return iVar3;
}

