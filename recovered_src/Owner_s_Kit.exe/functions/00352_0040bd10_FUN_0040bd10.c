/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040bd10
 * Entry: 0040bd10
 * Namespace: Global
 * Prototype: int FUN_0040bd10(int param_1)
 */


int __fastcall FUN_0040bd10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return -1;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return -1;
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x120) + 4),1);
  }
  iVar1 = FUN_00409340((void *)(param_1 + 0x124),0xf,4,1,2,0x10,(LPCSTR)0x0);
  return -(uint)(iVar1 == 0);
}

