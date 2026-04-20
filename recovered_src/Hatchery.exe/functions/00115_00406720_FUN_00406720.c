/*
 * Program: Hatchery.exe
 * Function: FUN_00406720
 * Entry: 00406720
 * Namespace: Global
 * Prototype: undefined FUN_00406720(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00406720(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_00406780(this,param_1,param_2,*(uint *)((int)this + 4),*(int *)((int)this + 8),0,0);
    return;
  }
  FUN_004065c0(this,param_1,param_2,*(uint *)((int)this + 4),*(int *)((int)this + 8),0,0);
  return;
}

