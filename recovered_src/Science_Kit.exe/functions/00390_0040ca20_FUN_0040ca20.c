/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ca20
 * Entry: 0040ca20
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ca20(void * param_1)
 */


undefined4 __fastcall FUN_0040ca20(void *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) {
    uVar1 = FUN_0040d9e0(param_1);
    return uVar1;
  }
  return 1;
}

