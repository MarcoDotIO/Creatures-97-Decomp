/*
 * Program: Creatures.exe
 * Function: DdeInitializeA
 * Entry: 0042e9de
 * Namespace: USER32.DLL
 * Prototype: UINT DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)
 */


UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042e9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}

