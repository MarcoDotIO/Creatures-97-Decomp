/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040d3f0
 * Entry: 0040d3f0
 * Namespace: Global
 * Prototype: undefined FUN_0040d3f0(int param_1)
 */


void __fastcall FUN_0040d3f0(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int *piVar3;
  int local_8 [2];
  
  local_8[0] = 0;
  iVar2 = 2;
  piVar3 = (int *)(param_1 + 0x57c);
  local_8[1] = 0;
  this = (void *)(param_1 + 0x58c);
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    FUN_0040c0c0(this,*(void **)(iVar1 + 0x48),0,local_8,(int *)0x0,0);
    iVar2 = iVar2 + -1;
    this = (void *)((int)this + 0x28);
  } while (iVar2 != 0);
  return;
}

