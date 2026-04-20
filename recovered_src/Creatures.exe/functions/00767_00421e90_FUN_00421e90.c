/*
 * Program: Creatures.exe
 * Function: FUN_00421e90
 * Entry: 00421e90
 * Namespace: Global
 * Prototype: undefined FUN_00421e90(int * param_1)
 */


void __fastcall FUN_00421e90(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((char)param_1[0xade] == '\0') {
    if (*(int *)((int)param_1 + 0x7e6) != 0) {
      FUN_0042be60((void *)param_1[0xab2],5,0xd,
                   (*(char *)(*(int *)((int)param_1 + 0x7e6) + 0x22) == '\0') - 1 & 0xff);
      iVar1 = (**(code **)(*param_1 + 0x70))();
      uVar2 = iVar1 - *(int *)((int)param_1 + 0x7ea);
      uVar3 = (int)uVar2 >> 0x1f;
      iVar1 = (uVar2 ^ uVar3) - uVar3;
      if (iVar1 < 0x80) {
        FUN_0042be60((void *)param_1[0xab2],5,0xc,iVar1 * -2 + 0xff);
      }
    }
    if ((*(char *)((int)param_1 + 0x112) != '\0') &&
       (*(undefined1 *)((int)param_1 + 0x112) = 0, *(int *)((int)param_1 + 0x1a) == 0)) {
      FUN_004219b0(param_1,param_1,7,0);
    }
    iVar1 = 0;
    do {
      iVar4 = iVar1 + 1;
      FUN_0042be60((void *)param_1[0xab2],1,iVar1,(uint)*(byte *)((int)param_1 + iVar1 + 0x2b06));
      iVar1 = iVar4;
    } while (iVar4 < 0x10);
  }
  return;
}

