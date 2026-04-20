/*
 * Program: Creatures.exe
 * Function: FUN_0040b0c0
 * Entry: 0040b0c0
 * Namespace: Global
 * Prototype: undefined FUN_0040b0c0(void)
 */


void FUN_0040b0c0(void)

{
  undefined2 local_20 [4];
  char *local_18;
  undefined2 local_10 [4];
  uint local_8;
  
  if (*(int *)(DAT_00436ea8 + 0x6da) != 0) {
    local_8 = FUN_0041d030(1,4,0,0);
    local_10[0] = 3;
    local_18 = s_Dummy_00435e68;
    local_20[0] = 3;
    FUN_004192f0((void *)(DAT_00436ea8 + 0x6da),local_10,local_20);
  }
  return;
}

