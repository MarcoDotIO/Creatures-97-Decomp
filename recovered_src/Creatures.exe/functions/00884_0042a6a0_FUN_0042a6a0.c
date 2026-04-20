/*
 * Program: Creatures.exe
 * Function: FUN_0042a6a0
 * Entry: 0042a6a0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0042a6a0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0042a6a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042a738;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *param_1 = &PTR_LAB_0042f018;
  param_1[1] = &PTR_LAB_0043124c;
  _eh_vector_constructor_iterator_
            (param_1 + 2,0xc2,0x10,(_func_void_void_ptr *)&LAB_0042a080,
             (_func_void_void_ptr *)&LAB_0042a130);
  *param_1 = &PTR_LAB_004315f8;
  param_1[1] = &PTR_LAB_004315f4;
  param_1[0x30a] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

