/*
 * Program: Science_Kit.exe
 * Function: FUN_0040a330
 * Entry: 0040a330
 * Namespace: Global
 * Prototype: int FUN_0040a330(int param_1)
 */


int __fastcall FUN_0040a330(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return -1;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return -1;
  }
  iVar1 = FUN_004080c0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x124));
  *(int *)(param_1 + 0x124) = iVar1;
  if (iVar1 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x128) + 4),1);
  }
  iVar1 = FUN_0040eb40((void *)(param_1 + 300),0xf,4,0,2,0x20,(LPCSTR)0x0);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = FUN_004080c0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x120));
  *(int *)(param_1 + 0x120) = iVar1;
  return -(uint)(iVar1 == 0);
}

