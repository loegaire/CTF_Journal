
void _cgo_5e63b4cf910a_Cfunc_getnameinfo(void *v)

{
  int iVar1;
  long extraout_RAX;
  long extraout_RAX_00;
  
                    /* Unresolved local var: anon_struct_64_11_35d3a470 * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???] */
  _cgo_topofstack();
  iVar1 = getnameinfo(*(sockaddr **)v,*(socklen_t *)((long)v + 8),*(char **)((long)v + 0x10),
                      (socklen_t)*(undefined8 *)((long)v + 0x18),*(char **)((long)v + 0x20),
                      (socklen_t)*(undefined8 *)((long)v + 0x28),*(uint *)((long)v + 0x30));
  _cgo_topofstack();
  *(int *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x38) = iVar1;
  return;
}

