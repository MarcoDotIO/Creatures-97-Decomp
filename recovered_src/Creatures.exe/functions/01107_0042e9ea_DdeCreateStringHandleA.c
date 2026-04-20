/*
 * Program: Creatures.exe
 * Function: DdeCreateStringHandleA
 * Entry: 0042e9ea
 * Namespace: USER32.DLL
 * Prototype: HSZ DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 */


HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042e9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}

