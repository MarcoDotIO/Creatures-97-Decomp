/*
 * Program: Creatures.exe
 * Function: FUN_0042da20
 * Entry: 0042da20
 * Namespace: Global
 * Prototype: undefined FUN_0042da20(void * this, int param_1, int param_2, int * param_3)
 */


void __thiscall FUN_0042da20(void *this,int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  param_3[3] = 9999;
  if (0 < *(int *)((int)this + 8)) {
    piVar3 = (int *)((int)this + 0xc);
    do {
      if (((*piVar3 <= param_1) && (param_1 <= piVar3[2])) &&
         (uVar1 = param_2 - piVar3[3] >> 0x1f, uVar2 = param_2 - param_3[3] >> 0x1f,
         (int)((param_2 - piVar3[3] ^ uVar1) - uVar1) <
         (int)((param_2 - param_3[3] ^ uVar2) - uVar2))) {
        *param_3 = *piVar3;
        param_3[1] = piVar3[1];
        param_3[2] = piVar3[2];
        param_3[3] = piVar3[3];
      }
      piVar3 = piVar3 + 5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 8));
  }
  return;
}

