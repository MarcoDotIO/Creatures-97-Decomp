/*
 * Program: Creatures.exe
 * Function: FUN_0042dbc0
 * Entry: 0042dbc0
 * Namespace: Global
 * Prototype: undefined FUN_0042dbc0(int param_1)
 */


void __fastcall FUN_0042dbc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00438868;
  if (DAT_00438868 != 0) {
    iVar2 = 500;
    if (DAT_00436ee8 < 100) {
      iVar2 = 0xfa;
    }
    iVar1 = rand();
    if (iVar1 % (iVar2 + 1) == 0) {
      iVar2 = rand();
      iVar3 = *(int *)(DAT_00438864 + (iVar2 % iVar3) * 4);
      iVar2 = rand();
      FUN_00401390((void *)(param_1 + 0x740 + (iVar2 % 100) * 0xc),iVar3);
    }
  }
  return;
}

