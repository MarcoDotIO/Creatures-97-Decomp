/*
 * Program: Creatures.exe
 * Function: FUN_0040d4b0
 * Entry: 0040d4b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040d4b0(void * this, LPCSTR param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9)
 */


undefined4 * __thiscall
FUN_0040d4b0(void *this,LPCSTR param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  LPDWORD pidInst;
  undefined4 *puVar1;
  HSZ hsz1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_2;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_3 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_3;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_4 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_4;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_5 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_5;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_6 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_6;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_7 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_7;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_8 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_8;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  if (param_9 != 0) {
    *(int *)((int)this + *(int *)((int)this + 0x2c) * 4 + 0xc) = param_9;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  iVar3 = 0;
  pidInst = (LPDWORD)((int)this + 8);
  *(undefined4 *)((int)this + 0x58) = 0;
  *pidInst = 0;
  DdeInitializeA(pidInst,FUN_0040d470,0x184000,0);
  *(LPCSTR *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  hsz1 = (HSZ)FUN_0040d8a0(this,param_1);
  *(HSZ *)((int)this + 4) = hsz1;
  DdeNameService(*pidInst,hsz1,(HSZ)0x0,5);
  if (0 < *(int *)((int)this + 0x2c)) {
    puVar2 = (undefined4 *)((int)this + 0xc);
    do {
      puVar1 = (undefined4 *)*puVar2;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
      FUN_0040d940(puVar1);
    } while (iVar3 < *(int *)((int)this + 0x2c));
  }
  return this;
}

