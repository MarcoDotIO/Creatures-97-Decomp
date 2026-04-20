/*
 * Program: Creatures.exe
 * Function: FUN_0040d800
 * Entry: 0040d800
 * Namespace: Global
 * Prototype: undefined FUN_0040d800(void * this, int param_1)
 */


void __thiscall FUN_0040d800(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      piVar1 = *(int **)((int)this + iVar3 * 4 + 0x30);
      if (*piVar1 == param_1) {
        if (piVar1 != (int *)0x0) {
          FUN_0040db80(piVar1);
          Ordinal_731(piVar1);
        }
        iVar2 = *(int *)((int)this + 0x58) + -1;
        *(int *)((int)this + 0x58) = iVar2;
        puVar4 = (undefined4 *)((int)this + iVar3 * 4 + 0x30);
        if (iVar3 < iVar2) {
          do {
            iVar3 = iVar3 + 1;
            *puVar4 = puVar4[1];
            puVar4 = puVar4 + 1;
          } while (iVar3 < *(int *)((int)this + 0x58));
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x58));
  }
  return;
}

