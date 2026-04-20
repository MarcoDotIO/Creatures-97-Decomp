/*
 * Program: Science_Kit.exe
 * Function: FUN_00404ae0
 * Entry: 00404ae0
 * Namespace: Global
 * Prototype: bool FUN_00404ae0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)
 */


bool __thiscall FUN_00404ae0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3)

{
  bool bVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  bVar1 = FUN_004048f0(this,param_1,param_2,param_3,8);
  return bVar1;
}

