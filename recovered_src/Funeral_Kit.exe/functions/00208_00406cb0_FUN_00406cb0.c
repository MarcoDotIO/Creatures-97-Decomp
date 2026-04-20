/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00406cb0
 * Entry: 00406cb0
 * Namespace: Global
 * Prototype: undefined FUN_00406cb0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, undefined4 param_4)
 */


void __thiscall
FUN_00406cb0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 4) != 0) {
    bVar1 = FUN_00406ba0(this,param_1,param_2,param_3);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_00406e60(this,param_1,param_2);
      *(undefined4 *)param_3 = param_4;
    }
  }
  return;
}

