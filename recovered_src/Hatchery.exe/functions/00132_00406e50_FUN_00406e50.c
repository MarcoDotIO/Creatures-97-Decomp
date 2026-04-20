/*
 * Program: Hatchery.exe
 * Function: FUN_00406e50
 * Entry: 00406e50
 * Namespace: Global
 * Prototype: undefined4 FUN_00406e50(int param_1)
 */


undefined4 __fastcall FUN_00406e50(int param_1)

{
  int iVar1;
  undefined2 local_20 [4];
  int local_18;
  undefined2 local_10 [4];
  undefined2 local_8;
  
  local_10[0] = 2;
  local_20[0] = 3;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_18 = *(int *)(param_1 + 0x5c);
    iVar1 = FUN_00403e80((void *)(param_1 + 0x54),local_20,local_20);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00403e50((void *)(param_1 + 0x54),local_10,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x5c) = local_18;
  return 1;
}

