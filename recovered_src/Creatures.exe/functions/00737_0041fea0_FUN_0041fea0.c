/*
 * Program: Creatures.exe
 * Function: FUN_0041fea0
 * Entry: 0041fea0
 * Namespace: Global
 * Prototype: undefined4 FUN_0041fea0(void * this, int * param_1)
 */


undefined4 __thiscall FUN_0041fea0(void *this,int *param_1)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  RECT RStack_24;
  RECT RStack_14;
  
  if (this == param_1) {
    return 0;
  }
  if ((*(byte *)((int)param_1 + 9) & 0x10) != 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x60))(&RStack_24.top);
  if (((*(char *)((int)this + 0x70) == '\x03') && (*(int *)((int)this + 0x72) < RStack_24.left)) ||
     ((*(char *)((int)this + 0x70) == '\x02' && (RStack_24.right < *(int *)((int)this + 0x72))))) {
    return 0;
  }
  RStack_14.left = *(LONG *)((int)this + 10);
  RStack_14.top = *(LONG *)((int)this + 0xe);
  RStack_14.right = *(LONG *)((int)this + 0x12);
  RStack_14.bottom = *(LONG *)((int)this + 0x16);
  if (*(int *)((int)this + 0x1a) != 0) {
    if ((*(uint *)(*(int *)((int)this + 0x1a) + 4) & 0xffff0000) == 0x3020000) {
      return 0;
    }
    FUN_0042da20(DAT_00438594,*(int *)((int)this + 0x72),*(int *)((int)this + 0x76),&RStack_14.left)
    ;
    BVar1 = PtInRect(&RStack_14,*(POINT *)((int)this + 0x72));
    if (BVar1 == 0) {
      SetRect(&RStack_14,0,0,0x20a0,0x4b0);
    }
  }
  BVar1 = IntersectRect(&RStack_14,&RStack_14,&RStack_24);
  if ((BVar1 != 0) &&
     (uVar2 = ((RStack_24.right - RStack_24.left) / 2 - *(int *)((int)this + 0x72)) + RStack_24.left
     , uVar3 = (int)uVar2 >> 0x1f, (int)((uVar2 ^ uVar3) - uVar3) < 500)) {
    return 1;
  }
  return 0;
}

