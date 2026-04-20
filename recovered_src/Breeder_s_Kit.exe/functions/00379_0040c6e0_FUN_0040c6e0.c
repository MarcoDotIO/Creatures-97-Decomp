/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040c6e0
 * Entry: 0040c6e0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040c6e0(void * param_1)
 */


undefined4 __fastcall FUN_0040c6e0(void *param_1)

{
  int iVar1;
  int iVar2;
  UINT_PTR UVar3;
  undefined4 *puVar4;
  
  Ordinal_4173();
  FUN_0040c860((int)param_1);
  iVar1 = FUN_0040ccb0((int)param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_0040c8e0((int)param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = 0;
  FUN_00409ac0((void *)((int)param_1 + 0x5fc),0x10,1,0,2,0x20,(LPCSTR)0x0);
  FUN_0040c8a0((int)param_1);
  do {
    iVar2 = iVar1 / 0x19;
    iVar1 = iVar1 + 1;
    *(int *)((int)param_1 + iVar1 * 4 + 0x628) = iVar2 + 1;
  } while (iVar1 < 200);
  if (iVar1 < 0x100) {
    puVar4 = (undefined4 *)((int)param_1 + iVar1 * 4 + 0x62c);
    for (iVar2 = 0x100 - iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 8;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x62c) = 0;
  FUN_0040c810(param_1);
  UVar3 = *(UINT_PTR *)((int)param_1 + 0xa40);
  *(UINT_PTR *)((int)param_1 + 0xa40) = UVar3 + 1;
  UVar3 = SetTimer(*(HWND *)((int)param_1 + 0x20),UVar3,100,(TIMERPROC)0x0);
  *(UINT_PTR *)((int)param_1 + 0xa44) = UVar3;
  return 1;
}

