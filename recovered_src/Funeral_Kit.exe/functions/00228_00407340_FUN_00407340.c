/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407340
 * Entry: 00407340
 * Namespace: Global
 * Prototype: undefined * FUN_00407340(void)
 */


undefined * FUN_00407340(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &stack0x00000004;
  iVar2 = 0;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    s_Sounds______wav_00410468[iVar2 + 7] = cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return s_Sounds______wav_00410468;
}

