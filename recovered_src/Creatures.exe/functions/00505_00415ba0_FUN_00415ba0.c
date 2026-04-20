/*
 * Program: Creatures.exe
 * Function: FUN_00415ba0
 * Entry: 00415ba0
 * Namespace: Global
 * Prototype: undefined FUN_00415ba0(void * this, int * param_1)
 */


void __thiscall FUN_00415ba0(void *this,int *param_1)

{
  if (((*(uint *)(*param_1 + 4) & 0xff000000) == 0x4000000) &&
     ((*(char *)((int)this + 0x22) == '\x01' || ((*(byte *)((int)this + 0x53) & 1) == 0)))) {
    FUN_00401c60(this,*param_1,0);
    return;
  }
  *(undefined1 *)((int)this + 0x22) = 1;
  FUN_004150e0(this,1,*param_1,0);
  return;
}

