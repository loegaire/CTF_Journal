
void _cgo_c877afab0d80_Cfunc_pcap_wait(void *v)

{
  uint uVar1;
  int iVar2;
  long extraout_RAX;
  long extraout_RAX_00;
  pollfd fds [1];
  
                    /* Unresolved local var: anon_struct_24_5_27949731 * _cgo_a@[???]
                       Unresolved local var: char * _cgo_stktop@[???]
                       Unresolved local var: int _cgo_r@[???] */
  _cgo_topofstack();
  uVar1 = *(uint *)((long)v + 8);
                    /* Unresolved local var: int fd@[???] */
  iVar2 = pcap_get_selectable_fd(*(undefined8 *)v);
  if (-1 < iVar2) {
    fds[0].events = 1;
    fds[0].fd = iVar2;
    iVar2 = poll((pollfd *)fds,1,-(uint)(uVar1 == 0) | uVar1);
  }
  _cgo_topofstack();
  *(int *)((long)v + (extraout_RAX_00 - extraout_RAX) + 0x10) = iVar2;
  return;
}

