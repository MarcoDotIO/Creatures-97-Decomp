/*
 * Program: Score_Kit.exe
 * Function: _XcptFilter
 * Entry: 00409924
 * Namespace: MSVCRT40.DLL
 * Prototype: int _XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)
 */


int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}

