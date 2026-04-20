/*
 * Program: Creatures.exe
 * Function: FUN_00418a20
 * Entry: 00418a20
 * Namespace: Global
 * Prototype: undefined FUN_00418a20(void * this, void * param_1)
 */


void __thiscall FUN_00418a20(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0x188);
  do {
    if (*piVar1 == 0) {
      *(void **)((int)this + iVar2 * 4 + 0x188) = param_1;
      return;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00416e40(param_1);
  return;
}

