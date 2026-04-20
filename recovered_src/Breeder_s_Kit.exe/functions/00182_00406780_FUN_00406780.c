/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406780
 * Entry: 00406780
 * Namespace: Global
 * Prototype: undefined FUN_00406780(void * param_1)
 */


void __fastcall FUN_00406780(void *param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = IsWindow(*(HWND *)((int)param_1 + 0x20));
  if (BVar1 != 0) {
    iVar2 = FUN_00406e70((int)param_1);
    if (iVar2 != 0) {
      FUN_004067d0(param_1);
      FUN_00406ba0(param_1);
      FUN_00406a50(param_1);
      FUN_00406d00(param_1);
      FUN_004068f0(param_1);
    }
  }
  return;
}

