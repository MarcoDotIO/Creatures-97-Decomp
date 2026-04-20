/*
 * Program: Creatures.exe
 * Function: FUN_004251f0
 * Entry: 004251f0
 * Namespace: Global
 * Prototype: undefined FUN_004251f0(void * this, uint param_1, int param_2)
 */


void __thiscall FUN_004251f0(void *this,uint param_1,int param_2)

{
  if ((param_1 & 0xffffff) == 0x726176) {
    *(int *)((((param_1 & 0xff3fffff) >> 0x16) - 0x54) + (int)this) = param_2;
    return;
  }
  if ((param_1 & 0xffffff) == 0x76626f) {
    *(int *)((((param_1 & 0xff3fffff) >> 0x16) - 0x91) + *(int *)((int)this + 0xa4)) = param_2;
    return;
  }
  if (param_1 < 0x686e6978) {
    if (param_1 == 0x686e6977) {
      if (param_2 < 0x4b0) {
        *(int *)(*(int *)(DAT_00436eb0 + 0x60) + 0x18) = param_2;
        return;
      }
      *(undefined4 *)(*(int *)(DAT_00436eb0 + 0x60) + 0x18) = 0x4a0;
      return;
    }
    if (param_1 == 0x63657678) {
      *(int *)(*(int *)((int)this + 0xa4) + 0x13c) = param_2;
      return;
    }
    if (param_1 == 0x63657679) {
      *(int *)(*(int *)((int)this + 0xa4) + 0x140) = param_2;
      return;
    }
  }
  else if (param_1 < 0x706a6270) {
    if (param_1 == 0x706a626f) {
      *(int *)(*(int *)((int)this + 0x94) + 0x1e) = param_2;
      return;
    }
    if (param_1 == 0x6e726f6e) {
      FUN_004069f0(param_2,1);
      return;
    }
  }
  else if (param_1 < 0x73616c64) {
    if (param_1 == 0x73616c63) {
      *(int *)(*(int *)((int)this + 0xa4) + 4) = param_2;
      return;
    }
    if (param_1 == 0x72747461) {
      *(undefined1 *)(*(int *)((int)this + 0xa4) + 9) = (undefined1)param_2;
      return;
    }
  }
  else if (param_1 < 0x76746362) {
    if (param_1 == 0x76746361) {
      *(undefined1 *)(*(int *)((int)this + 0xa4) + 0x22) = (undefined1)param_2;
      return;
    }
    if (param_1 == 0x73766f6d) {
      *(undefined1 *)(*(int *)((int)this + 0xa4) + 8) = (undefined1)param_2;
      return;
    }
  }
  else {
    if (param_1 == 0x776e6977) {
      if (param_2 < 0x20a0) {
        *(int *)(*(int *)(DAT_00436eb0 + 0x60) + 0x14) = param_2;
        return;
      }
      *(undefined4 *)(*(int *)(DAT_00436eb0 + 0x60) + 0x14) = 0x2090;
      return;
    }
    if (param_1 == 0x79626162) {
      *(int *)(*(int *)((int)this + 0xa4) + 0x2b74) = param_2;
      return;
    }
  }
  FUN_004265c0(this,s_Lvalue_00436c44);
  return;
}

