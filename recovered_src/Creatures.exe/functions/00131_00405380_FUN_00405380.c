/*
 * Program: Creatures.exe
 * Function: FUN_00405380
 * Entry: 00405380
 * Namespace: Global
 * Prototype: bool FUN_00405380(void)
 */


bool FUN_00405380(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_00403e50(&DAT_004382d0,s_PALETTE_DTA_00435c0c);
  if (iVar2 != 0) {
    iVar2 = FUN_00403e50(&DAT_00438000,s_PALETTE_DTA_00435c0c);
    if (iVar2 != 0) {
      iVar2 = FUN_00403e50(&DAT_00437cd0,s_PALETTE_DTA_00435c0c);
      if (iVar2 != 0) {
        iVar2 = FUN_00403e50(&DAT_00438598,s_PALETTE_DTA_00435c0c);
        if (iVar2 != 0) {
          bVar1 = FUN_00404310(&DAT_00437cc8,&DAT_004382d0);
          return (bool)('\x01' - (CONCAT31(extraout_var,bVar1) == 0));
        }
      }
    }
  }
  return false;
}

