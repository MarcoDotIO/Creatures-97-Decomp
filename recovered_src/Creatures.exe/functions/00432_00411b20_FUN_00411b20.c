/*
 * Program: Creatures.exe
 * Function: FUN_00411b20
 * Entry: 00411b20
 * Namespace: Global
 * Prototype: int * FUN_00411b20(void * this, int param_1)
 */


int * __thiscall FUN_00411b20(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  tagRECT local_20;
  tagRECT local_10;
  
  Ordinal_2081();
  piVar3 = DAT_00436eb0;
  if ((DAT_00436eb0 != (int *)0x0) && (DAT_00436eb0[0x18] != 0)) {
    piVar3 = DAT_00436260;
    if (DAT_00436260 != (int *)0x0) {
      DAT_00436260 = (int *)0x0;
      return piVar3;
    }
    BVar4 = IsIconic(*(HWND *)((int)this + 0x20));
    if (BVar4 != 0) {
      DAT_00436260 = (int *)((int)DAT_00436260 + 1);
      return DAT_00436260;
    }
    piVar3 = DAT_00436ea0;
    if ((DAT_00436ea0[0x32] == 0) && (piVar3 = (int *)DAT_00436eb0[0x18], *piVar3 != 0)) {
      iVar1 = piVar3[5];
      iVar2 = piVar3[6];
      GetWindowRect(*(HWND *)((int)this + 0x20),&local_20);
      GetWindowRect((HWND)DAT_00436eb0[8],&local_10);
      *(int *)(param_1 + 0x20) =
           ((iVar1 - local_20.left) - local_10.right) + local_20.right + local_10.left;
      *(int *)(param_1 + 0x24) =
           ((iVar2 - local_20.top) - local_10.bottom) + local_20.bottom + local_10.top;
      piVar3 = (int *)(param_1 + 0x20);
    }
  }
  return piVar3;
}

