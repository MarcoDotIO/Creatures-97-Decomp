/*
 * Program: Score_Kit.exe
 * Function: FUN_00403600
 * Entry: 00403600
 * Namespace: Global
 * Prototype: undefined4 FUN_00403600(void * param_1)
 */


undefined4 __fastcall FUN_00403600(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  UINT_PTR UVar3;
  
  Ordinal_4173();
  uVar1 = FUN_00406e30(*(int *)((int)param_1 + 0x8c));
  *(undefined4 *)((int)param_1 + 0x604) = uVar1;
  *(undefined4 *)((int)param_1 + 0x56c) = 0;
  *(undefined4 *)((int)param_1 + 0x570) = 0;
  *(undefined4 *)((int)param_1 + 0x574) = 0;
  *(undefined4 *)((int)param_1 + 0x578) = 0;
  *(undefined4 *)((int)param_1 + 0x568) = 0;
  *(undefined4 *)((int)param_1 + 0x57c) = 0x14;
  *(undefined4 *)((int)param_1 + 0x580) = 0x45;
  *(undefined4 *)((int)param_1 + 0x584) = 0x80;
  *(undefined4 *)((int)param_1 + 0x588) = 0xba;
  *(undefined4 *)((int)param_1 + 0x58c) = 0;
  FUN_00403890((int)param_1);
  iVar2 = FUN_004038d0((int)param_1);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = FUN_00404520((int)param_1);
  if (iVar2 == 0) {
    return 1;
  }
  FUN_00404210((int)param_1);
  UVar3 = SetTimer(*(HWND *)((int)param_1 + 0x20),*(UINT_PTR *)((int)param_1 + 0x610),1000,
                   (TIMERPROC)0x0);
  *(UINT_PTR *)((int)param_1 + 0x614) = UVar3;
  *(undefined4 *)((int)param_1 + 0x624) = 1;
  FUN_00403820(param_1);
  return 1;
}

