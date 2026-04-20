/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00404ac0
 * Entry: 00404ac0
 * Namespace: Global
 * Prototype: bool FUN_00404ac0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)
 */


bool __thiscall FUN_00404ac0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3)

{
  bool bVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  bVar1 = FUN_00404a30(this,param_1,param_2,param_3,8);
  return bVar1;
}

