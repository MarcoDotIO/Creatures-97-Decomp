/*
 * Program: Hatchery.exe
 * Function: FUN_00406930
 * Entry: 00406930
 * Namespace: Global
 * Prototype: undefined FUN_00406930(int param_1, int param_2, int param_3, int param_4)
 */


void __cdecl FUN_00406930(int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if (0x13f < param_1) {
    param_1 = 0x13f;
  }
  if (0xef < param_2) {
    param_2 = 0xef;
  }
  if (0x13f < param_3) {
    param_3 = 0x13f;
  }
  if (0xef < param_4) {
    param_4 = 0xef;
  }
  SetRect((LPRECT)&DAT_0040a870,param_1,param_2,param_3,param_4);
  return;
}

