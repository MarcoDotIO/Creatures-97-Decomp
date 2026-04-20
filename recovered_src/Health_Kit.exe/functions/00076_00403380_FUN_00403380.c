/*
 * Program: Health_Kit.exe
 * Function: FUN_00403380
 * Entry: 00403380
 * Namespace: Global
 * Prototype: undefined4 FUN_00403380(int param_1)
 */


undefined4 __fastcall FUN_00403380(int param_1)

{
  LPRECT lprc;
  void *this;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(undefined4 **)(param_1 + 0xfc) == (undefined4 *)0x0) {
    return 0;
  }
  this = *(void **)(param_1 + 0xdc);
  uVar2 = *(uint *)(param_1 + 0xf8);
  puVar3 = *(undefined4 **)(param_1 + 0xfc);
  puVar4 = *(undefined4 **)((int)this + 8);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  lprc = (LPRECT)(param_1 + 0x150);
  SetRect(lprc,*(int *)(param_1 + 0x1a0),*(int *)(param_1 + 0x178),*(int *)(param_1 + 0x180),
          *(int *)(param_1 + 0x17c));
  *(LPRECT *)(param_1 + 0x160) = lprc;
  FUN_00402690(this,0x7e,(int *)lprc);
  FUN_0040d360((void *)(param_1 + 0x10c),*(void **)(param_1 + 0xdc),1,(int *)(param_1 + 0x164),
               (int *)lprc);
  return 1;
}

