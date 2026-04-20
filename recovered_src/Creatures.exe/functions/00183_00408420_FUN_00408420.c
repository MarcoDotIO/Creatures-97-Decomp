/*
 * Program: Creatures.exe
 * Function: FUN_00408420
 * Entry: 00408420
 * Namespace: Global
 * Prototype: undefined FUN_00408420(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)
 */


void __thiscall
FUN_00408420(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00408350(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_004085a0(this,param_1,param_2);
    *(undefined4 *)param_3 = param_4;
  }
  return;
}

