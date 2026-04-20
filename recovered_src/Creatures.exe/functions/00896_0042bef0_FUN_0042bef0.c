/*
 * Program: Creatures.exe
 * Function: FUN_0042bef0
 * Entry: 0042bef0
 * Namespace: Global
 * Prototype: undefined FUN_0042bef0(void * this, int param_1, int param_2, int param_3)
 */


void __thiscall FUN_0042bef0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0xc28) < 1) {
    return;
  }
  piVar2 = (int *)((int)this + 0xa7);
  do {
    iVar1 = 0;
    if (0 < *piVar2) {
      pbVar3 = (byte *)piVar2[-2];
      do {
        if (((uint)*pbVar3 + *(int *)((int)piVar2 + -0x9b) == param_1) &&
           ((uint)pbVar3[1] + *(int *)((int)piVar2 + -0x97) == param_2)) {
          if (param_3 < 0x100) {
            FUN_0042be60(this,local_8,iVar1,param_3);
            return;
          }
          FUN_0042be60(this,local_8,iVar1,0xff);
          return;
        }
        pbVar3 = pbVar3 + 0x10;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *piVar2);
    }
    piVar2 = (int *)((int)piVar2 + 0xc2);
    local_8 = local_8 + 1;
    if (*(int *)((int)this + 0xc28) <= local_8) {
      return;
    }
  } while( true );
}

