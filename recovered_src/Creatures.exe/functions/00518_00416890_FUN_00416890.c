/*
 * Program: Creatures.exe
 * Function: FUN_00416890
 * Entry: 00416890
 * Namespace: Global
 * Prototype: undefined FUN_00416890(void * this, int * param_1)
 */


void __thiscall FUN_00416890(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  *(undefined1 *)((int)this + 8) = 0;
  FUN_00416ac0(this,*param_1,5);
  *(byte *)((int)this + 9) = *(byte *)((int)this + 9) | 0x10;
  if (0 < DAT_00438868) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(DAT_00438864 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      FUN_00421e20((void *)*puVar1,(int)this);
    } while (iVar2 < DAT_00438868);
  }
  return;
}

