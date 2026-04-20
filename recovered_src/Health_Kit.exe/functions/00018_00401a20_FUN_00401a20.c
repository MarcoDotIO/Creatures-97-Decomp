/*
 * Program: Health_Kit.exe
 * Function: FUN_00401a20
 * Entry: 00401a20
 * Namespace: Global
 * Prototype: undefined4 FUN_00401a20(int param_1)
 */


undefined4 __fastcall FUN_00401a20(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(undefined4 **)(param_1 + 0x12dc) == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x12d8);
  puVar3 = *(undefined4 **)(param_1 + 0x12dc);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x12bc) + 8);
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

