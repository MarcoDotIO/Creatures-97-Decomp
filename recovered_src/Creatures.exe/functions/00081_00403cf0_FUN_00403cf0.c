/*
 * Program: Creatures.exe
 * Function: FUN_00403cf0
 * Entry: 00403cf0
 * Namespace: Global
 * Prototype: HGDIOBJ FUN_00403cf0(void * this, int param_1, int param_2)
 */


HGDIOBJ __thiscall FUN_00403cf0(void *this,int param_1,int param_2)

{
  tagPALETTEENTRY *ptVar1;
  tagPALETTEENTRY *ptVar2;
  HGDIOBJ pvVar3;
  BYTE *pBVar4;
  tagPALETTEENTRY local_400 [256];
  
  if ((0 < param_1) && (0 < param_2)) {
    *(int *)((int)this + 0x40) = param_1;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(int *)((int)this + 0x44) = -param_2;
    *(undefined2 *)((int)this + 0x4a) = 8;
    GetPaletteEntries((HPALETTE)**(undefined4 **)((int)this + 0x470),0,0x100,local_400);
    ptVar1 = local_400;
    pBVar4 = (BYTE *)((int)this + 0x66);
    do {
      ptVar2 = ptVar1 + 1;
      *pBVar4 = ptVar1->peRed;
      pBVar4[-1] = ptVar1->peGreen;
      pBVar4[-2] = ptVar1->peBlue;
      pBVar4[1] = '\0';
      ptVar1 = ptVar2;
      pBVar4 = pBVar4 + 4;
    } while (ptVar2 < (tagPALETTEENTRY *)&stack0x00000000);
    pvVar3 = (HGDIOBJ)WinGCreateBitmap(*(undefined4 *)((int)this + 0x34),(int)this + 0x3c,
                                       (int)this + 0x46c);
    *(HGDIOBJ *)((int)this + 0x38) = pvVar3;
    if (pvVar3 != (HGDIOBJ)0x0) {
      pvVar3 = SelectObject(*(HDC *)((int)this + 0x34),pvVar3);
      FUN_00403dc0((int)this);
      return pvVar3;
    }
  }
  return (HGDIOBJ)0x0;
}

