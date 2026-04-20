/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004072f0
 * Entry: 004072f0
 * Namespace: Global
 * Prototype: undefined4 FUN_004072f0(int param_1)
 */


undefined4 FUN_004072f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 10;
  iVar2 = param_1 + 8;
  do {
    Ordinal_760(iVar2);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}

