/*
 * Program: Score_Kit.exe
 * Function: FUN_004059e0
 * Entry: 004059e0
 * Namespace: Global
 * Prototype: bool FUN_004059e0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3)
 */


bool __thiscall FUN_004059e0(void *this,int param_1,LPCSTR param_2,LPBYTE param_3)

{
  bool bVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    return false;
  }
  bVar1 = FUN_00405980(this,param_1,param_2,param_3,4);
  return bVar1;
}

