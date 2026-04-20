/*
 * Program: Health_Kit.exe
 * Function: FUN_0040a8b0
 * Entry: 0040a8b0
 * Namespace: Global
 * Prototype: int FUN_0040a8b0(int param_1)
 */


int __fastcall FUN_0040a8b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return -1;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return -1;
  }
  iVar1 = FUN_00407ec0(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = iVar1;
  if (iVar1 == 0) {
    return -1;
  }
  *(undefined4 *)(param_1 + 300) = 1;
  if (*(int *)(param_1 + 0xbc) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0xbc) + 4),1);
  }
  iVar1 = FUN_0040b580((void *)(param_1 + 0x9c),0x12,4,0,2,0x20,(LPCSTR)0x0);
  return -(uint)(iVar1 == 0);
}

