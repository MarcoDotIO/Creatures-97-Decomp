/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004055b0
 * Entry: 004055b0
 * Namespace: Global
 * Prototype: undefined FUN_004055b0(int param_1)
 */


void __fastcall FUN_004055b0(int param_1)

{
  FUN_00407030(param_1);
  if (*(int *)(param_1 + 0x820) != 0) {
    Ordinal_731(*(int *)(param_1 + 0x820));
    *(undefined4 *)(param_1 + 0x820) = 0;
  }
  if (*(int *)(param_1 + 0x824) != 0) {
    Ordinal_731(*(int *)(param_1 + 0x824));
    *(undefined4 *)(param_1 + 0x824) = 0;
  }
  FUN_00405dc0(param_1);
  Ordinal_2293();
  Ordinal_2081();
  return;
}

