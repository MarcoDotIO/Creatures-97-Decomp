/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040c7d0
 * Entry: 0040c7d0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040c7d0(int param_1)
 */


undefined4 __fastcall FUN_0040c7d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x57c);
  iVar2 = FUN_0040b600(*piVar3);
  if (iVar2 != 0) {
    iVar2 = 2;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      InvalidateRect(*(HWND *)(iVar1 + 0x20),(RECT *)0x0,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 1;
  }
  return 0;
}

