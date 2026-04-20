/*
 * Program: Science_Kit.exe
 * Function: FUN_0040c600
 * Entry: 0040c600
 * Namespace: Global
 * Prototype: int FUN_0040c600(int param_1)
 */


int __fastcall FUN_0040c600(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return -1;
  }
  iVar2 = Ordinal_2081();
  if (iVar2 == -1) {
    return -1;
  }
  iVar2 = FUN_004080c0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = iVar2;
  if (iVar2 == 0) {
    return -1;
  }
  *(undefined4 *)(param_1 + 0xdc) = 6;
  *(undefined4 *)(param_1 + 0xe0) = 0x32;
  *(undefined4 *)(param_1 + 0xd8) = 2;
  if (*(int *)(param_1 + 0x9c) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x9c) + 4),1);
  }
  bVar1 = FUN_0040d2b0(param_1);
  return -(uint)(CONCAT31(extraout_var,bVar1) == 0);
}

