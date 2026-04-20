/*
 * Program: Creatures.exe
 * Function: FUN_00420f80
 * Entry: 00420f80
 * Namespace: Global
 * Prototype: undefined FUN_00420f80(void * this, uint param_1, int param_2, byte param_3, byte param_4)
 */


void __thiscall FUN_00420f80(void *this,uint param_1,int param_2,byte param_3,byte param_4)

{
  uint uVar1;
  
  if (*(char *)((int)this + 0x2b78) != '\0') {
    return;
  }
  if ((param_1 != 0xffffffff) && (*(int *)(param_1 * 0x10 + 0x836 + (int)this) != 0)) {
    FUN_0042be10(*(void **)((int)this + 0x2ac8),2,param_1,param_3);
  }
  if (param_2 == -1) {
    return;
  }
  if (param_1 != 0xffffffff) {
    if (*(int *)((int)this + 0x7e6) != 0) {
      uVar1 = FUN_00414ec0(*(int *)((int)this + 0x7e6));
      if (uVar1 == param_1) goto LAB_00421011;
      if (*(int *)((int)this + 0x7e6) != 0) goto LAB_00420fee;
    }
    if (param_1 != 0) {
LAB_00420fee:
      *(uint *)((int)this + 0x1b96) = param_1;
      *(int *)((int)this + 0x1b9a) = param_2;
      *(undefined1 *)((int)this + 0x1b9f) = 5;
      *(byte *)((int)this + 0x1b9e) = param_4;
      return;
    }
  }
LAB_00421011:
  FUN_0042be10(*(void **)((int)this + 0x2ac8),3,param_2,param_4);
  *(undefined4 *)((int)this + 0x1b96) = 0xffffffff;
  return;
}

