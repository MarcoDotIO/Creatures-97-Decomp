/*
 * Program: Creatures.exe
 * Function: FUN_0040d960
 * Entry: 0040d960
 * Namespace: Global
 * Prototype: undefined FUN_0040d960(void * this, LPBYTE param_1, DWORD param_2)
 */


void __thiscall FUN_0040d960(void *this,LPBYTE param_1,DWORD param_2)

{
  DdeCreateDataHandle(DAT_00438bc8,param_1,param_2,0,*(HSZ *)((int)this + 4),1,0);
  return;
}

