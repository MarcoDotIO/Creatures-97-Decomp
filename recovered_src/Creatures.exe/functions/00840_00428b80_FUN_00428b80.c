/*
 * Program: Creatures.exe
 * Function: FUN_00428b80
 * Entry: 00428b80
 * Namespace: Global
 * Prototype: byte FUN_00428b80(byte * param_1, byte param_2, byte param_3, uint param_4)
 */


byte __cdecl FUN_00428b80(byte *param_1,byte param_2,byte param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(uint *)(&DAT_00436e08 + (uint)(param_2 >> 3) * 4) & param_4) !=
      *(uint *)(&DAT_00436e08 + (uint)(param_2 >> 3) * 4)) {
    return *param_1;
  }
  uVar2 = (uint)*param_1 - (uint)param_3;
  uVar3 = (int)uVar2 >> 0x1f;
  cVar1 = (char)(((uVar2 ^ uVar3) - uVar3) * *(int *)(&DAT_00436d88 + (uint)(param_2 >> 3) * 4) >>
                0x10);
  if (param_3 < *param_1) {
    return param_3 + cVar1;
  }
  return param_3 - cVar1;
}

