/*
 * Program: Creatures.exe
 * Function: FUN_0040c1f0
 * Entry: 0040c1f0
 * Namespace: Global
 * Prototype: undefined FUN_0040c1f0(void)
 */


void FUN_0040c1f0(void)

{
  int *piVar1;
  
  piVar1 = &DAT_00438b24;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x54))();
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))(1);
      }
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 3;
  } while (piVar1 < &DAT_00438b9c);
  return;
}

