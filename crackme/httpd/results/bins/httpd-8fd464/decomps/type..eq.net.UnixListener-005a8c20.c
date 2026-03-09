
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.UnixListener(net.UnixListener * p, net.UnixListener *
   q, bool r) */

bool type__eq_net_UnixListener(net_UnixListener *p,net_UnixListener *q)

{
  long in_FS_OFFSET;
  net_UnixListener *p_spill;
  net_UnixListener *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->fd == p_spill->fd) && ((q_spill->path).len == (p_spill->path).len)) &&
      (q_spill->unlink == p_spill->unlink)) &&
     ((((q_spill->unlinkOnce).done == (p_spill->unlinkOnce).done &&
       ((q_spill->unlinkOnce).m.state == (p_spill->unlinkOnce).m.state)) &&
      ((q_spill->unlinkOnce).m.sema == (p_spill->unlinkOnce).m.sema)))) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

