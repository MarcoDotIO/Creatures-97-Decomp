/*
 * Program: Creatures.exe
 * Function: FUN_0040c118
 * Entry: 0040c118
 * Namespace: Global
 * Prototype: int FUN_0040c118(int * param_1, uint param_2)
 */


int __fastcall FUN_0040c118(int *param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  
  iVar3 = *(int *)(unaff_EBP + 8);
  while ((*param_1 != iVar3 || (param_1[1] == 0))) {
    param_1 = param_1 + 3;
    if ((int *)0x438b97 < param_1) {
      piVar4 = (int *)&DAT_00438b20;
      piVar5 = *(int **)(unaff_EBP + -0x10);
      do {
        if ((uint)piVar4[2] <= param_2) {
          param_2 = piVar4[2];
          piVar5 = piVar4;
        }
        piVar4 = piVar4 + 3;
      } while (piVar4 < &DAT_00438b98);
      if ((int *)piVar5[1] != (int *)0x0) {
        (**(code **)(*(int *)piVar5[1] + 4))(1);
      }
      *piVar5 = iVar3;
      iVar1 = Ordinal_729(0x10);
      *(int *)(unaff_EBP + -0x10) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        uVar6 = 0x40;
        puVar2 = FUN_0040b5c0(iVar3,0x435d04,4);
        iVar3 = Ordinal_339(puVar2,uVar6);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar5[1] = iVar3;
      DAT_00435f48 = DAT_00435f48 + 1;
      piVar5[2] = DAT_00435f48;
      iVar3 = piVar5[1];
LAB_0040c1ab:
      *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
      return iVar3;
    }
  }
  DAT_00435f48 = DAT_00435f48 + 1;
  param_1[2] = DAT_00435f48;
  iVar3 = param_1[1];
  goto LAB_0040c1ab;
}

