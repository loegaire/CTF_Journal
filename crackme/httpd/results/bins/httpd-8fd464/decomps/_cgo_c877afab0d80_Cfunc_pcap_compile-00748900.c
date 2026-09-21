
void _cgo_c877afab0d80_Cfunc_pcap_compile(void *v)

{
  undefined4 uVar1;
  long extraout_RAX;
  long extraout_RAX_00;
  
                    /* Unresolved local var: anon_struct_40_7_5652a926 * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???] */
  _cgo_topofstack();
  uVar1 = pcap_compile(*(undefined8 *)v,*(undefined8 *)((long)v + 8),*(undefined8 *)((long)v + 0x10)
                       ,*(undefined4 *)((long)v + 0x18),*(undefined4 *)((long)v + 0x1c));
  _cgo_topofstack();
  *(undefined4 *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x20) = uVar1;
  return;
}

