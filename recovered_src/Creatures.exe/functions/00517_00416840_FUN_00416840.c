/*
 * Program: Creatures.exe
 * Function: FUN_00416840
 * Entry: 00416840
 * Namespace: Global
 * Prototype: undefined FUN_00416840(void * this, int * param_1)
 */


void __thiscall FUN_00416840(void *this,int *param_1)

{
  if ((*(uint *)(*param_1 + 4) & 0xff000000) == 0x4000000) {
    FUN_00401c60(this,*param_1,0);
    return;
  }
  FUN_00416220(this);
  FUN_00416ac0(this,*param_1,4);
  *(byte *)((int)this + 9) = *(byte *)((int)this + 9) & 0xef;
  return;
}

