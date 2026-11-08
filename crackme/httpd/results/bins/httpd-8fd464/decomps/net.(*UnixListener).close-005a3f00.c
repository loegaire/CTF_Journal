
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixListener).close(net.UnixListener * ln, error ~r0) */

error net___UnixListener__close(net_UnixListener *ln)

{
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  error eVar1;
  net_UnixListener *ln_spill;
  runtime_itab *local_28;
  code *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = net___UnixListener__close_func1;
  if ((ln_spill->unlinkOnce).done == 0) {
    local_28 = (runtime_itab *)&stack0xffffffffffffffe8;
    sync___Once__doSlow((sync_Once *)ln_spill,unaff_RBX);
  }
  eVar1 = net___netFD__Close(ln_spill->fd);
  eVar1.tab = local_28;
  return eVar1;
}

