/*
 * Program: Creatures.exe
 * Function: FUN_0040d860
 * Entry: 0040d860
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d860(void * this, int param_1)
 */


undefined4 __thiscall FUN_0040d860(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    piVar2 = (int *)((int)this + 0xc);
    do {
      if (*(int *)(*piVar2 + 4) == param_1) {
        return *(undefined4 *)((int)this + iVar1 * 4 + 0xc);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x2c));
  }
  return 0;
}

