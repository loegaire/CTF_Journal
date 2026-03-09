
int _cgo_5e63b4cf910a_C2func_getaddrinfo(void *v)

{
  int iVar1;
  int iVar2;
  long extraout_RAX;
  undefined4 *puVar3;
  int *piVar4;
  long extraout_RAX_00;
  
                    /* Unresolved local var: anon_struct_40_6_f408af5b * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???]
                       Unresolved local var: int _cgo_errno@[???] */
  _cgo_topofstack();
  puVar3 = (undefined4 *)__error();
  *puVar3 = 0;
  iVar2 = getaddrinfo(*(char **)v,*(char **)((long)v + 8),*(addrinfo **)((long)v + 0x10),
                      *(addrinfo ***)((long)v + 0x18));
  piVar4 = (int *)__error();
  iVar1 = *piVar4;
  _cgo_topofstack();
  *(int *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x20) = iVar2;
  return iVar1;
}

