/*
 * Program: Creatures.exe
 * Function: FUN_00422ff0
 * Entry: 00422ff0
 * Namespace: Global
 * Prototype: undefined FUN_00422ff0(void * param_1)
 */


void __fastcall FUN_00422ff0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2b78) == '\0') {
    FUN_00423070(param_1);
    FUN_004150e0(param_1,0x48,param_1,0);
    *(undefined1 *)((int)param_1 + 0x2b78) = 0xff;
    *(undefined1 *)((int)param_1 + 0x114) = 0;
    FUN_00412350();
    if (DAT_004382c4 == param_1) {
      if (DAT_00436eb4 != (int *)0x0) {
        FUN_00429000(DAT_00436eb4);
        if (DAT_00436eb4 != (int *)0x0) {
          (**(code **)(*DAT_00436eb4 + 4))(1);
        }
        DAT_00436eb4 = (int *)0x0;
      }
      FUN_0041d060(2,8,0,0);
    }
  }
  return;
}

