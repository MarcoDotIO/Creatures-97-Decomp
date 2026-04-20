/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040ae80
 * Entry: 0040ae80
 * Namespace: Global
 * Prototype: uint FUN_0040ae80(void * param_1)
 */


uint __fastcall FUN_0040ae80(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00401bc0(param_1,s_Funeral_bmp_00410610);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0040b570((int)param_1);
  return (iVar2 == 0) - 1 & uVar1;
}

