/*
 * Program: Creatures.exe
 * Function: FUN_0042d000
 * Entry: 0042d000
 * Namespace: Global
 * Prototype: undefined FUN_0042d000(void * this, int param_1, int param_2, int param_3)
 */


void __thiscall FUN_0042d000(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  int local_40c;
  undefined4 local_400 [256];
  
  iVar1 = param_1 + 8 + *(int *)(param_2 + 0x23 + param_3 * 0x3a) * 0xc2;
  iVar9 = *(int *)(iVar1 + 0xab);
  uVar11 = (uint)*(byte *)(param_3 + 0xc + (int)this);
  if ((int)uVar11 <= iVar9) {
    puVar4 = *(undefined4 **)((int)this + param_3 * 4 + 4);
    if (uVar11 != 0) {
      uVar10 = uVar11;
      puVar8 = local_400;
      do {
        uVar3 = *puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 10);
        uVar10 = uVar10 - 1;
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
    }
    iVar12 = 0;
    iVar14 = 0;
    if (0 < iVar9) {
      do {
        iVar9 = *(int *)(iVar1 + 0xab);
        iVar5 = rand();
        iVar5 = iVar5 % iVar9;
        iVar12 = iVar12 + 1;
        iVar9 = *(int *)(iVar1 + 0xa7);
        uVar3 = *(undefined4 *)(iVar14 + iVar9);
        *(undefined4 *)(iVar14 + iVar9) = *(undefined4 *)(iVar9 + iVar5 * 4);
        *(undefined4 *)(*(int *)(iVar1 + 0xa7) + iVar5 * 4) = uVar3;
        iVar14 = iVar14 + 4;
      } while (iVar12 < *(int *)(iVar1 + 0xab));
    }
    local_40c = 0;
    if (-1 < (int)(*(int *)(iVar1 + 0xab) - uVar11)) {
      do {
        iVar9 = 0;
        if (uVar11 != 0) {
          do {
            cVar2 = *(char *)(*(int *)(*(int *)(iVar1 + 0xa7) + (local_40c + iVar9) * 4) + 0xf);
            if ((cVar2 != '\0') && (iVar14 = iVar9 + 1, iVar14 < (int)uVar11)) {
              piVar6 = (int *)(*(int *)(iVar1 + 0xa7) + (local_40c + iVar14) * 4);
              do {
                if (*(char *)(*piVar6 + 0xf) == cVar2) {
                  iVar9 = 9999;
                  break;
                }
                piVar6 = piVar6 + 1;
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar11);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar11);
        }
        if (iVar9 < 9999) {
          if (uVar11 != 0) {
            iVar9 = local_40c << 2;
            uVar10 = uVar11;
            pvVar13 = *(void **)((int)this + param_3 * 4 + 4);
            do {
              iVar9 = iVar9 + 4;
              FUN_0042a610(pvVar13,*(undefined4 *)(*(int *)(iVar1 + 0xa7) + -4 + iVar9),iVar1,
                           param_2,param_3);
              uVar10 = uVar10 - 1;
              pvVar13 = (void *)((int)pvVar13 + 10);
            } while (uVar10 != 0);
          }
          iVar9 = 0;
          iVar14 = 0;
          uVar10 = FUN_0042d2a0(this,param_3);
          if (0 < *(int *)(param_2 + 0xab)) {
            do {
              pvVar13 = *(void **)(*(int *)(param_2 + 0xa7) + iVar9);
              if ((*(byte *)((int)pvVar13 + param_3 + 0xc) == uVar11) &&
                 (uVar7 = FUN_0042d2a0(pvVar13,param_3), uVar7 == uVar10)) break;
              iVar9 = iVar9 + 4;
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(param_2 + 0xab));
          }
          if (*(int *)(param_2 + 0xab) <= iVar14) {
            cVar2 = *(char *)(param_2 + 0xbc + param_3);
            if (cVar2 == '\0') {
              return;
            }
            *(char *)(param_2 + 0xbc + param_3) = cVar2 + -1;
            return;
          }
        }
        local_40c = local_40c + 1;
      } while (local_40c <= (int)(*(int *)(iVar1 + 0xab) - uVar11));
    }
    if (uVar11 != 0) {
      puVar4 = local_400;
      puVar8 = *(undefined4 **)((int)this + param_3 * 4 + 4);
      do {
        uVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar8 = uVar3;
        uVar11 = uVar11 - 1;
        *(undefined1 *)((int)puVar8 + 7) = 0;
        *(undefined1 *)(puVar8 + 2) = 0;
        *(undefined1 *)((int)puVar8 + 9) = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 10);
      } while (uVar11 != 0);
    }
  }
  return;
}

