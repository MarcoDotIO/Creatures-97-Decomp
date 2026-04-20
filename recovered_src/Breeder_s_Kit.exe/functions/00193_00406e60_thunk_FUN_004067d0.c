/*
 * Program: Breeder_s_Kit.exe
 * Function: thunk_FUN_004067d0
 * Entry: 00406e60
 * Namespace: Global
 * Prototype: undefined thunk_FUN_004067d0(void * param_1)
 */


void __fastcall thunk_FUN_004067d0(void *param_1)

{
  uint uVar1;
  int aiStack_28 [6];
  RECT RStack_10;
  
  if (((*(int *)((int)param_1 + 0x884) != 0) && (*(int *)((int)param_1 + 0x2194) != 0)) &&
     (*(int *)((int)param_1 + 0x87c) != *(int *)((int)param_1 + 0x880))) {
    aiStack_28[0] = 0;
    aiStack_28[1] = 0;
    aiStack_28[2] = 0;
    aiStack_28[3] = 0;
    aiStack_28[4] = 100;
    aiStack_28[5] = 0x8c;
    uVar1 = (uint)(*(int *)((int)param_1 + 0xd5c) != 0);
    FUN_0040c0c0((void *)((int)param_1 + 0x7f4),*(void **)(*(int *)((int)param_1 + 0x70c) + 0x48),0,
                 aiStack_28,aiStack_28 + 2,uVar1);
    FUN_004068d0(param_1,(RECT *)0x0);
    *(uint *)((int)param_1 + 0x814) = uVar1;
    *(undefined4 *)((int)param_1 + 0x2184) = 0;
    RStack_10.left = *(LONG *)((int)param_1 + 0x858);
    RStack_10.top = *(LONG *)((int)param_1 + 0x85c);
    RStack_10.right = *(LONG *)((int)param_1 + 0x860);
    RStack_10.bottom = *(LONG *)((int)param_1 + 0x864);
    FUN_0040c0c0((void *)((int)param_1 + 0x7f4),*(void **)(*(int *)((int)param_1 + 0x70c) + 0x48),0,
                 (int *)((int)param_1 + 0x868),&RStack_10.left,*(int *)((int)param_1 + 0x87c) + 1);
    FUN_004068d0(param_1,&RStack_10);
    *(undefined4 *)((int)param_1 + 0x880) = *(undefined4 *)((int)param_1 + 0x87c);
  }
  return;
}

