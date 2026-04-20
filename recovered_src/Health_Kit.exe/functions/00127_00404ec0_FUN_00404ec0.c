/*
 * Program: Health_Kit.exe
 * Function: FUN_00404ec0
 * Entry: 00404ec0
 * Namespace: Global
 * Prototype: bool FUN_00404ec0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)
 */


bool __thiscall FUN_00404ec0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3)

{
  bool bVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  bVar1 = FUN_00404e60(this,param_1,param_2,param_3,4);
  return bVar1;
}

