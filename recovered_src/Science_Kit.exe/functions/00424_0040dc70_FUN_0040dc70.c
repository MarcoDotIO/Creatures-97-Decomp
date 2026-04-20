/*
 * Program: Science_Kit.exe
 * Function: FUN_0040dc70
 * Entry: 0040dc70
 * Namespace: Global
 * Prototype: undefined4 FUN_0040dc70(void * param_1)
 */


undefined4 __fastcall FUN_0040dc70(void *param_1)

{
  LRESULT LVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = (int *)((int)param_1 + 0x140);
  do {
    LVar1 = SendMessageA(*(HWND *)(*piVar2 + 0x20),0x147,0,0);
    iVar3 = iVar3 + -1;
    piVar2[5] = *(int *)((int)param_1 + LVar1 * 4 + 0x5b0);
    piVar2 = piVar2 + 1;
  } while (iVar3 != 0);
  FUN_0040e2e0((int)param_1);
  FUN_0040dcd0(param_1);
  return 1;
}

