/*
 * Program: Science_Kit.exe
 * Function: FUN_0040c7c0
 * Entry: 0040c7c0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040c7c0(void * param_1)
 */


undefined4 __fastcall FUN_0040c7c0(void *param_1)

{
  undefined4 uVar1;
  UINT_PTR UVar2;
  int iVar3;
  undefined4 *puVar4;
  
  Ordinal_4173();
  uVar1 = thunk_FUN_00408190(*(int *)((int)param_1 + 0x8c));
  *(undefined4 *)((int)param_1 + 0x9cc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x150) = 1;
  FUN_0040d270((int)param_1);
  FUN_0040cbf0();
  FUN_0040cdd0();
  FUN_0040d4c0((int)param_1);
  FUN_0040d6f0((int)param_1);
  FUN_0040d320((int)param_1);
  iVar3 = 4;
  FUN_0040d950((int)param_1);
  FUN_0040d9e0(param_1);
  FUN_0040ca70((int)param_1);
  puVar4 = (undefined4 *)((int)param_1 + 0x5a0);
  do {
    uVar1 = *(undefined4 *)((int)param_1 + 0x9c0);
    *puVar4 = uVar1;
    puVar4[-4] = uVar1;
    SendMessageA(*(HWND *)(puVar4[-0x118] + 0x20),0x14e,puVar4[-0x113],0);
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
  SendMessageA(*(HWND *)((int)param_1 + 0xa78),0x14e,*(WPARAM *)((int)param_1 + 0x188),0);
  *(undefined4 *)((int)param_1 + 0x18c) = *(undefined4 *)((int)param_1 + 0x188);
  UVar2 = SetTimer(*(HWND *)((int)param_1 + 0x20),*(UINT_PTR *)((int)param_1 + 0x124),1000,
                   (TIMERPROC)0x0);
  *(UINT_PTR *)((int)param_1 + 0x128) = UVar2;
  *(undefined4 *)((int)param_1 + 0x9d4) = 1;
  FUN_0040e460(param_1);
  return 1;
}

