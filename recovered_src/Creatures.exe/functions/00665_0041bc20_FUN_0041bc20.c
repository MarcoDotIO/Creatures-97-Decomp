/*
 * Program: Creatures.exe
 * Function: FUN_0041bc20
 * Entry: 0041bc20
 * Namespace: Global
 * Prototype: undefined FUN_0041bc20(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0041bc20(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte local_1;
  
  local_1 = **(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
  if (param_2 != 0) {
    iVar1 = rand();
    if (iVar1 % 0x641 == 0) {
      bVar4 = 1;
      iVar1 = 0;
      do {
        uVar2 = rand();
        uVar3 = (int)uVar2 >> 0x1f;
        if (((uVar2 ^ uVar3) - uVar3 & 1 ^ uVar3) != uVar3) break;
        bVar4 = bVar4 * '\x02';
        iVar1 = iVar1 + 1;
      } while (iVar1 < 8);
      local_1 = local_1 ^ bVar4;
    }
  }
  **(byte **)((int)this + 8) = local_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

