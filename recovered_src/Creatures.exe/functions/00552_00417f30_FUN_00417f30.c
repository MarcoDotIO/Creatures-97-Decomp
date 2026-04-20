/*
 * Program: Creatures.exe
 * Function: FUN_00417f30
 * Entry: 00417f30
 * Namespace: Global
 * Prototype: undefined FUN_00417f30(int * param_1)
 */


void __fastcall FUN_00417f30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = (**(code **)(iVar2 + 0x70))();
  param_1[0x51] = iVar1 << 8;
  iVar2 = (**(code **)(iVar2 + 0x74))();
  param_1[0x52] = iVar2 << 8;
  return;
}

