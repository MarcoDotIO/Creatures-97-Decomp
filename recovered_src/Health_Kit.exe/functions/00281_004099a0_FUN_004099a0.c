/*
 * Program: Health_Kit.exe
 * Function: FUN_004099a0
 * Entry: 004099a0
 * Namespace: Global
 * Prototype: undefined FUN_004099a0(void * this, void * param_1, int param_2, int * param_3, int * param_4, int param_5)
 */


void __thiscall
FUN_004099a0(void *this,void *param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  if (param_5 != -1) {
    if (param_5 <= *(int *)((int)this + 0xc) + -1) {
      FUN_0040d360(*(void **)(*(int *)((int)this + 8) + param_5 * 4),param_1,param_2,param_3,param_4
                  );
    }
    return;
  }
  FUN_0040d360(*(void **)(*(int *)((int)this + 8) + *(int *)((int)this + 0x20) * 4),param_1,param_2,
               param_3,param_4);
  if (*(int *)((int)this + 0xc) + -1 <= *(int *)((int)this + 0x20)) {
    *(undefined4 *)((int)this + 0x20) = 0;
    return;
  }
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  return;
}

