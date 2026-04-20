/*
 * Program: Creatures.exe
 * Function: FUN_0040d170
 * Entry: 0040d170
 * Namespace: Global
 * Prototype: undefined FUN_0040d170(void)
 */


void FUN_0040d170(void)

{
  FUN_0040c1f0();
  Ordinal_731(DAT_00438b9c);
  while (DAT_00438a10 != 0) {
    if ((int *)*DAT_00438a0c != (int *)0x0) {
      (**(code **)(*(int *)*DAT_00438a0c + 4))(1);
    }
  }
  return;
}

