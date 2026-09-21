
void _cgo_c877afab0d80_Cfunc_pcap_next_ex_escaping(void *v)

{
  int iVar1;
  long extraout_RAX;
  long extraout_RAX_00;
  int iVar2;
  
                    /* Unresolved local var: anon_struct_32_5_fda8fcba * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???] */
  _cgo_topofstack();
                    /* Unresolved local var: int ex@[???] */
  iVar1 = pcap_next_ex(*(undefined8 *)v,*(undefined8 *)((long)v + 8),*(undefined8 *)((long)v + 0x10)
                      );
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = iVar1;
  }
  _cgo_topofstack();
  *(int *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x18) = iVar2;
  return;
}

