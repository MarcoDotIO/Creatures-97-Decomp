/*
 * Program: Creatures.exe
 * Function: FUN_00424250
 * Entry: 00424250
 * Namespace: Global
 * Prototype: undefined FUN_00424250(int * param_1)
 */


void __fastcall FUN_00424250(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  if (0 < DAT_00436c20) {
    piVar2 = &DAT_00439b28;
    do {
      if ((int *)*piVar2 == param_1) {
        DAT_00436c20 = DAT_00436c20 + -1;
        if (iVar1 < DAT_00436c20) {
          iVar3 = DAT_00436c20 - iVar1;
          puVar4 = &DAT_00439b28 + iVar1;
          do {
            iVar3 = iVar3 + -1;
            *puVar4 = puVar4[1];
            puVar4 = puVar4 + 1;
          } while (iVar3 != 0);
        }
        break;
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00436c20);
  }
  if ((param_1[1] != 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

