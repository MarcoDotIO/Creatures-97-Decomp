/*
 * Program: Health_Kit.exe
 * Function: FUN_00403910
 * Entry: 00403910
 * Namespace: Global
 * Prototype: undefined4 FUN_00403910(void * param_1)
 */


undefined4 __fastcall FUN_00403910(void *param_1)

{
  void *this;
  void *this_00;
  LONG LVar1;
  int iVar2;
  int local_40 [2];
  RECT local_38;
  int local_28 [2];
  RECT local_20;
  RECT local_10;
  
  local_40[0] = 0xaf;
  local_38.left = 0xaf;
  this = (void *)((int)param_1 + 0xe00);
  local_40[1] = 0x1f;
  local_38.top = 0x1f;
  this_00 = (void *)((int)param_1 + 0x94);
  local_38.right = 0xce;
  local_38.bottom = 0x57;
  FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,local_40,(int *)0x0,0);
  FUN_00408dc0(this_00,&local_38,0,0);
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
      FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,local_40,(int *)0x0,1);
    }
    if (*(int *)((int)param_1 + 0xe40) == 0xf) {
      FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,local_40,(int *)0x0,1);
      *(undefined4 *)((int)param_1 + 0xe40) = 0;
    }
    *(int *)((int)param_1 + 0xe40) = *(int *)((int)param_1 + 0xe40) + 1;
    FUN_00408dc0(this_00,&local_38,0,0);
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
  local_20.right = *(int *)((int)param_1 + 0x188) + 4;
  *(LONG *)((int)param_1 + 0x188) = local_20.right;
  local_20.top = 0x87;
  local_20.bottom = 0xc3;
  local_20.left = LVar1;
  FUN_00403fe0(param_1,&local_20);
  local_28[0] = 199;
  local_28[1] = 0x84;
  local_10.left = 199;
  local_10.top = 0x84;
  local_10.right = 0xe7;
  local_10.bottom = 0x9e;
  if (*(int *)((int)param_1 + 0xe40) == 9) {
    FUN_004099a0(this,*(void **)((int)param_1 + 0xdc),1,local_40,(int *)0x0,1);
  }
  FUN_004099a0((void *)((int)param_1 + 0xdcc),*(void **)((int)param_1 + 0xdc),1,local_28,(int *)0x0,
               *(int *)((int)param_1 + 0xdfc));
  FUN_00408dc0(this_00,&local_10,0,0);
  return 1;
}

