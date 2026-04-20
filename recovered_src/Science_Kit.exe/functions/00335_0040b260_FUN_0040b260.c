/*
 * Program: Science_Kit.exe
 * Function: FUN_0040b260
 * Entry: 0040b260
 * Namespace: Global
 * Prototype: undefined FUN_0040b260(void * this, int param_1)
 */


void __thiscall FUN_0040b260(void *this,int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x20) != 0)) {
    if (*(int *)((int)this + 0x1d4) == param_1) {
      local_8[0] = 0;
      local_8[1] = 0;
      FUN_0040bba0((void *)((int)this + 0xf8),*(void **)((int)this + 0xdc),1,local_8,(int *)0x0,
                   *(int *)((int)this + 0x1d8));
      FUN_00410050((void *)((int)this + 0x94),(RECT *)0x0,0,0);
      iVar1 = *(int *)((int)this + 0x1d8) + 1;
      *(int *)((int)this + 0x1d8) = iVar1;
      if (iVar1 == 6) {
        *(undefined4 *)((int)this + 0x1d8) = 0;
      }
    }
    Ordinal_2081();
    return;
  }
  FUN_0040aa00((int)this);
  return;
}

