/*
 * Program: Science_Kit.exe
 * Function: FUN_00405970
 * Entry: 00405970
 * Namespace: Global
 * Prototype: undefined FUN_00405970(void * this, int param_1)
 */


void __thiscall FUN_00405970(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x294) != 0)) &&
     (puVar1 = (undefined4 *)(param_1 * 0x14 + 0x10 + (int)this), puVar1[1] != 0)) {
    puVar1[1] = 0;
    (**(code **)(*(int *)*puVar1 + 0x48))((int *)*puVar1);
    if (puVar1[4] != 0) {
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *(int *)(puVar1[4] + 0x10) = *(int *)(puVar1[4] + 0x10) + -1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  }
  return;
}

