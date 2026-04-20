/*
 * Program: Creatures.exe
 * Function: FUN_004054f0
 * Entry: 004054f0
 * Namespace: Global
 * Prototype: undefined FUN_004054f0(int * param_1)
 */


void __fastcall FUN_004054f0(int *param_1)

{
  int iVar1;
  
  FUN_0040bb60();
  if (DAT_00436eb4 != (int *)0x0) {
    FUN_00429000(DAT_00436eb4);
    if (DAT_00436eb4 != (int *)0x0) {
      (**(code **)(*DAT_00436eb4 + 4))(1);
    }
    DAT_00436eb4 = (int *)0x0;
  }
  if (*(int *)(DAT_00436ea0 + 200) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x7c))(s_World_sfc_00435c18);
    if (iVar1 == 0) {
      Ordinal_1060(0xef24,0,0xffffffff);
    }
  }
  Ordinal_3902();
  return;
}

