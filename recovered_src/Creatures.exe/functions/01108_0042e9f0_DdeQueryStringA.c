/*
 * Program: Creatures.exe
 * Function: DdeQueryStringA
 * Entry: 0042e9f0
 * Namespace: USER32.DLL
 * Prototype: DWORD DdeQueryStringA(DWORD idInst, HSZ hsz, LPSTR psz, DWORD cchMax, int iCodePage)
 */


DWORD DdeQueryStringA(DWORD idInst,HSZ hsz,LPSTR psz,DWORD cchMax,int iCodePage)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeQueryStringA(idInst,hsz,psz,cchMax,iCodePage);
  return DVar1;
}

