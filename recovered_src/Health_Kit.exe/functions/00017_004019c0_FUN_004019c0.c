/*
 * Program: Health_Kit.exe
 * Function: FUN_004019c0
 * Entry: 004019c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004019c0(int param_1)
 */


undefined4 __fastcall FUN_004019c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x12bc);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14);
  *(undefined4 *)(param_1 + 0x12d8) = uVar2;
  puVar3 = (undefined4 *)Ordinal_729(uVar2);
  *(undefined4 **)(param_1 + 0x12dc) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x12d8);
  puVar6 = *(undefined4 **)(iVar1 + 8);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return 1;
}

