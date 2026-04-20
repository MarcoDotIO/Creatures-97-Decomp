/*
 * Program: Science_Kit.exe
 * Function: FUN_0040aad0
 * Entry: 0040aad0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040aad0(void * param_1)
 */


undefined4 __fastcall FUN_0040aad0(void *param_1)

{
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) {
    *(undefined4 *)((int)param_1 + 0x850) = 0;
    *(undefined4 *)((int)param_1 + 0x878) = 0;
    *(undefined4 *)((int)param_1 + 0x870) = 0;
    FUN_0040ae40((int)param_1);
    FUN_0040add0((int)param_1);
    FUN_0040ac90(param_1);
    FUN_0040a550((int)param_1);
    *(undefined4 *)((int)param_1 + 0x23c) = 1;
    *(undefined4 *)((int)param_1 + 0x240) = 0;
    FUN_0040a710(param_1,0);
    FUN_0040a6c0(param_1,*(int *)((int)param_1 + 0x23c));
    Ordinal_5610(0);
    return 1;
  }
  return 1;
}

