/*
 * Program: Creatures.exe
 * Function: FUN_0040eef0
 * Entry: 0040eef0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040eef0(int param_1)
 */


undefined4 __fastcall FUN_0040eef0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (((cVar1 = *(char *)(param_1 + 0x8e + iVar2), cVar1 < '0' || ('9' < cVar1)) ||
         (*(char *)(param_1 + 0x7e + iVar2) == cVar1))) {
    iVar2 = iVar2 + 1;
    if (0xe < iVar2) {
      return 1;
    }
  }
  return 0;
}

