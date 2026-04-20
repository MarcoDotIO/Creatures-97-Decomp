/*
 * Program: Creatures.exe
 * Function: FUN_0040cf00
 * Entry: 0040cf00
 * Namespace: Global
 * Prototype: undefined FUN_0040cf00(int param_1)
 */


void __fastcall FUN_0040cf00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xd) * *(int *)(param_1 + 0x11) + 1U & 0xfffffffe;
  while (700000 < DAT_00435f54 + uVar2) {
    FUN_0040cf60();
  }
  while (iVar1 = Ordinal_729(uVar2), iVar1 == 0) {
    FUN_0040cf60();
  }
  DAT_00435f54 = DAT_00435f54 + uVar2;
  DAT_00435f50 = DAT_00435f50 + 1;
  return;
}

