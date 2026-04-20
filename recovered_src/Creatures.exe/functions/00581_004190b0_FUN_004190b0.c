/*
 * Program: Creatures.exe
 * Function: FUN_004190b0
 * Entry: 004190b0
 * Namespace: Global
 * Prototype: undefined FUN_004190b0(int * param_1)
 */


void __fastcall FUN_004190b0(int *param_1)

{
  if (DAT_004352c8 == param_1) {
    DAT_004352c8 = (int *)0x0;
  }
  FUN_0041c1b0(DAT_00436ebc,(int)param_1,1);
  FUN_00423cc0((int)param_1);
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0x4140;
  *(undefined4 *)((int)param_1 + 0x16) = 0x960;
  (**(code **)(*param_1 + 0x54))(1000,4000);
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  if (DAT_004382c4 == param_1) {
    FUN_004069f0(0,1);
  }
  if ((param_1[1] & 0xff000000U) == 0x4000000) {
    FUN_00412350();
  }
  Ordinal_5191(DAT_00437fd8,param_1);
  return;
}

