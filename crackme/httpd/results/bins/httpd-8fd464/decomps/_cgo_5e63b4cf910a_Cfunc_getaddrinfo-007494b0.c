
void _cgo_5e63b4cf910a_Cfunc_getaddrinfo(void *v)

{
  int iVar1;
  long extraout_RAX;
  long extraout_RAX_00;
  
                    /* Unresolved local var: anon_struct_40_6_f408af5b * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???] */
  _cgo_topofstack();
  iVar1 = getaddrinfo(*(char **)v,*(char **)((long)v + 8),*(addrinfo **)((long)v + 0x10),
                      *(addrinfo ***)((long)v + 0x18));
  _cgo_topofstack();
  *(int *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x20) = iVar1;
  return;
}

