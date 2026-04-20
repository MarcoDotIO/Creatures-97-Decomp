/*
 * Program: Owner_s_Kit.exe
 * Function: _XcptFilter
 * Entry: 0040d084
 * Namespace: MSVCRT40.DLL
 * Prototype: int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)
 */


int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}

