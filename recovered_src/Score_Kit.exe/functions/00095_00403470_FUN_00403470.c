/*
 * Program: Score_Kit.exe
 * Function: FUN_00403470
 * Entry: 00403470
 * Namespace: Global
 * Prototype: undefined4 FUN_00403470(int param_1)
 */


undefined4 __fastcall FUN_00403470(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0xffffffff;
  }
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00406d60(*(void **)(param_1 + 0x8c),1,*(int *)(param_1 + 0x5f8));
  *(int *)(param_1 + 0x5f8) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x60c) != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x20),0x30,*(WPARAM *)(*(int *)(param_1 + 0x60c) + 4),1);
  }
  FUN_00407e40((void *)(param_1 + 0x5dc),0x10,4,0,2,0x20,(LPCSTR)0x0);
  return 0;
}

