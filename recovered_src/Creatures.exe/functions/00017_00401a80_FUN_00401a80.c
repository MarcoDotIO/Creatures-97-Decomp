/*
 * Program: Creatures.exe
 * Function: FUN_00401a80
 * Entry: 00401a80
 * Namespace: Global
 * Prototype: undefined FUN_00401a80(void * this, undefined4 param_1, int param_2)
 */


void __thiscall FUN_00401a80(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)(param_2 + 4) & 0xff000000) == 0x4000000) {
    puVar2 = (undefined4 *)(PTR_DAT_004351e4 + 0x14);
    if ((undefined4 *)0x43753f < puVar2) {
      puVar2 = &DAT_00437220;
    }
    if ((undefined4 *)PTR_DAT_004351e8 != puVar2) {
      *(undefined4 *)this = param_1;
      *(int *)((int)this + 4) = param_2;
      puVar3 = (undefined4 *)PTR_DAT_004351e4;
      for (iVar1 = 5; PTR_DAT_004351e4 = (undefined *)puVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)this;
        this = (undefined4 *)((int)this + 4);
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}

