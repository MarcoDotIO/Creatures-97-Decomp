/*
 * Program: Creatures.exe
 * Function: FUN_004029b0
 * Entry: 004029b0
 * Namespace: Global
 * Prototype: undefined FUN_004029b0(void * this, undefined4 param_1, uint param_2, int param_3)
 */


void __thiscall FUN_004029b0(void *this,undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  HGDIOBJ ho;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_2 & 3) != 0) {
      param_2 = (param_2 & 0xfffffffc) + 4;
    }
    ho = FUN_00403cf0(this,param_2,param_3);
    DeleteObject(ho);
    *(uint *)((int)this + 0xc) = *(int *)((int)this + 4) + param_2;
    iVar1 = *(int *)((int)this + 8) + param_3;
    *(int *)((int)this + 0x10) = iVar1;
    if (0x4b0 < iVar1) {
      *(undefined4 *)((int)this + 0x10) = 0x4b0;
      *(int *)((int)this + 8) = (*(int *)((int)this + 8) - iVar1) + 0x4b0;
    }
  }
  return;
}

