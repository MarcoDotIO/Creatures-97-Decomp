/*
 * Program: Creatures.exe
 * Function: FUN_00401d00
 * Entry: 00401d00
 * Namespace: Global
 * Prototype: undefined FUN_00401d00(int * param_1, int param_2)
 */


void __cdecl FUN_00401d00(int *param_1,int param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x24) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < DAT_00438868) {
      do {
        this = *(void **)(DAT_00438864 + iVar3);
        iVar1 = FUN_0041fea0(this,param_1);
        if (iVar1 != 0) {
          FUN_00401a80((void *)(param_2 * 0x14 + 0x25a0 + (int)this),param_1,(int)this);
        }
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00438868);
    }
  }
  return;
}

