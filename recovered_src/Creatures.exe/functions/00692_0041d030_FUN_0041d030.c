/*
 * Program: Creatures.exe
 * Function: FUN_0041d030
 * Entry: 0041d030
 * Namespace: Global
 * Prototype: uint FUN_0041d030(byte param_1, byte param_2, byte param_3, byte param_4)
 */


uint __cdecl FUN_0041d030(byte param_1,byte param_2,byte param_3,byte param_4)

{
  return ((uint)param_4 << 0x10 | (uint)param_2) << 8 | (uint)param_3 << 0x10 | (uint)param_1;
}

