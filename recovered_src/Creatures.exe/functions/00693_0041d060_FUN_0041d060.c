/*
 * Program: Creatures.exe
 * Function: FUN_0041d060
 * Entry: 0041d060
 * Namespace: Global
 * Prototype: undefined FUN_0041d060(byte param_1, byte param_2, byte param_3, byte param_4)
 */


void __cdecl FUN_0041d060(byte param_1,byte param_2,byte param_3,byte param_4)

{
  int iVar1;
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined2 local_10 [4];
  uint local_8;
  
  iVar1 = 0;
  local_8 = FUN_0041d030(param_1,param_2,param_3,param_4);
  local_18 = 0;
  local_10[0] = 3;
  local_20[0] = 3;
  do {
    if (*(int *)(DAT_00436ea8 + 0x16a + iVar1) != 0) {
      FUN_004192f0((void *)(DAT_00436ea8 + 0x16a + iVar1),local_10,local_20);
    }
    iVar1 = iVar1 + 0xae;
  } while (iVar1 < 0x6cc);
  return;
}

