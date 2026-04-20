/*
 * Program: Health_Kit.exe
 * Function: FUN_00402fb0
 * Entry: 00402fb0
 * Namespace: Global
 * Prototype: undefined4 FUN_00402fb0(int param_1)
 */


undefined4 __fastcall FUN_00402fb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x100) = 0x1d;
  *(undefined4 *)(param_1 + 0x104) = 0xb7;
  iVar1 = Ordinal_729(0x400);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00403010(iVar1);
  if (iVar2 == 0) {
    Ordinal_731(iVar1);
    return 0;
  }
  Ordinal_731(iVar1);
  return 1;
}

