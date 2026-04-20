/*
 * Program: Creatures.exe
 * Function: FUN_004073a0
 * Entry: 004073a0
 * Namespace: Global
 * Prototype: undefined FUN_004073a0(void * this, int param_1)
 */


void __thiscall FUN_004073a0(void *this,int param_1)

{
  UINT uPosition;
  int iVar1;
  int iVar2;
  UINT *pUVar3;
  undefined4 *puVar4;
  UINT local_30 [12];
  
  local_30[0] = 0x8053;
  local_30[1] = 0x8054;
  local_30[2] = 0x8055;
  local_30[3] = 0x8056;
  local_30[4] = 0x8057;
  local_30[5] = 0x8058;
  local_30[6] = 0x8059;
  local_30[7] = 0x805a;
  local_30[8] = 0x805b;
  local_30[9] = 0x805c;
  local_30[10] = 0x805d;
  local_30[0xb] = 0x805e;
  iVar1 = FUN_004071a0();
  iVar2 = *(int *)((int)this + 0xe0) + -1;
  *(int *)((int)this + 0xe0) = iVar2;
  if (param_1 < iVar2) {
    pUVar3 = local_30 + param_1;
    puVar4 = (undefined4 *)((int)this + param_1 * 0xc + 0x9c);
    do {
      Ordinal_760(puVar4 + 3);
      param_1 = param_1 + 1;
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(puVar4 + 4);
      uPosition = *pUVar3;
      *(undefined2 *)((int)puVar4 + 6) = *(undefined2 *)((int)puVar4 + 0x12);
      ModifyMenuA(*(HMENU *)(iVar1 + 4),uPosition,0,uPosition,(LPCSTR)*puVar4);
      pUVar3 = pUVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (param_1 < *(int *)((int)this + 0xe0));
  }
  RemoveMenu(*(HMENU *)(iVar1 + 4),local_30[*(int *)((int)this + 0xe0)],0);
  if (*(int *)((int)this + 0xe0) < 6) {
    iVar1 = 6 - *(int *)((int)this + 0xe0);
    do {
      Ordinal_762(&DAT_00435c44);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

