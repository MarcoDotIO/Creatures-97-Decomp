/*
 * Program: Creatures.exe
 * Function: FUN_00423340
 * Entry: 00423340
 * Namespace: Global
 * Prototype: undefined FUN_00423340(int param_1)
 */


void __fastcall FUN_00423340(int param_1)

{
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined2 local_10 [4];
  uint local_8;
  
  if (*(int *)(DAT_00436ea8 + 0x788) == 0) {
    FUN_0041cdd0((char *)0x0,0,9);
  }
  if (*(int *)(DAT_00436ea8 + 0x788) != 0) {
    local_8 = FUN_0041d030(1,4,0,0);
    local_18 = *(undefined4 *)(param_1 + 0x48);
    local_10[0] = 3;
    local_20[0] = 3;
    FUN_004192f0((void *)(DAT_00436ea8 + 0x788),local_10,local_20);
  }
  return;
}

