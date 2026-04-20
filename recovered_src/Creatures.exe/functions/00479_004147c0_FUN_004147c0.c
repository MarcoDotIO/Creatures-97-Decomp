/*
 * Program: Creatures.exe
 * Function: FUN_004147c0
 * Entry: 004147c0
 * Namespace: Global
 * Prototype: undefined FUN_004147c0(void * this, int param_1)
 */


void __thiscall FUN_004147c0(void *this,int param_1)

{
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    (**(code **)(*(int *)this + 0x14))(param_1);
    return;
  case 1:
    (**(code **)(*(int *)this + 0x18))(param_1);
    return;
  case 2:
    (**(code **)(*(int *)this + 0x1c))(param_1);
    return;
  case 3:
    (**(code **)(*(int *)this + 0x28))(param_1);
    return;
  case 4:
    (**(code **)(*(int *)this + 0x20))(param_1);
    return;
  case 5:
    (**(code **)(*(int *)this + 0x24))(param_1);
    return;
  case 6:
    (**(code **)(*(int *)this + 0x2c))(param_1);
    return;
  case 7:
    (**(code **)(*(int *)this + 0x30))(param_1);
    return;
  case 8:
    (**(code **)(*(int *)this + 0x38))();
    return;
  case 9:
    (**(code **)(*(int *)this + 0x3c))();
  }
  return;
}

