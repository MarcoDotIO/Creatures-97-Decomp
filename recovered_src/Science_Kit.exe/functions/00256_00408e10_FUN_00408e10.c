/*
 * Program: Science_Kit.exe
 * Function: FUN_00408e10
 * Entry: 00408e10
 * Namespace: Global
 * Prototype: undefined4 FUN_00408e10(int param_1)
 */


undefined4 __fastcall FUN_00408e10(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(undefined4 **)(param_1 + 0x7138) == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x7134);
  puVar3 = *(undefined4 **)(param_1 + 0x7138);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x7118) + 8);
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
  return 1;
}

