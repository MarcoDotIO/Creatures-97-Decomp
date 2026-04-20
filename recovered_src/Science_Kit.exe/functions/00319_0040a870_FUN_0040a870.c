/*
 * Program: Science_Kit.exe
 * Function: FUN_0040a870
 * Entry: 0040a870
 * Namespace: Global
 * Prototype: undefined4 FUN_0040a870(void * param_1)
 */


undefined4 __fastcall FUN_0040a870(void *param_1)

{
  WPARAM wParam;
  UINT_PTR UVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  Ordinal_4173();
  *(undefined4 *)((int)param_1 + 0x1d8) = 1;
  *(undefined4 *)((int)param_1 + 0x240) = 0;
  *(undefined4 *)((int)param_1 + 0x23c) = 1;
  puVar4 = (undefined4 *)((int)param_1 + 0x18c);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  Ordinal_1440(0x478,param_1);
  Ordinal_1440(0x47d,param_1);
  FUN_0040ab50((int)param_1);
  iVar2 = FUN_0040ad00((int)param_1);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = 0;
  FUN_0040eb40((void *)((int)param_1 + 0x148),0xe,4,0,2,0x20,(LPCSTR)0x0);
  do {
    if (iVar2 != 0xc) {
      if (((iVar2 == 2 || iVar2 == 5) || iVar2 == 1) || iVar2 == 0) {
        iVar3 = *(int *)((int)param_1 + iVar2 * 4 + 0x1dc);
joined_r0x0040a994:
        wParam = 0;
        if (param_1 != (void *)0xfffffeb8) {
          wParam = *(WPARAM *)((int)param_1 + 0x14c);
        }
      }
      else {
        iVar3 = *(int *)((int)param_1 + iVar2 * 4 + 0x1dc);
        if ((iVar2 != 10 && iVar2 != 0xb) && iVar2 != 0xc) goto joined_r0x0040a994;
        wParam = 0;
        if (param_1 != (void *)0xfffffed4) {
          wParam = *(WPARAM *)((int)param_1 + 0x130);
        }
      }
      SendMessageA(*(HWND *)(iVar3 + 0x20),0x30,wParam,1);
    }
    iVar2 = iVar2 + 1;
    if (0x12 < iVar2) {
      FUN_0040b2f0((int)param_1);
      FUN_0040a440((int)param_1);
      UVar1 = SetTimer(*(HWND *)((int)param_1 + 0x20),*(UINT_PTR *)((int)param_1 + 0x1d0),0x55,
                       (TIMERPROC)0x0);
      *(UINT_PTR *)((int)param_1 + 0x1d4) = UVar1;
      *(undefined4 *)((int)param_1 + 0x304) = 1;
      FUN_0040aad0(param_1);
      return 1;
    }
  } while( true );
}

