/*
 * Program: Science_Kit.exe
 * Function: FUN_0040dbc0
 * Entry: 0040dbc0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040dbc0(void * param_1)
 */


undefined4 __fastcall FUN_0040dbc0(void *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  WPARAM wParam;
  uint *puVar5;
  int local_4;
  
  puVar5 = (uint *)((int)param_1 + 0x154);
  bVar4 = 0;
  local_4 = 4;
  uVar1 = *(uint *)(*(int *)((int)param_1 + 0x178) + *(int *)((int)param_1 + 0x188) * 4);
  do {
    uVar3 = uVar1 >> (bVar4 & 0x1f) & 0xff;
    if (uVar3 == 0xec) {
      uVar3 = 0x3b;
    }
    wParam = 0;
    if (0 < *(int *)((int)param_1 + 0x9b0)) {
      puVar2 = (uint *)((int)param_1 + 0x5b0);
      do {
        if (*puVar2 == uVar3) {
          *puVar5 = uVar3;
          SendMessageA(*(HWND *)(puVar5[-5] + 0x20),0x14e,wParam,0);
          break;
        }
        puVar2 = puVar2 + 1;
        wParam = wParam + 1;
      } while ((int)wParam < *(int *)((int)param_1 + 0x9b0));
    }
    puVar5 = puVar5 + 1;
    bVar4 = bVar4 + 8;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      FUN_0040e2e0((int)param_1);
      FUN_0040dcd0(param_1);
      return 1;
    }
  } while( true );
}

