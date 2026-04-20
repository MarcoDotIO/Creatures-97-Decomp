/*
 * Program: Health_Kit.exe
 * Function: FUN_00403bb0
 * Entry: 00403bb0
 * Namespace: Global
 * Prototype: undefined4 FUN_00403bb0(void * param_1)
 */


undefined4 __fastcall FUN_00403bb0(void *param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  
  this = *(void **)((int)param_1 + 0xdc);
  FUN_00403df0(param_1,*(int *)((int)param_1 + 0x188),this);
  iVar2 = *(int *)(*(int *)((int)this + 4) + 4) + 3 >> 2;
  puVar1 = (undefined4 *)
           FUN_00402620(this,*(int *)((int)param_1 + 0x188),*(int *)((int)param_1 + 0x18c));
  *puVar1 = 0x56565656;
  puVar1[-iVar2] = 0x1e1e1e1e;
  puVar1[iVar2] = 0x1e1e1e1e;
  return 1;
}

