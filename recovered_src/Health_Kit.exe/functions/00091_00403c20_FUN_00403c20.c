/*
 * Program: Health_Kit.exe
 * Function: FUN_00403c20
 * Entry: 00403c20
 * Namespace: Global
 * Prototype: undefined4 FUN_00403c20(void * this, int param_1)
 */


undefined4 __thiscall FUN_00403c20(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(void **)((int)this + 0xdc);
  FUN_00403df0(this,*(int *)((int)this + 0x188),this_00);
  uVar4 = *(int *)(*(int *)((int)this_00 + 4) + 4) + 3U & 0xfffffffc;
  puVar2 = (undefined1 *)
           FUN_00402620(this_00,*(int *)((int)this + 0x188),*(int *)((int)this + 0x18c));
  iVar3 = *(int *)((int)this + 0x18c) - param_1;
  iVar5 = -(iVar3 >> 1);
  FUN_00403d80(puVar2,uVar4);
  iVar1 = *(int *)((int)this + 0x18c);
  while (param_1 < iVar1) {
    puVar2 = puVar2 + uVar4;
    *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + -1;
    iVar5 = iVar5 + 4;
    if (-1 < iVar5) {
      puVar2 = puVar2 + 1;
      iVar5 = iVar5 - iVar3;
      FUN_00403d80(puVar2,uVar4);
    }
    FUN_00403db0(puVar2,uVar4);
    iVar1 = *(int *)((int)this + 0x18c);
  }
  return 1;
}

