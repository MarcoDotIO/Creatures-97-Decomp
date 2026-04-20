/*
 * Program: Creatures.exe
 * Function: FUN_00401c60
 * Entry: 00401c60
 * Namespace: Global
 * Prototype: undefined FUN_00401c60(undefined4 param_1, int param_2, int param_3)
 */


void __cdecl FUN_00401c60(undefined4 param_1,int param_2,int param_3)

{
  if ((param_3 < 0x24) && ((*(uint *)(param_2 + 4) & 0xff000000) == 0x4000000)) {
    FUN_00401a80((void *)(param_3 * 0x14 + 0x25a0 + param_2),param_1,param_2);
  }
  return;
}

