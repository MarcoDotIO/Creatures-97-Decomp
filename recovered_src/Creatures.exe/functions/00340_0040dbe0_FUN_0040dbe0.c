/*
 * Program: Creatures.exe
 * Function: FUN_0040dbe0
 * Entry: 0040dbe0
 * Namespace: Global
 * Prototype: undefined FUN_0040dbe0(void * this, HDDEDATA param_1)
 */


void __thiscall FUN_0040dbe0(void *this,HDDEDATA param_1)

{
  LPBYTE pBVar1;
  
  pBVar1 = DdeAccessData(param_1,(LPDWORD)0x0);
  FUN_00424110(*(void **)((int)this + 4),(char *)pBVar1);
  DdeUnaccessData(param_1);
  return;
}

