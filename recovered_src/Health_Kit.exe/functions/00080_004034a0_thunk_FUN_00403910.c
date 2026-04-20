/*
 * Program: Health_Kit.exe
 * Function: thunk_FUN_00403910
 * Entry: 004034a0
 * Namespace: Global
 * Prototype: undefined4 thunk_FUN_00403910(void * param_1)
 */


undefined4 __fastcall thunk_FUN_00403910(void *param_1)

{
  void *this;
  void *this_00;
  LONG LVar1;
  int iVar2;
  int aiStack_40 [2];
  RECT RStack_38;
  int aiStack_28 [2];
  RECT RStack_20;
  RECT RStack_10;
  
  aiStack_40[0] = 0xaf;
  RStack_38.left = 0xaf;
  this = (void *)((int)param_1 + 0xe00);
  aiStack_40[1] = 0x1f;
  RStack_38.top = 0x1f;
  this_00 = (void *)((int)param_1 + 0x94);
  RStack_38.right = 0xce;
  RStack_38.bottom = 0x57;
  FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,aiStack_40,(int *)0x0,0);
  FUN_00408dc0(this_00,&RStack_38,0,0);
  FUN_00403b80((int)param_1);
  LVar1 = *(LONG *)((int)param_1 + 0x188);
  rand();
  rand();
  switch(*(undefined4 *)((int)param_1 + 0x1b8)) {
  case 1:
    FUN_00403c20(param_1,0xa5);
    FUN_00403480((int)param_1);
    break;
  case 2:
    FUN_00403cd0(param_1,(*(int *)((int)param_1 + 400) >> 1) + 0xa5);
    break;
  case 3:
    if (*(int *)((int)param_1 + 0xe48) == 1) {
      *(undefined4 *)((int)param_1 + 0xe44) = 0;
      *(undefined4 *)((int)param_1 + 0xe48) = 0;
    }
    if (*(int *)((int)param_1 + 0xe40) == 8) {
      FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,aiStack_40,(int *)0x0,1);
    }
    if (*(int *)((int)param_1 + 0xe40) == 0xf) {
      FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,aiStack_40,(int *)0x0,1);
      *(undefined4 *)((int)param_1 + 0xe40) = 0;
    }
    *(int *)((int)param_1 + 0xe40) = *(int *)((int)param_1 + 0xe40) + 1;
    FUN_00408dc0(this_00,&RStack_38,0,0);
    iVar2 = *(int *)((int)param_1 + 400) >> 1;
    goto LAB_00403a96;
  case 4:
    FUN_00403cd0(param_1,*(int *)((int)param_1 + 400) + 0xa5);
    break;
  case 5:
    iVar2 = *(int *)((int)param_1 + 400);
LAB_00403a96:
    FUN_00403c20(param_1,0xa5 - iVar2);
    break;
  default:
    FUN_00403bb0(param_1);
  }
  *(int *)((int)param_1 + 0x1b8) = *(int *)((int)param_1 + 0x1b8) + -1;
  RStack_20.right = *(int *)((int)param_1 + 0x188) + 4;
  *(LONG *)((int)param_1 + 0x188) = RStack_20.right;
  RStack_20.top = 0x87;
  RStack_20.bottom = 0xc3;
  RStack_20.left = LVar1;
  FUN_00403fe0(param_1,&RStack_20);
  aiStack_28[0] = 199;
  aiStack_28[1] = 0x84;
  RStack_10.left = 199;
  RStack_10.top = 0x84;
  RStack_10.right = 0xe7;
  RStack_10.bottom = 0x9e;
  if (*(int *)((int)param_1 + 0xe40) == 9) {
    FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,aiStack_40,(int *)0x0,1);
  }
  FUN_004099a0((void *)((int)param_1 + 0xdcc),*(void **)((int)param_1 + 0xdc),1,aiStack_28,
               (int *)0x0,*(int *)((int)param_1 + 0xdfc));
  FUN_00408dc0(this_00,&RStack_10,0,0);
  return 1;
}

