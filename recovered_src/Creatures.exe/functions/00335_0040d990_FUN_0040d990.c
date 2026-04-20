/*
 * Program: Creatures.exe
 * Function: FUN_0040d990
 * Entry: 0040d990
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d990(void * this, void * param_1)
 */


undefined4 __thiscall FUN_0040d990(void *this,void *param_1)

{
  LPBYTE pBVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  pBVar1 = (LPBYTE)Ordinal_729(0x400);
  DVar2 = FUN_00423e80(param_1,(int)pBVar1);
  uVar3 = FUN_0040d960(this,pBVar1,DVar2);
  Ordinal_731(pBVar1);
  return uVar3;
}

