/*
 * Program: Creatures.exe
 * Function: FUN_0042daa0
 * Entry: 0042daa0
 * Namespace: Global
 * Prototype: int FUN_0042daa0(void * this, LONG param_1, LONG param_2)
 */


int __thiscall FUN_0042daa0(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  BOOL BVar1;
  RECT *lprc;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    lprc = (RECT *)((int)this + 0xc);
    do {
      pt.y = param_2;
      pt.x = param_1;
      BVar1 = PtInRect(lprc,pt);
      if (BVar1 != 0) {
        return iVar2 * 0x14 + 0xc + (int)this;
      }
      lprc = (RECT *)&lprc[1].top;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 8));
  }
  return 0;
}

