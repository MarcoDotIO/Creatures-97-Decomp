/*
 * Program: Creatures.exe
 * Function: FUN_00408460
 * Entry: 00408460
 * Namespace: Global
 * Prototype: undefined FUN_00408460(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


void __thiscall
FUN_00408460(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00408370(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_004085e0(this,param_1,param_2);
    *(undefined4 *)param_3 = param_4;
    *(undefined4 *)(param_3 + 4) = param_5;
    *(undefined4 *)(param_3 + 8) = param_6;
    *(undefined4 *)(param_3 + 0xc) = param_7;
  }
  return;
}

