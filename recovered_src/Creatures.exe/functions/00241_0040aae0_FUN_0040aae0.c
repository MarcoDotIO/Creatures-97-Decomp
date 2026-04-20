/*
 * Program: Creatures.exe
 * Function: FUN_0040aae0
 * Entry: 0040aae0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040aae0(void * this, undefined4 param_1, char param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 __thiscall
FUN_0040aae0(void *this,undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 0x2ac8) + 4))
                      (param_1,param_3,
                       CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),(undefined1)param_4));
    return uVar1;
  }
  if (param_2 != '\x01') {
    return 0;
  }
  uVar1 = (*(code *)**(undefined4 **)(*(int *)((int)this + 4) + 0x7f7))(param_1,param_3,param_4);
  return uVar1;
}

