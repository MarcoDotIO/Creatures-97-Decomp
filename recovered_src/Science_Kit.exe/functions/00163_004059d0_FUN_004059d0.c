/*
 * Program: Science_Kit.exe
 * Function: FUN_004059d0
 * Entry: 004059d0
 * Namespace: Global
 * Prototype: undefined FUN_004059d0(void * this, int * param_1)
 */


void __thiscall FUN_004059d0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  byte local_4 [4];
  
  if (param_1 != (int *)0x0) {
    if (0 < param_1[4]) {
      iVar2 = 0;
      piVar1 = this;
      do {
        if ((piVar1[5] != 0) && ((int *)piVar1[8] == param_1)) {
          (**(code **)(*(int *)piVar1[4] + 0x24))((int *)piVar1[4],local_4);
          if ((local_4[0] & 1) == 0) {
            FUN_00405970(this,iVar2);
          }
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (iVar2 < 0x20);
    }
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[5] = 0;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(1);
    }
  }
  return;
}

