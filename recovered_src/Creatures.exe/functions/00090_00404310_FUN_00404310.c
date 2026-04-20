/*
 * Program: Creatures.exe
 * Function: FUN_00404310
 * Entry: 00404310
 * Namespace: Global
 * Prototype: bool FUN_00404310(void * this, undefined1 * param_1)
 */


bool __thiscall FUN_00404310(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  HPALETTE pHVar4;
  LOGPALETTE local_404 [5];
  undefined1 local_3d8 [984];
  
  FUN_00404220(local_404);
  puVar2 = local_3d8;
  do {
    uVar1 = param_1[1];
    *puVar2 = *param_1;
    puVar2[1] = uVar1;
    puVar3 = puVar2 + 4;
    puVar2[2] = param_1[2];
    puVar2 = puVar3;
    param_1 = param_1 + 3;
  } while (puVar3 < local_3d8 + 0x3b0);
  pHVar4 = CreatePalette(local_404);
  *(HPALETTE *)this = pHVar4;
  return (bool)('\x01' - (pHVar4 == (HPALETTE)0x0));
}

