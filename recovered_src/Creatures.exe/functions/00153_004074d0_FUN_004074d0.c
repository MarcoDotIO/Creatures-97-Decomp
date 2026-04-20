/*
 * Program: Creatures.exe
 * Function: FUN_004074d0
 * Entry: 004074d0
 * Namespace: Global
 * Prototype: undefined FUN_004074d0(int param_1)
 */


void __fastcall FUN_004074d0(int param_1)

{
  LPCSTR lpNewItem;
  UINT_PTR uIDNewItem;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  UINT_PTR *pUVar4;
  UINT_PTR local_30 [12];
  
  local_30[0] = 0x8053;
  local_30[1] = 0x8054;
  local_30[2] = 0x8055;
  local_30[3] = 0x8056;
  local_30[4] = 0x8057;
  local_30[5] = 0x8058;
  local_30[6] = 0x8059;
  local_30[7] = 0x805a;
  local_30[8] = 0x805b;
  iVar2 = 0;
  local_30[9] = 0x805c;
  local_30[10] = 0x805d;
  local_30[0xb] = 0x805e;
  iVar1 = FUN_004071a0();
  if (0 < *(int *)(param_1 + 0xe0)) {
    pUVar4 = local_30;
    puVar3 = (undefined4 *)(param_1 + 0x9c);
    do {
      lpNewItem = (LPCSTR)*puVar3;
      uIDNewItem = *pUVar4;
      pUVar4 = pUVar4 + 1;
      puVar3 = puVar3 + 3;
      iVar2 = iVar2 + 1;
      AppendMenuA(*(HMENU *)(iVar1 + 4),0,uIDNewItem,lpNewItem);
    } while (iVar2 < *(int *)(param_1 + 0xe0));
  }
  return;
}

