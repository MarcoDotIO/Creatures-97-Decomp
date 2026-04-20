/*
 * Program: Hatchery.exe
 * Function: FUN_00405620
 * Entry: 00405620
 * Namespace: Global
 * Prototype: undefined4 FUN_00405620(void * this, int param_1, int param_2)
 */


undefined4 __thiscall FUN_00405620(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_4 [4];
  
  puVar2 = local_4;
  if (*(int *)((int)this + 0x2ac) != 0) {
    return 6;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    *(undefined4 *)((int)this + param_1 * 0x14 + 0x18) = 0;
    if (param_2 != 0) {
      piVar1 = *(int **)((int)this + param_1 * 0x14 + 0x10);
      (**(code **)(*piVar1 + 0x18))(piVar1);
      *(int *)((int)this + param_1 * 0x14 + 0x1c) = (-10000 - (int)puVar2) / 0xf;
      return 0;
    }
    FUN_00404fc0(this,param_1);
    return 0;
  }
  return 4;
}

