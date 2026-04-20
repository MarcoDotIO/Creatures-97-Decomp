/*
 * Program: Hatchery.exe
 * Function: FUN_00405a40
 * Entry: 00405a40
 * Namespace: Global
 * Prototype: LRESULT FUN_00405a40(int param_1)
 */


LRESULT __fastcall FUN_00405a40(int param_1)

{
  int iVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  
  iVar1 = Ordinal_2533();
  if (iVar1 == 0) {
    return 0;
  }
  LVar2 = SendMessageA(*(HWND *)(iVar1 + 0x20),0x30f,0,0);
  if (LVar2 == 0) {
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x20);
    }
    Ordinal_5142(*(undefined4 *)(param_1 + 0x20),0x311,uVar3,0,1,0);
  }
  return LVar2;
}

