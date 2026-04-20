/*
 * Program: Creatures.exe
 * Function: DdeCreateDataHandle
 * Entry: 0042e9fc
 * Namespace: USER32.DLL
 * Prototype: HDDEDATA DdeCreateDataHandle(DWORD idInst, LPBYTE pSrc, DWORD cb, DWORD cbOff, HSZ hszItem, UINT wFmt, UINT afCmd)
 */


HDDEDATA DdeCreateDataHandle(DWORD idInst,LPBYTE pSrc,DWORD cb,DWORD cbOff,HSZ hszItem,UINT wFmt,
                            UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042e9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateDataHandle(idInst,pSrc,cb,cbOff,hszItem,wFmt,afCmd);
  return pHVar1;
}

