/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040c340
 * Entry: 0040c340
 * Namespace: Global
 * Prototype: undefined FUN_0040c340(char * param_1, undefined1 * param_2)
 */


void FUN_0040c340(char *param_1,undefined1 *param_2)

{
  int iVar1;
  uint local_4;
  
  sscanf(param_1,&DAT_004125e0,&local_4);
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

