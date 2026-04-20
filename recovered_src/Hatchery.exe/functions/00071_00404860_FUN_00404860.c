/*
 * Program: Hatchery.exe
 * Function: FUN_00404860
 * Entry: 00404860
 * Namespace: Global
 * Prototype: undefined * FUN_00404860(void)
 */


undefined * FUN_00404860(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &stack0x00000004;
  iVar2 = 0;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    s_Sounds______wav_0040a4a8[iVar2 + 7] = cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return s_Sounds______wav_0040a4a8;
}

