/*
 * Program: Creatures.exe
 * Function: FUN_0041a370
 * Entry: 0041a370
 * Namespace: Global
 * Prototype: undefined4 FUN_0041a370(void * this, int * param_1)
 */


undefined4 __thiscall FUN_0041a370(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xe) - *param_1;
  if (iVar2 < 0x1051) {
    if (iVar2 < -0x1050) {
      iVar2 = iVar2 + 0x20a0;
    }
  }
  else {
    iVar2 = iVar2 + -0x20a0;
  }
  iVar1 = (uint)*(byte *)((int)this + 8) * 0x1d + *(int *)(*(int *)((int)this + 4) + 4);
  if ((((iVar2 <= param_1[2] - *param_1) && (*(int *)((int)this + 0x12) <= param_1[3])) &&
      (-1 < *(int *)(iVar1 + 0xd) + iVar2)) &&
     (param_1[1] <= *(int *)(iVar1 + 0x11) + *(int *)((int)this + 0x12))) {
    return 1;
  }
  return 0;
}

