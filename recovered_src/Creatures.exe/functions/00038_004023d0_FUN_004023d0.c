/*
 * Program: Creatures.exe
 * Function: FUN_004023d0
 * Entry: 004023d0
 * Namespace: Global
 * Prototype: undefined FUN_004023d0(void * this, undefined4 param_1, int param_2)
 */


void __thiscall FUN_004023d0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = Ordinal_3273(1);
  FUN_00402630(this,1);
  iVar2 = iVar1;
  switch(param_1) {
  case 0:
    iVar2 = iVar1 + -0x10;
    break;
  case 1:
    iVar2 = iVar1 + 0x10;
    break;
  case 2:
    iVar2 = iVar1 - DAT_00435210 / 2;
    break;
  case 3:
    iVar2 = iVar1 + DAT_00435210 / 2;
    break;
  case 4:
    iVar2 = param_2;
    break;
  case 5:
    iVar2 = param_2;
    break;
  case 6:
    iVar2 = 0;
    break;
  case 7:
    iVar2 = DAT_00435210 * 2;
  }
  iVar3 = DAT_00435210 * 2;
  if ((iVar2 <= iVar3) && (iVar3 = iVar2, iVar2 < 0)) {
    iVar3 = 0;
  }
  if (iVar3 != iVar1) {
    iVar2 = FUN_00403230(*(void **)((int)this + 0x60),iVar3 - iVar1);
    Ordinal_5427(1,iVar2 + iVar1,1);
  }
  return;
}

