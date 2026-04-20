/*
 * Program: Creatures.exe
 * Function: FUN_0040cfd0
 * Entry: 0040cfd0
 * Namespace: Global
 * Prototype: undefined FUN_0040cfd0(int param_1)
 */


void __fastcall FUN_0040cfd0(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    Ordinal_731(*(undefined4 *)(param_1 + 9));
    DAT_00435f50 = DAT_00435f50 + -1;
    DAT_00435f54 = DAT_00435f54 -
                   (*(int *)(param_1 + 0xd) * *(int *)(param_1 + 0x11) + 1U & 0xfffffffe);
  }
  return;
}

