/*
 * Program: Creatures.exe
 * Function: FUN_004080a0
 * Entry: 004080a0
 * Namespace: Global
 * Prototype: undefined FUN_004080a0(int param_1)
 */


void __fastcall FUN_004080a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined2 local_10 [4];
  uint local_8;
  
  if (*(int *)(DAT_00436ea8 + 0x788) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x94)) {
      puVar1 = (undefined4 *)(param_1 + 0x54);
      do {
        iVar2 = iVar2 + 1;
        local_8 = FUN_0041d030(1,4,0,0);
        local_10[0] = 3;
        local_20[0] = 3;
        local_18 = *puVar1;
        FUN_004192f0((void *)(DAT_00436ea8 + 0x788),local_10,local_20);
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x94));
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}

