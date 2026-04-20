/*
 * Program: Owner_s_Kit.exe
 * Function: `eh_vector_constructor_iterator'
 * Entry: 0040ce40
 * Namespace: Global
 * Prototype: void `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)
 */


/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_0040f548;
  puStack_10 = &DAT_0040d078;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  local_20 = 0;
  if (0 < param_3) {
    do {
      (*param_4)(unaff_EDI);
      local_20 = local_20 + 1;
    } while (local_20 < param_3);
  }
  local_8 = 0xffffffff;
  FUN_0040ceb0();
  *unaff_FS_OFFSET = local_14;
  return;
}

