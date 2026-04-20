/*
 * Program: Creatures.exe
 * Function: FUN_0040dbb0
 * Entry: 0040dbb0
 * Namespace: Global
 * Prototype: undefined FUN_0040dbb0(void * this, HDDEDATA param_1)
 */


void __thiscall FUN_0040dbb0(void *this,HDDEDATA param_1)

{
  LPBYTE pBVar1;
  
  pBVar1 = DdeAccessData(param_1,(LPDWORD)0x0);
  FUN_00424110(*(void **)((int)this + 4),(char *)pBVar1);
  FUN_004241f0(*(int **)((int)this + 4));
  DdeUnaccessData(param_1);
  return;
}

