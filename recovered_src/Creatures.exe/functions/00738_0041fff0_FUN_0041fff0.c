/*
 * Program: Creatures.exe
 * Function: FUN_0041fff0
 * Entry: 0041fff0
 * Namespace: Global
 * Prototype: char FUN_0041fff0(void * this, int * param_1)
 */


char __thiscall FUN_0041fff0(void *this,int *param_1)

{
  int iVar1;
  POINT pt;
  BOOL BVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  LONG local_20;
  RECT RStack_1c;
  
  (**(code **)(*param_1 + 0x6c))(&local_20,&RStack_1c.right,0);
  RStack_1c.left = *(LONG *)((int)this + 10);
  RStack_1c.top = *(LONG *)((int)this + 0xe);
  RStack_1c.right = *(LONG *)((int)this + 0x12);
  RStack_1c.bottom = *(LONG *)((int)this + 0x16);
  iVar1 = *(int *)((int)this + 0x1a);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 4) & 0xffff0000) != 0x3020000)) {
    RStack_1c.left = *(LONG *)(iVar1 + 10);
    RStack_1c.top = *(LONG *)(iVar1 + 0xe);
    RStack_1c.right = *(LONG *)(iVar1 + 0x12);
    RStack_1c.bottom = *(LONG *)(iVar1 + 0x16);
  }
  pt.y = local_20;
  pt.x = unaff_EBP;
  BVar2 = PtInRect(&RStack_1c,pt);
  if (BVar2 != 0) {
    uVar3 = unaff_EBP - *(int *)((int)this + 0x72);
    uVar4 = (int)uVar3 >> 0x1f;
    return ((int)((uVar3 ^ uVar4) - uVar4) < 0x36) + '\x01';
  }
  return '\0';
}

