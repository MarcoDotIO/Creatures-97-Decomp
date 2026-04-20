/*
 * Program: Creatures.exe
 * Function: FUN_0040d8c0
 * Entry: 0040d8c0
 * Namespace: Global
 * Prototype: undefined FUN_0040d8c0(void * this, HSZ param_1, LPSTR param_2, DWORD param_3)
 */


void __thiscall FUN_0040d8c0(void *this,HSZ param_1,LPSTR param_2,DWORD param_3)

{
  DdeQueryStringA(*(DWORD *)((int)this + 8),param_1,param_2,param_3,0x3ec);
  return;
}

