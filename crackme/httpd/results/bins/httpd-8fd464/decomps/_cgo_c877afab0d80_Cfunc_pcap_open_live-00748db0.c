
void _cgo_c877afab0d80_Cfunc_pcap_open_live(void *v)

{
  long extraout_RAX;
  undefined8 uVar1;
  long extraout_RAX_00;
  
                    /* Unresolved local var: anon_struct_40_7_53fed75b * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: pcap_t * _cgo_r@[???] */
  _cgo_topofstack();
  uVar1 = pcap_open_live(*(undefined8 *)v,*(undefined4 *)((long)v + 8),
                         *(undefined4 *)((long)v + 0xc),*(undefined4 *)((long)v + 0x10),
                         *(undefined8 *)((long)v + 0x18));
  _cgo_topofstack();
  *(undefined8 *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x20) = uVar1;
  return;
}

