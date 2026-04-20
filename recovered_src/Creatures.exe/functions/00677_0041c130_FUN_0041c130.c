/*
 * Program: Creatures.exe
 * Function: FUN_0041c130
 * Entry: 0041c130
 * Namespace: Global
 * Prototype: undefined FUN_0041c130(void * this, int param_1)
 */


void __thiscall FUN_0041c130(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 0x80);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)((int)this + 0x84);
    do {
      if (*piVar3 == param_1) {
        FUN_0041c2f0((int)this);
        return;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar1 == 4) {
    FUN_0041c1b0(this,*(int *)((int)this + 0x84),1);
  }
  *(int *)((int)this + *(int *)((int)this + 0x80) * 4 + 0x84) = param_1;
  *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
  FUN_0041c2f0((int)this);
  return;
}

