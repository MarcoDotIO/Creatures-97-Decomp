/*
 * Program: Creatures.exe
 * Function: FUN_00422630
 * Entry: 00422630
 * Namespace: Global
 * Prototype: undefined FUN_00422630(int param_1)
 */


void __fastcall FUN_00422630(int param_1)

{
  void *this;
  
  this = *(void **)(param_1 + 0x7e6);
  if ((this != (void *)0x0) &&
     (*(uint *)((int)this + 4) == (*(uint *)(param_1 + 4) & 0xffff0200 | 0x200))) {
    FUN_00422670(this,*(int *)(param_1 + 0x2b70));
    *(undefined4 *)(param_1 + 0x2b70) = 0;
  }
  return;
}

