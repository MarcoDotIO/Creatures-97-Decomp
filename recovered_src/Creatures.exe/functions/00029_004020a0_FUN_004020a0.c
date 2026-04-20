/*
 * Program: Creatures.exe
 * Function: FUN_004020a0
 * Entry: 004020a0
 * Namespace: Global
 * Prototype: undefined FUN_004020a0(int param_1)
 */


void FUN_004020a0(int param_1)

{
  HINSTANCE pHVar1;
  HICON pHVar2;
  HCURSOR pHVar3;
  undefined4 uVar4;
  LPCSTR pCVar5;
  
  Ordinal_1035();
  Ordinal_1035();
  pCVar5 = (LPCSTR)0x80;
  pHVar1 = (HINSTANCE)Ordinal_1014(0x80,0xe);
  pHVar2 = LoadIconA(pHVar1,pCVar5);
  uVar4 = 0;
  pCVar5 = (LPCSTR)0x84;
  pHVar1 = (HINSTANCE)Ordinal_1014(0x84,0xc);
  pHVar3 = LoadCursorA(pHVar1,pCVar5);
  uVar4 = Ordinal_1090(0xb,pHVar3,uVar4,pHVar2);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  Ordinal_4676(param_1);
  return;
}

