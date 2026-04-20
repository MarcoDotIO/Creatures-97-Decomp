/*
 * Program: Creatures.exe
 * Function: FUN_00409210
 * Entry: 00409210
 * Namespace: Global
 * Prototype: undefined FUN_00409210(void * this, int * param_1)
 */


void __thiscall FUN_00409210(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    if (0 < param_1[4]) {
      iVar2 = 0;
      piVar1 = this;
      do {
        if ((piVar1[5] != 0) && ((int *)piVar1[8] == param_1)) {
          FUN_004091b0(this,iVar2);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (iVar2 < 0x20);
    }
    if (param_1[5] != 0) {
      iVar2 = 0;
      piVar1 = this;
      do {
        if ((piVar1[5] != 0) && (piVar1[4] == param_1[5])) {
          FUN_004091b0(this,iVar2);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (iVar2 < 0x20);
      (**(code **)(*(int *)param_1[5] + 8))((int *)param_1[5]);
      param_1[5] = 0;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(1);
    }
  }
  return;
}

