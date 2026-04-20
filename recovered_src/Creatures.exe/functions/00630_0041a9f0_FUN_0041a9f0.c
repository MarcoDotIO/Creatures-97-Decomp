/*
 * Program: Creatures.exe
 * Function: FUN_0041a9f0
 * Entry: 0041a9f0
 * Namespace: Global
 * Prototype: undefined FUN_0041a9f0(void * this, int param_1, int param_2, int param_3)
 */


void __thiscall FUN_0041a9f0(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((param_2 != 0) && ((param_1 == 1 || (*(int *)((int)this + 0x1e) == 4)))) {
    cVar1 = (char)param_2 + '\x01';
  }
  if (param_3 == 0) {
    cVar1 = cVar1 + '\r';
  }
  *(char *)((int)this + 8) = *(char *)((int)this + 9) + *(char *)((int)this + 0x22) + cVar1;
  return;
}

