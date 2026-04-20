/*
 * Program: Creatures.exe
 * Function: FUN_0041be20
 * Entry: 0041be20
 * Namespace: Global
 * Prototype: int FUN_0041be20(void * this, uint param_1, uint param_2, int param_3)
 */


int __thiscall FUN_0041be20(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0041bd90((int)this);
  iVar2 = 0;
  iVar1 = FUN_0041be70(this,param_1,param_2,param_3,1);
  while (iVar1 != 0) {
    iVar2 = iVar2 + 1;
    iVar1 = FUN_0041be70(this,param_1,param_2,param_3,1);
  }
  return iVar2;
}

