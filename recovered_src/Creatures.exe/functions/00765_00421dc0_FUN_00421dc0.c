/*
 * Program: Creatures.exe
 * Function: FUN_00421dc0
 * Entry: 00421dc0
 * Namespace: Global
 * Prototype: undefined FUN_00421dc0(void * param_1)
 */


void __fastcall FUN_00421dc0(void *param_1)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x2b78) == '\0') {
    iVar3 = 1;
    puVar2 = (undefined4 *)((int)param_1 + 0x846);
    do {
      if ((int *)*puVar2 != (int *)0x0) {
        cVar1 = FUN_0041fff0(param_1,(int *)*puVar2);
        if (CONCAT31(extraout_var,cVar1) == 0) {
          *puVar2 = 0;
          *(undefined1 *)((int)puVar2 + 0xe) = 0;
          FUN_0042beb0(*(void **)((int)param_1 + 0x2ac8),7,iVar3,0);
        }
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x28);
  }
  return;
}

