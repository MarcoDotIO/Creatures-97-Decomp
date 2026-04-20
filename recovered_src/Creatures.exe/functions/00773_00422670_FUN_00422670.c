/*
 * Program: Creatures.exe
 * Function: FUN_00422670
 * Entry: 00422670
 * Namespace: Global
 * Prototype: undefined FUN_00422670(void * this, int param_1)
 */


void __thiscall FUN_00422670(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (((*(int *)((int)this + 0x2b70) != 0) && (param_1 != 0)) && (*(int *)((int)this + 0x2b74) == 0)
     ) {
    uVar1 = rand();
    uVar3 = (int)uVar1 >> 0x1f;
    if ((int)(((uVar1 ^ uVar3) - uVar3 & 0xff ^ uVar3) - uVar3) <
        (int)(uint)*(byte *)((int)this + 0x2add)) {
      uVar2 = FUN_0041b7f0(*(int *)((int)this + 0x2b70),param_1);
      *(undefined4 *)((int)this + 0x2b74) = uVar2;
    }
  }
  return;
}

