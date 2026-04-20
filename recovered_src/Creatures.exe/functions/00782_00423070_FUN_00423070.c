/*
 * Program: Creatures.exe
 * Function: FUN_00423070
 * Entry: 00423070
 * Namespace: Global
 * Prototype: undefined FUN_00423070(void * param_1)
 */


void __fastcall FUN_00423070(void *param_1)

{
  void *this;
  
  this = *(void **)((int)param_1 + 0x2ac4);
  if (this != (void *)0x0) {
    FUN_004150e0(this,0,this,0);
    FUN_004190b0(*(int **)((int)param_1 + 0x2ac4));
    *(undefined4 *)((int)param_1 + 0x2ac4) = 0;
  }
  FUN_0041ef00(param_1);
  *(undefined4 *)((int)param_1 + 0x2b6a) = 0;
  FUN_00423cc0((int)param_1);
  return;
}

