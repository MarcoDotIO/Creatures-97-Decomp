/*
 * Program: Creatures.exe
 * Function: FUN_0041a990
 * Entry: 0041a990
 * Namespace: Global
 * Prototype: undefined FUN_0041a990(void * this, int param_1)
 */


void __thiscall FUN_0041a990(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    *(undefined4 *)((int)this + 0x22) = 8;
  }
  else {
    if (param_1 == 2) {
      iVar1 = *(int *)((int)this + 0x1e);
    }
    else {
      if (param_1 != 3) {
        *(undefined4 *)((int)this + 0x22) = 9;
        goto LAB_0041a9c3;
      }
      iVar1 = *(int *)((int)this + 0x1e) + 4;
    }
    *(int *)((int)this + 0x22) = iVar1;
  }
LAB_0041a9c3:
  if ((3 < *(int *)((int)this + 0x1e)) &&
     (*(undefined4 *)((int)this + 0x22) = 8, *(int *)((int)this + 0x1e) == 5)) {
    *(undefined4 *)((int)this + 0x22) = 9;
  }
  *(char *)((int)this + 8) = *(char *)((int)this + 9) + *(char *)((int)this + 0x22);
  return;
}

