/*
 * Program: Creatures.exe
 * Function: FUN_0040c0f0
 * Entry: 0040c0f0
 * Namespace: Global
 * Prototype: int FUN_0040c0f0(int param_1)
 */


int FUN_0040c0f0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar5;
  int *piStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040c1db;
  *unaff_FS_OFFSET = &uStack_10;
  uVar4 = 0xffffffff;
  piVar3 = (int *)&DAT_00438b20;
  while ((*piVar3 != param_1 || (piVar3[1] == 0))) {
    piVar3 = piVar3 + 3;
    if ((int *)0x438b97 < piVar3) {
      piVar3 = (int *)&DAT_00438b20;
      do {
        if ((uint)piVar3[2] <= uVar4) {
          uVar4 = piVar3[2];
          piStack_14 = piVar3;
        }
        piVar3 = piVar3 + 3;
      } while (piVar3 < &DAT_00438b98);
      if ((int *)piStack_14[1] != (int *)0x0) {
        (**(code **)(*(int *)piStack_14[1] + 4))(1);
      }
      *piStack_14 = param_1;
      iVar1 = Ordinal_729(0x10);
      uStack_8 = 0;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        uVar5 = 0x40;
        puVar2 = FUN_0040b5c0(param_1,0x435d04,4);
        iVar1 = Ordinal_339(puVar2,uVar5);
      }
      piStack_14[1] = iVar1;
      DAT_00435f48 = DAT_00435f48 + 1;
      piStack_14[2] = DAT_00435f48;
      iVar1 = piStack_14[1];
LAB_0040c1ab:
      *unaff_FS_OFFSET = uStack_10;
      return iVar1;
    }
  }
  DAT_00435f48 = DAT_00435f48 + 1;
  piVar3[2] = DAT_00435f48;
  iVar1 = piVar3[1];
  goto LAB_0040c1ab;
}

