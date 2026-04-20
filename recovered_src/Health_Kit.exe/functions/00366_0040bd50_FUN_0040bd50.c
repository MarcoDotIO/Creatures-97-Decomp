/*
 * Program: Health_Kit.exe
 * Function: FUN_0040bd50
 * Entry: 0040bd50
 * Namespace: Global
 * Prototype: undefined * FUN_0040bd50(void)
 */


undefined * FUN_0040bd50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &stack0x00000004;
  iVar2 = 0;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    s_Sounds______wav_00411638[iVar2 + 7] = cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return s_Sounds______wav_00411638;
}

