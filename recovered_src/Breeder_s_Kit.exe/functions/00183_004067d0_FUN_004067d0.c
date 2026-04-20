/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004067d0
 * Entry: 004067d0
 * Namespace: Global
 * Prototype: undefined FUN_004067d0(void * param_1)
 */


void __fastcall FUN_004067d0(void *param_1)

{
  uint uVar1;
  int local_28 [6];
  RECT local_10;
  
  if (((*(int *)((int)param_1 + 0x884) != 0) && (*(int *)((int)param_1 + 0x2194) != 0)) &&
     (*(int *)((int)param_1 + 0x87c) != *(int *)((int)param_1 + 0x880))) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 100;
    local_28[5] = 0x8c;
    uVar1 = (uint)(*(int *)((int)param_1 + 0xd5c) != 0);
    FUN_0040c0c0((void *)((int)param_1 + 0x7f4),*(void **)(*(int *)((int)param_1 + 0x70c) + 0x48),0,
                 local_28,local_28 + 2,uVar1);
    FUN_004068d0(param_1,(RECT *)0x0);
    *(uint *)((int)param_1 + 0x814) = uVar1;
    *(undefined4 *)((int)param_1 + 0x2184) = 0;
    local_10.left = *(LONG *)((int)param_1 + 0x858);
    local_10.top = *(LONG *)((int)param_1 + 0x85c);
    local_10.right = *(LONG *)((int)param_1 + 0x860);
    local_10.bottom = *(LONG *)((int)param_1 + 0x864);
    FUN_0040c0c0((void *)((int)param_1 + 0x7f4),*(void **)(*(int *)((int)param_1 + 0x70c) + 0x48),0,
                 (int *)((int)param_1 + 0x868),&local_10.left,*(int *)((int)param_1 + 0x87c) + 1);
    FUN_004068d0(param_1,&local_10);
    *(undefined4 *)((int)param_1 + 0x880) = *(undefined4 *)((int)param_1 + 0x87c);
  }
  return;
}

