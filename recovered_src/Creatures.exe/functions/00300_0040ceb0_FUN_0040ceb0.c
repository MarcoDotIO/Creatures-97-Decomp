/*
 * Program: Creatures.exe
 * Function: FUN_0040ceb0
 * Entry: 0040ceb0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ceb0(int param_1)
 */


undefined4 __fastcall FUN_0040ceb0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_0040c0f0(*(int *)(*(int *)(param_1 + 4) + 0xc));
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x30))(*(undefined4 *)(param_1 + 0x15),0);
  uVar3 = FUN_0040cf00(param_1);
  *(undefined4 *)(param_1 + 9) = uVar3;
  (**(code **)(iVar1 + 0x3c))
            (*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd) * *(int *)(param_1 + 0x11));
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  return *(undefined4 *)(param_1 + 9);
}

