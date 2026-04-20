/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406ba0
 * Entry: 00406ba0
 * Namespace: Global
 * Prototype: undefined FUN_00406ba0(void * param_1)
 */


void __fastcall FUN_00406ba0(void *param_1)

{
  int iVar1;
  int local_48;
  LONG local_44;
  tagRECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  RECT local_10;
  
  if (((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x20) != 0)) &&
     (*(int *)((int)param_1 + 0xd44) != *(int *)((int)param_1 + 0xd40))) {
    iVar1 = *(int *)((int)param_1 + 0xcc0);
    CopyRect(&local_30,(RECT *)((int)param_1 + 0xcf4));
    OffsetRect(&local_30,*(int *)((int)param_1 + 0xcb4),iVar1 - *(int *)((int)param_1 + 0xd44));
    local_48 = 0;
    local_44 = 0;
    FUN_0040c0c0((void *)((int)param_1 + 0x754),*(void **)((int)param_1 + 0x5c4),0,&local_48,
                 &local_30.left,1);
    *(undefined4 *)((int)param_1 + 0xd44) = *(undefined4 *)((int)param_1 + 0xd40);
    CopyRect(&local_40,(RECT *)((int)param_1 + 0xcf4));
    OffsetRect(&local_40,*(int *)((int)param_1 + 0xcb4),iVar1 - *(int *)((int)param_1 + 0xd40));
    local_48 = local_40.left;
    local_44 = local_40.top;
    FUN_0040c0c0((void *)((int)param_1 + 0x754),*(void **)((int)param_1 + 0x5c4),1,&local_48,
                 &local_40.left,2);
    UnionRect(&local_20,&local_40,&local_30);
    local_10.left = local_20.left;
    local_10.top = local_20.top;
    local_10.right = local_20.right;
    local_10.bottom = local_20.bottom;
    FUN_00406ce0(param_1,&local_10);
  }
  return;
}

