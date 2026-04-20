/*
 * Program: Creatures.exe
 * Function: FUN_00418400
 * Entry: 00418400
 * Namespace: Global
 * Prototype: undefined FUN_00418400(void * this, int * param_1)
 */


void __thiscall FUN_00418400(void *this,int *param_1)

{
  if (*(char *)((int)this + 0x22) == '\x02') {
    FUN_00401c60(this,*param_1,0);
    return;
  }
  if (((*(uint *)(*param_1 + 4) & 0xff000000) == 0x4000000) && (*(int *)((int)this + 0x128) == -1))
  {
    FUN_00401c60(this,*param_1,0);
    return;
  }
  *(undefined1 *)((int)this + 0x22) = 2;
  FUN_00417f30(this);
  FUN_004150e0(this,2,*param_1,0);
  return;
}

