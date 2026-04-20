/*
 * Program: Creatures.exe
 * Function: FUN_0042a610
 * Entry: 0042a610
 * Namespace: Global
 * Prototype: int FUN_0042a610(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 */


int __thiscall
FUN_0042a610(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 local_4;
  
  *(undefined4 *)this = param_1;
  bVar1 = *(byte *)(param_3 + 0x2b + param_4 * 0x3a);
  iVar3 = param_3 + param_4 * 0x3a;
  local_4 = (uint)*(byte *)(param_3 + 0x2c + param_4 * 0x3a);
  iVar2 = rand();
  cVar4 = bVar1 + (char)(iVar2 % (int)((local_4 - bVar1) + 1));
  *(char *)((int)this + 8) = cVar4;
  *(char *)((int)this + 7) = cVar4;
  bVar1 = *(byte *)(iVar3 + 0x2d);
  local_4 = (uint)*(byte *)(iVar3 + 0x2e);
  iVar3 = rand();
  iVar2 = (local_4 - bVar1) + 1;
  *(byte *)((int)this + 9) = bVar1 + (char)(iVar3 % iVar2);
  return iVar3 / iVar2;
}

