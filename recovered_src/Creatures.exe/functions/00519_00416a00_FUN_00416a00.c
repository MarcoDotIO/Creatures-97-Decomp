/*
 * Program: Creatures.exe
 * Function: FUN_00416a00
 * Entry: 00416a00
 * Namespace: Global
 * Prototype: undefined FUN_00416a00(void * this, char * param_1)
 */


void __thiscall FUN_00416a00(void *this,char *param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x5c) == (void *)0x0) {
    uVar1 = FUN_00415020(this,param_1,0,1);
    *(undefined4 *)((int)this + 0x5c) = uVar1;
    return;
  }
  FUN_00417090(*(void **)((int)this + 0x5c),param_1);
  if (*param_1 == '\0') {
    FUN_00417010(*(int **)((int)this + 0x5c));
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return;
}

