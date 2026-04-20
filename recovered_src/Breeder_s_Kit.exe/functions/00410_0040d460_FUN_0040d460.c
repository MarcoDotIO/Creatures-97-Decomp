/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040d460
 * Entry: 0040d460
 * Namespace: Global
 * Prototype: undefined FUN_0040d460(void * param_1)
 */


void __fastcall FUN_0040d460(void *param_1)

{
  uint uVar1;
  int local_28 [6];
  RECT local_10;
  
  uVar1 = (uint)(*(int *)((int)param_1 + 0xa2c) != 0);
  if (*(uint *)((int)param_1 + 0x5ac) != uVar1) {
    local_28[4] = 100;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[5] = 0x71;
    local_28[3] = 0;
    FUN_0040c0c0((void *)((int)param_1 + 0x58c),*(void **)(*(int *)((int)param_1 + 0x57c) + 0x48),0,
                 local_28,local_28 + 2,uVar1);
    FUN_0040d550(param_1,(RECT *)0x0);
    *(uint *)((int)param_1 + 0x5ac) = uVar1;
    *(undefined4 *)((int)param_1 + 0x624) = 0;
    return;
  }
  if (*(int *)((int)param_1 + 0x624) != *(int *)((int)param_1 + 0x620)) {
    local_10.top = *(LONG *)((int)param_1 + 0x5e0);
    local_10.left = *(LONG *)((int)param_1 + 0x5dc);
    local_10.right = *(LONG *)((int)param_1 + 0x5e4);
    local_10.bottom = *(LONG *)((int)param_1 + 0x5e8);
    FUN_0040c0c0((void *)((int)param_1 + 0x58c),*(void **)(*(int *)((int)param_1 + 0x57c) + 0x48),0,
                 (int *)((int)param_1 + 0x5ec),&local_10.left,*(int *)((int)param_1 + 0x620) + 1);
    FUN_0040d550(param_1,&local_10);
    *(undefined4 *)((int)param_1 + 0x624) = *(undefined4 *)((int)param_1 + 0x620);
  }
  return;
}

