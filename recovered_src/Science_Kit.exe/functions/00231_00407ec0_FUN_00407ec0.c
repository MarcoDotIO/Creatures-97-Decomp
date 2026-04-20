/*
 * Program: Science_Kit.exe
 * Function: FUN_00407ec0
 * Entry: 00407ec0
 * Namespace: Global
 * Prototype: undefined FUN_00407ec0(char * param_1, undefined1 * param_2)
 */


void FUN_00407ec0(char *param_1,undefined1 *param_2)

{
  int iVar1;
  uint local_4;
  
  sscanf(param_1,&DAT_00415550,&local_4);
  iVar1 = 4;
  do {
    *param_2 = (undefined1)local_4;
    param_2 = param_2 + 1;
    local_4 = local_4 >> 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_2 = 0;
  return;
}

