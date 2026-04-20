/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00404ba0
 * Entry: 00404ba0
 * Namespace: Global
 * Prototype: undefined FUN_00404ba0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, BYTE * param_4)
 */


void __thiscall FUN_00404ba0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3,BYTE *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 4) != 0) {
    bVar2 = FUN_00404ac0(this,param_1,param_2,param_3);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      FUN_00404c80(this,param_1,param_2,param_4);
      uVar1 = *(undefined4 *)(param_4 + 4);
      *(undefined4 *)param_3 = *(undefined4 *)param_4;
      *(undefined4 *)(param_3 + 4) = uVar1;
    }
  }
  return;
}

