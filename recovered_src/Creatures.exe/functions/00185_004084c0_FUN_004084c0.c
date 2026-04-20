/*
 * Program: Creatures.exe
 * Function: FUN_004084c0
 * Entry: 004084c0
 * Namespace: Global
 * Prototype: undefined FUN_004084c0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4, undefined4 param_5)
 */


void __thiscall
FUN_004084c0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00408390(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00408620(this,param_1,param_2);
    *(undefined4 *)param_3 = param_4;
    *(undefined4 *)(param_3 + 4) = param_5;
  }
  return;
}

