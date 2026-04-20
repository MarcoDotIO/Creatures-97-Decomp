/*
 * Program: Creatures.exe
 * Function: FUN_0040b1e0
 * Entry: 0040b1e0
 * Namespace: Global
 * Prototype: BOOL FUN_0040b1e0(RECT * param_1, POINT * param_2)
 */


BOOL __cdecl FUN_0040b1e0(RECT *param_1,POINT *param_2)

{
  BOOL BVar1;
  
  if (param_1->right < 0x20a0) {
    BVar1 = PtInRect(param_1,*param_2);
    return BVar1;
  }
  if (((param_1->top <= param_2->y) && (param_2->y < param_1->bottom)) &&
     ((param_2->x < param_1->right + -0x20a0 || (param_1->left <= param_2->x)))) {
    return 1;
  }
  return 0;
}

