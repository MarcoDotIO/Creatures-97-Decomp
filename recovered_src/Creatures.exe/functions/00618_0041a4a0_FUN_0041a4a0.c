/*
 * Program: Creatures.exe
 * Function: FUN_0041a4a0
 * Entry: 0041a4a0
 * Namespace: Global
 * Prototype: undefined FUN_0041a4a0(void * this, undefined4 * param_1)
 */


void __thiscall FUN_0041a4a0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xe);
  param_1[1] = *(undefined4 *)((int)this + 0x12);
  param_1[2] = *(int *)((uint)*(byte *)((int)this + 8) * 0x1d + 0xd +
                       *(int *)(*(int *)((int)this + 4) + 4)) + *(int *)((int)this + 0xe);
  param_1[3] = *(int *)((uint)*(byte *)((int)this + 8) * 0x1d + 0x11 +
                       *(int *)(*(int *)((int)this + 4) + 4)) + *(int *)((int)this + 0x12);
  return;
}

