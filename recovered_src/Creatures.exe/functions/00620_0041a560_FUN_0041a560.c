/*
 * Program: Creatures.exe
 * Function: FUN_0041a560
 * Entry: 0041a560
 * Namespace: Global
 * Prototype: undefined FUN_0041a560(int param_1)
 */


void __fastcall FUN_0041a560(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x16) != 0) && (**(char **)(param_1 + 0x1a) != '\0')) {
    if (**(char **)(param_1 + 0x1a) == 'R') {
      *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x16);
    }
    cVar1 = **(char **)(param_1 + 0x1a);
    *(char **)(param_1 + 0x1a) = *(char **)(param_1 + 0x1a) + 1;
    *(char *)(param_1 + 8) = *(char *)(param_1 + 9) + cVar1 + -0x30;
  }
  return;
}

