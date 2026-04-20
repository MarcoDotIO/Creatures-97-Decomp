/*
 * Program: Creatures.exe
 * Function: FUN_0042be10
 * Entry: 0042be10
 * Namespace: Global
 * Prototype: undefined FUN_0042be10(void * this, int param_1, int param_2, byte param_3)
 */


void __thiscall FUN_0042be10(void *this,int param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)(*(int *)((int)this + param_1 * 0xc2 + 0x9f) + 3 + param_2 * 0x10);
  uVar2 = (uint)*pbVar1 + (uint)param_3;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  *pbVar1 = (byte)uVar2;
  return;
}

