/*
 * Program: Creatures.exe
 * Function: FUN_0041bb40
 * Entry: 0041bb40
 * Namespace: Global
 * Prototype: uint FUN_0041bb40(int param_1)
 */


uint __fastcall FUN_0041bb40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  return (uint)*(byte *)(iVar1 + 4) << 0x10 | (uint)*(byte *)(iVar1 + 5) << 8 |
         (uint)*(byte *)(iVar1 + 6);
}

