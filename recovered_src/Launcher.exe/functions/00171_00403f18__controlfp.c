/*
 * Program: Launcher.exe
 * Function: _controlfp
 * Entry: 00403f18
 * Namespace: MSVCRT40.DLL
 * Prototype: uint _controlfp(uint _NewValue, uint _Mask)
 */


uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}

