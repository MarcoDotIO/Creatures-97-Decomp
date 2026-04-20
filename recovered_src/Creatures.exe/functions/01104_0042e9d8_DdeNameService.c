/*
 * Program: Creatures.exe
 * Function: DdeNameService
 * Entry: 0042e9d8
 * Namespace: USER32.DLL
 * Prototype: HDDEDATA DdeNameService(DWORD idInst, HSZ hsz1, HSZ hsz2, UINT afCmd)
 */


HDDEDATA DdeNameService(DWORD idInst,HSZ hsz1,HSZ hsz2,UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeNameService(idInst,hsz1,hsz2,afCmd);
  return pHVar1;
}

