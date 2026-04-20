/*
 * Program: Creatures.exe
 * Function: FUN_00424710
 * Entry: 00424710
 * Namespace: Global
 * Prototype: uint FUN_00424710(void * param_1)
 */


uint __fastcall FUN_00424710(void *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  LONG LVar8;
  LONG LVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int aiStack_18 [2];
  undefined1 local_10 [16];
  
  puVar2 = *(uint **)((int)param_1 + 0x10);
  cVar1 = (char)*puVar2;
  if (cVar1 < ':') {
    if (cVar1 == '-') {
      *(char **)((int)param_1 + 0x10) = (char *)((int)puVar2 + 1);
      uVar3 = 0x30 - (int)*(char *)((int)puVar2 + 1);
      *(char **)((int)param_1 + 0x10) = (char *)((int)puVar2 + 2);
      iVar11 = (int)*(char *)((int)puVar2 + 2);
      *(char **)((int)param_1 + 0x10) = (char *)((int)puVar2 + 3);
      if (0x2f < iVar11) {
        do {
          iVar4 = uVar3 * 10 - iVar11;
          iVar11 = (int)**(char **)((int)param_1 + 0x10);
          uVar3 = iVar4 + 0x30;
          *(char **)((int)param_1 + 0x10) = *(char **)((int)param_1 + 0x10) + 1;
        } while (0x2f < iVar11);
        return uVar3;
      }
    }
    else {
      uVar3 = (int)cVar1 - 0x30;
      *(char **)((int)param_1 + 0x10) = (char *)((int)puVar2 + 1);
      iVar11 = (int)*(char *)((int)puVar2 + 1);
      *(char **)((int)param_1 + 0x10) = (char *)((int)puVar2 + 2);
      if (0x2f < iVar11) {
        do {
          uVar3 = iVar11 + -0x30 + uVar3 * 10;
          iVar11 = (int)**(char **)((int)param_1 + 0x10);
          *(char **)((int)param_1 + 0x10) = *(char **)((int)param_1 + 0x10) + 1;
        } while (0x2f < iVar11);
        return uVar3;
      }
    }
    return uVar3;
  }
  uVar3 = *puVar2;
  *(uint **)((int)param_1 + 0x10) = (uint *)((int)puVar2 + 5);
  if ((uVar3 & 0xffffff) == 0x726176) {
    return *(uint *)(((int)(uVar3 & 0xff3fffff) >> 0x16) + -0x54 + (int)param_1);
  }
  if ((uVar3 & 0xffffff) == 0x76626f) {
    return *(uint *)(((int)(uVar3 & 0xff3fffff) >> 0x16) + -0x91 + *(int *)((int)param_1 + 0xa4));
  }
  if ((int)uVar3 < 0x23646e68) {
    if (uVar3 == 0x23646e67) {
      return 0x105;
    }
    if (uVar3 == 0x21767264) {
      if ((*(uint *)(*(int *)((int)param_1 + 0xa4) + 4) & 0xff000000) == 0x4000000) {
        uVar12 = 0xffffffff;
        uVar3 = 0;
        uVar10 = 0;
        do {
          uVar7 = (uint)*(byte *)(uVar10 + 0x2b06 + *(int *)((int)param_1 + 0xa4));
          if ((int)uVar12 < (int)uVar7) {
            uVar3 = uVar10;
            uVar12 = uVar7;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < 0x10);
        return uVar3;
      }
      return 0;
    }
  }
  else if ((int)uVar3 < 0x5f746960) {
    if (uVar3 == 0x5f74695f) {
      return *(uint *)((int)param_1 + 0xa0);
    }
    if (uVar3 == 0x23736d72) {
      return *(uint *)((int)DAT_00438594 + 8);
    }
  }
  else if ((int)uVar3 < 0x62736f71) {
    if (uVar3 == 0x62736f70) {
      iVar11 = **(int **)((int)param_1 + 0xa4);
      iVar4 = (**(code **)(iVar11 + 0x7c))();
      iVar11 = (**(code **)(iVar11 + 0x74))();
      return iVar11 + iVar4;
    }
    if (uVar3 == 0x626d696c) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0x16);
    }
  }
  else if ((int)uVar3 < 0x63657866) {
    if (uVar3 == 0x63657865) {
      return *(uint *)((int)param_1 + 0x9c);
    }
    if (uVar3 == 0x63657678) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0x13c);
    }
    if (uVar3 == 0x63657679) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0x140);
    }
  }
  else if ((int)uVar3 < 0x64616565) {
    if (uVar3 == 0x64616564) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 0x2b78);
    }
    if (uVar3 == 0x63756f74) {
      piVar5 = (int *)FUN_00424710(param_1);
      (**(code **)(*piVar5 + 0x60))(local_10);
      piVar5 = (int *)FUN_00424710(param_1);
      (**(code **)(*piVar5 + 0x60))(&stack0xffffffdc);
      iVar11 = FUN_0040b250(aiStack_18,(int *)&stack0xffffffd8);
      return (uint)(iVar11 != 0);
    }
  }
  else if ((int)uVar3 < 0x646e6568) {
    if (uVar3 == 0x646e6567) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0x94) + 0x2b6f);
    }
    if (uVar3 == 0x6469656e) {
      uVar3 = FUN_00414ec0(*(int *)((int)param_1 + 0xa4));
      return uVar3;
    }
  }
  else if ((int)uVar3 < 0x646e7268) {
    if (uVar3 == 0x646e7267) {
      uVar3 = FUN_00424710(param_1);
      return *(uint *)((int)DAT_00438594 + uVar3 * 4 + 0x32c);
    }
    if (uVar3 == 0x646e6977) {
      iVar11 = **(int **)((int)param_1 + 0xa4);
      uVar6 = (**(code **)(iVar11 + 0x74))();
      iVar11 = (**(code **)(iVar11 + 0x70))(uVar6);
      uVar3 = FUN_0042db90(DAT_00438594,iVar11);
      return uVar3;
    }
  }
  else if ((int)uVar3 < 0x65736f71) {
    if (uVar3 == 0x65736f70) {
      uVar3 = (**(code **)(**(int **)((int)param_1 + 0xa4) + 0x8c))
                        (*(undefined4 *)((int)param_1 + 0xa8));
      return uVar3;
    }
    if (uVar3 == 0x65676163) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 0x2b6e);
    }
  }
  else if ((int)uVar3 < 0x686e6978) {
    if (uVar3 == 0x686e6977) {
      return *(uint *)(*(int *)(DAT_00436eb0 + 0x60) + 0x18);
    }
    if (uVar3 == 0x67726174) {
      return *(uint *)((int)param_1 + 0xa4);
    }
  }
  else if ((int)uVar3 < 0x6c6d696d) {
    if (uVar3 == 0x6c6d696c) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 10);
    }
    if (uVar3 == 0x68746477) {
      uVar3 = (**(code **)(**(int **)((int)param_1 + 0xa4) + 0x78))();
      return uVar3;
    }
  }
  else if ((int)uVar3 < 0x6c746f75) {
    if (uVar3 == 0x6c746f74) {
      uVar3 = FUN_00424710(param_1);
      uVar13 = 0;
      uVar12 = FUN_00424710(param_1);
      uVar10 = FUN_00424710(param_1);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar13 = 0xff000000;
      }
      if (uVar12 != 0) {
        uVar13 = uVar13 | 0xff0000;
      }
      if (uVar10 != 0) {
        uVar13 = uVar13 | 0xff00;
      }
      piVar5 = DAT_00437fb4;
      iVar11 = DAT_00437fb8;
      if (DAT_00437fb8 < 1) {
        return 0;
      }
      do {
        if (((*(uint *)(*piVar5 + 4) & uVar13) == ((uVar3 << 0x10 | uVar10) << 8 | uVar12 << 0x10))
           && (*(char *)(*piVar5 + 0x47) != '\0')) {
          uVar7 = uVar7 + 1;
        }
        iVar11 = iVar11 + -1;
        piVar5 = piVar5 + 1;
      } while (iVar11 != 0);
      return uVar7;
    }
    if (uVar3 == 0x6c736f70) {
      uVar3 = (**(code **)(**(int **)((int)param_1 + 0xa4) + 0x70))();
      return uVar3;
    }
  }
  else if ((int)uVar3 < 0x6d6f6f73) {
    if (uVar3 == 0x6d6f6f72) {
      uVar3 = FUN_00424710(param_1);
      uVar12 = FUN_00424710(param_1);
      if (*(int *)((int)DAT_00438594 + 8) <= (int)uVar3) {
        return 0;
      }
      switch(uVar12) {
      case 0:
        return *(uint *)(uVar3 * 0x14 + 0xc + (int)DAT_00438594);
      case 1:
        return *(uint *)(uVar3 * 0x14 + 0x10 + (int)DAT_00438594);
      case 2:
        return *(uint *)(uVar3 * 0x14 + 0x14 + (int)DAT_00438594);
      case 3:
        return *(uint *)(uVar3 * 0x14 + 0x18 + (int)DAT_00438594);
      default:
        return *(uint *)(uVar3 * 0x14 + 0x1c + (int)DAT_00438594);
      }
    }
    if (uVar3 == 0x6d656863) {
      uVar3 = FUN_00424710(param_1);
      if ((*(uint *)(*(int *)((int)param_1 + 0xa4) + 4) & 0xff000000) != 0x4000000) {
        return 0;
      }
      return (uint)*(byte *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 0x2acc) + 8 + uVar3 * 2);
    }
  }
  else if ((int)uVar3 < 0x6e6b6f75) {
    if (uVar3 == 0x6e6b6f74) {
      uVar3 = *(uint *)((int)puVar2 + 5);
      *(char **)((int)param_1 + 0x10) = (char *)((int)puVar2 + 10);
      return uVar3;
    }
    if (uVar3 == 0x6d6f7266) {
      return *(uint *)((int)param_1 + 0x98);
    }
  }
  else if ((int)uVar3 < 0x6e726f6f) {
    if (uVar3 == 0x6e726f6e) {
      return DAT_004382c4;
    }
    if (uVar3 == 0x6e6d6163) {
      return *(int *)(*(int *)((int)param_1 + 0xa4) + 0x82b) / 600;
    }
  }
  else if ((int)uVar3 < 0x706a6270) {
    if (uVar3 == 0x706a626f) {
      return *(uint *)(*(int *)((int)param_1 + 0x94) + 0x1e);
    }
    if (uVar3 == 0x6e747461) {
      return *(uint *)((int)param_1 + 0xa0);
    }
  }
  else if ((int)uVar3 < 0x706d6575) {
    if (uVar3 == 0x706d6574) {
      iVar11 = **(int **)((int)param_1 + 0xa4);
      LVar8 = (**(code **)(iVar11 + 0x74))();
      LVar9 = (**(code **)(iVar11 + 0x70))();
      uVar3 = FUN_0042db40(DAT_00438594,LVar9,LVar8);
      return uVar3;
    }
    if (uVar3 == 0x706c7361) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 0x115);
    }
  }
  else if ((int)uVar3 < 0x726d696d) {
    if (uVar3 == 0x726d696c) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0x12);
    }
    if (uVar3 == 0x706d7562) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0x15c);
    }
  }
  else if ((int)uVar3 < 0x726f6374) {
    if (uVar3 == 0x726f6373) {
      uVar3 = FUN_00424710(param_1);
      uVar3 = FUN_0040b0a0(DAT_00436ec0,uVar3);
      return uVar3;
    }
    if (uVar3 == 0x726e776f) {
      return *(uint *)((int)param_1 + 0x94);
    }
  }
  else if ((int)uVar3 < 0x72736f71) {
    if (uVar3 == 0x72736f70) {
      iVar11 = **(int **)((int)param_1 + 0xa4);
      iVar4 = (**(code **)(iVar11 + 0x78))();
      iVar11 = (**(code **)(iVar11 + 0x70))();
      return iVar11 + iVar4;
    }
    if (uVar3 == 0x72726163) {
      return *(uint *)(*(int *)((int)param_1 + 0x94) + 0x1a);
    }
  }
  else if ((int)uVar3 < 0x72747462) {
    if (uVar3 == 0x72747461) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 9);
    }
    if (uVar3 == 0x72746e70) {
      return DAT_00438d0c;
    }
  }
  else if ((int)uVar3 < 0x73616c64) {
    if (uVar3 == 0x73616c63) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 4);
    }
    if (uVar3 == 0x72756f68) {
      return DAT_00435e98 / 36000;
    }
  }
  else if ((int)uVar3 < 0x73646e74) {
    if (uVar3 == 0x73646e73) {
      return (*(int *)(DAT_00436eb0 + 0x58) + *(int *)(DAT_00436eb0 + 0x5c)) * 2;
    }
    if (uVar3 == 0x73637073) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 5);
    }
  }
  else if ((int)uVar3 < 0x73756e68) {
    if (uVar3 == 0x73756e67) {
      return (*(uint *)(*(int *)((int)param_1 + 0xa4) + 4) & 0xff0000) >> 0x10;
    }
    if (uVar3 == 0x736e696d) {
      return (uint)(((ulonglong)DAT_00435e98 / 600) % 0x3c);
    }
  }
  else if ((int)uVar3 < 0x74686769) {
    if (uVar3 == 0x74686768) {
      uVar3 = (**(code **)(**(int **)((int)param_1 + 0xa4) + 0x7c))();
      return uVar3;
    }
    if (uVar3 == 0x73766f6d) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 8);
    }
  }
  else if ((int)uVar3 < 0x746d696d) {
    if (uVar3 == 0x746d696c) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0xe);
    }
    if (uVar3 == 0x74696465) {
      return DAT_004352c8;
    }
  }
  else if ((int)uVar3 < 0x76697265) {
    if (uVar3 == 0x76697264) {
      uVar3 = FUN_00424710(param_1);
      if ((*(uint *)(*(int *)((int)param_1 + 0xa4) + 4) & 0xff000000) == 0x4000000) {
        return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 0x2b06 + uVar3);
      }
      return 0;
    }
    if (uVar3 == 0x74736f70) {
      uVar3 = (**(code **)(**(int **)((int)param_1 + 0xa4) + 0x74))();
      return uVar3;
    }
  }
  else if ((int)uVar3 < 0x77646e68) {
    if (uVar3 == 0x77646e67) {
      return 0x20;
    }
    if (uVar3 == 0x76746361) {
      return (uint)*(byte *)(*(int *)((int)param_1 + 0xa4) + 0x22);
    }
  }
  else {
    if (uVar3 == 0x776e6977) {
      return *(uint *)(*(int *)(DAT_00436eb0 + 0x60) + 0x14);
    }
    if (uVar3 == 0x79626162) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 0x2b74);
    }
    if (uVar3 == 0x796c6d66) {
      return *(uint *)(*(int *)((int)param_1 + 0xa4) + 4) >> 0x18;
    }
  }
  FUN_004265c0(param_1,s_Rvalue_00436c3c);
  return 0;
}

