
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).Close(net.netFD * fd, error ~r0) */

error net___netFD__Close(net_netFD *fd)

{
  runtime__type *in_RCX;
  void *unaff_RBX;
  void *in_RDI;
  long in_FS_OFFSET;
  interface___ obj;
  error eVar1;
  interface___ finalizer;
  net_netFD *fd_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  obj.data = unaff_RBX;
  obj._type = (runtime__type *)fd_spill;
  finalizer.data = in_RDI;
  finalizer._type = in_RCX;
  runtime_SetFinalizer(obj,finalizer);
  eVar1 = internal_poll___FD__Close(&fd_spill->pfd);
  eVar1.tab = (runtime_itab *)fd_spill;
  return eVar1;
}

