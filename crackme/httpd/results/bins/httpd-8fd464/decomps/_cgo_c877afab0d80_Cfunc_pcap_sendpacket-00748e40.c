
void _cgo_c877afab0d80_Cfunc_pcap_sendpacket(void *v)

{
  undefined4 uVar1;
  long extraout_RAX;
  long extraout_RAX_00;
  
                    /* Unresolved local var: anon_struct_32_6_3ed3417f * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???] */
  _cgo_topofstack();
  uVar1 = pcap_sendpacket(*(undefined8 *)v,*(undefined8 *)((long)v + 8),
                          *(undefined4 *)((long)v + 0x10));
  _cgo_topofstack();
  *(undefined4 *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x18) = uVar1;
  return;
}

