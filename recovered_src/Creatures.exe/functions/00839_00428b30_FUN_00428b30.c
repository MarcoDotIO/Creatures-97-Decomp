/*
 * Program: Creatures.exe
 * Function: FUN_00428b30
 * Entry: 00428b30
 * Namespace: Global
 * Prototype: byte FUN_00428b30(byte * param_1, byte param_2, uint param_3)
 */


byte __cdecl FUN_00428b30(byte *param_1,byte param_2,uint param_3)

{
  if ((*(uint *)(&DAT_00436e08 + (uint)(param_2 >> 3) * 4) & param_3) ==
      *(uint *)(&DAT_00436e08 + (uint)(param_2 >> 3) * 4)) {
    *param_1 = (byte)((uint)*param_1 * *(int *)(&DAT_00436d88 + (uint)(param_2 >> 3) * 4) >> 0x10);
    return *param_1;
  }
  return *param_1;
}

