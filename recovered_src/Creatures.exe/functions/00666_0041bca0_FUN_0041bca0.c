/*
 * Program: Creatures.exe
 * Function: FUN_0041bca0
 * Entry: 0041bca0
 * Namespace: Global
 * Prototype: undefined FUN_0041bca0(int param_1)
 */


void __fastcall FUN_0041bca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = FUN_0041bd10(param_1);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = rand();
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    *(uint *)(param_1 + 0x10) =
         ((iVar1 % 0x1a + 0x41) * 0x10000 | iVar2 % 0x1a + 0x41U) << 8 |
         (iVar3 % 0x1a + 0x41) * 0x10000 | iVar4 % 10 + 0x30U;
  } while( true );
}

