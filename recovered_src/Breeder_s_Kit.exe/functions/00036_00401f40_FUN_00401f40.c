/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00401f40
 * Entry: 00401f40
 * Namespace: Global
 * Prototype: undefined FUN_00401f40(void * this, int param_1)
 */


void __thiscall FUN_00401f40(void *this,int param_1)

{
  int iVar1;
  int local_48 [2];
  tagRECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  RECT local_10;
  
  if (param_1 < 0x101) {
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x80);
    *(int *)((int)this + 0x78) = iVar1;
    if (*(int *)((int)this + 0x7c) != iVar1) {
      local_40.top = *(LONG *)((int)this + 0x6c);
      local_40.right = *(LONG *)((int)this + 0x70);
      local_48[0] = 0;
      local_48[1] = 0;
      local_40.left = *(LONG *)((int)this + 0x68);
      local_40.bottom = *(LONG *)((int)this + 0x74);
      OffsetRect(&local_40,*(int *)((int)this + 0x7c),0);
      FUN_0040c0c0(*(void **)((int)this + 100),*(void **)((int)this + 0x48),0,local_48,
                   &local_40.left,0);
      local_30.left = *(LONG *)((int)this + 0x68);
      local_30.top = *(LONG *)((int)this + 0x6c);
      local_30.right = *(LONG *)((int)this + 0x70);
      local_30.bottom = *(LONG *)((int)this + 0x74);
      local_48[0] = *(int *)((int)this + 0x78);
      OffsetRect(&local_30,local_48[0],0);
      FUN_0040c0c0(*(void **)((int)this + 100),*(void **)((int)this + 0x48),1,local_48,(int *)0x0,1)
      ;
      UnionRect(&local_20,&local_40,&local_30);
      local_10.left = local_20.left;
      local_10.top = local_20.top;
      local_10.right = local_20.right;
      local_10.bottom = local_20.bottom;
      *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x78);
      FUN_0040ba60(this,&local_10,0,0);
    }
  }
  return;
}

