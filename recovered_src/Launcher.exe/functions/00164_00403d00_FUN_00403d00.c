/*
 * Program: Launcher.exe
 * Function: FUN_00403d00
 * Entry: 00403d00
 * Namespace: Global
 * Prototype: int FUN_00403d00(_onexit_t param_1)
 */


int __cdecl FUN_00403d00(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403c60(param_1);
  return -(uint)(iVar1 == 0);
}

