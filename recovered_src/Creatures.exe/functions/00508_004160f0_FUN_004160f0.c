/*
 * Program: Creatures.exe
 * Function: FUN_004160f0
 * Entry: 004160f0
 * Namespace: Global
 * Prototype: undefined FUN_004160f0(int * param_1)
 */


void __fastcall FUN_004160f0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(DAT_00436eb0 + 100);
  if ((uVar1 & 4) != 0) {
    if (param_1 == DAT_00438d0c) {
      DAT_004352c8 = FUN_00416b40(param_1);
      if (DAT_004352c8 != (int *)0x0) {
        FUN_00414f10(DAT_004352c8);
      }
    }
    goto LAB_00416208;
  }
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) goto LAB_00416208;
    if (param_1[1] == 0x2010100) {
      piVar2 = FUN_004149a0(param_1,4,4);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x68))
                          (param_1[0x15] + *(int *)(param_1[0x12] + 0xe),
                           param_1[0x16] + *(int *)(param_1[0x12] + 0x12));
        if (iVar3 != -1) {
          FUN_004016c0(param_1,piVar2,iVar3,0,0,0);
          FUN_00416ac0(DAT_00438d0c,(int)piVar2,iVar3);
        }
      }
      goto LAB_00416208;
    }
    piVar2 = FUN_004149a0(param_1,0,0);
    if (piVar2 == (int *)0x0) goto LAB_00416208;
    uVar4 = 3;
  }
  else if (param_1 == DAT_00438d0c) {
    piVar2 = FUN_004149a0(param_1,2,2);
    if (piVar2 == (int *)0x0) goto LAB_00416208;
    if ((piVar2[1] & 0xffff0000U) == 0x4010000) {
      FUN_004069f0((int)piVar2,1);
    }
    uVar4 = 4;
  }
  else {
    uVar4 = 5;
    piVar2 = param_1;
  }
  FUN_004016c0(param_1,piVar2,uVar4,0,0,0);
LAB_00416208:
  *(undefined4 *)(DAT_00436eb0 + 100) = 0;
  return;
}

