/*
 * Program: Creatures.exe
 * Function: FUN_00421bd0
 * Entry: 00421bd0
 * Namespace: Global
 * Prototype: undefined FUN_00421bd0(int param_1)
 */


void __fastcall FUN_00421bd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    FUN_0042beb0(*(void **)(param_1 + 0x2ac8),6,iVar2,0);
    iVar2 = iVar1;
  } while (iVar1 < 0x10);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    FUN_0042beb0(*(void **)(param_1 + 0x2ac8),5,iVar2,0);
    iVar2 = iVar1;
  } while (iVar1 < 0x20);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    FUN_0042beb0(*(void **)(param_1 + 0x2ac8),2,iVar2,0);
    iVar2 = iVar1;
  } while (iVar1 < 0x28);
  return;
}

