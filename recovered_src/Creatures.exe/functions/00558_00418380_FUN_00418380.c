/*
 * Program: Creatures.exe
 * Function: FUN_00418380
 * Entry: 00418380
 * Namespace: Global
 * Prototype: undefined FUN_00418380(void * this, int * param_1)
 */


void __thiscall FUN_00418380(void *this,int *param_1)

{
  if (*(char *)((int)this + 0x22) == '\x01') {
    FUN_00401c60(this,*param_1,0);
    return;
  }
  if (((*(uint *)(*param_1 + 4) & 0xff000000) == 0x4000000) && (*(int *)((int)this + 0x124) == -1))
  {
    FUN_00401c60(this,*param_1,0);
    return;
  }
  *(undefined1 *)((int)this + 0x22) = 1;
  FUN_00417f30(this);
  FUN_004150e0(this,1,*param_1,0);
  return;
}

