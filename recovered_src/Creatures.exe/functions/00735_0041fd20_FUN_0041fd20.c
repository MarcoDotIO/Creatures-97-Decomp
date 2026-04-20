/*
 * Program: Creatures.exe
 * Function: FUN_0041fd20
 * Entry: 0041fd20
 * Namespace: Global
 * Prototype: int FUN_0041fd20(void * this, LONG param_1, LONG param_2)
 */


int __thiscall FUN_0041fd20(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  RECT local_10;
  
  FUN_0041a4a0(*(void **)((int)this + 0x58),&local_10.left);
  pt.y = param_2;
  pt.x = param_1;
  BVar1 = PtInRect(&local_10,pt);
  if (BVar1 != 0) {
    return 0;
  }
  FUN_0041a4a0(*(void **)((int)this + 0x54),&local_10.left);
  pt_00.y = param_2;
  pt_00.x = param_1;
  BVar1 = PtInRect(&local_10,pt_00);
  return (-(uint)(BVar1 == 0) & 0xfffffffd) + 2;
}

