/*
 * Program: Health_Kit.exe
 * Function: FUN_004032c0
 * Entry: 004032c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004032c0(int param_1)
 */


undefined4 __fastcall FUN_004032c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x184) = 0x37;
  *(undefined4 *)(param_1 + 0x180) = 0xb1;
  *(undefined4 *)(param_1 + 0x178) = 0x60;
  *(undefined4 *)(param_1 + 0x17c) = 0x6a;
  SetRect((LPRECT)(param_1 + 0x150),0x37,0x60,0xb1,0x6a);
  *(LPRECT *)(param_1 + 0x160) = (LPRECT)(param_1 + 0x150);
  return 1;
}

