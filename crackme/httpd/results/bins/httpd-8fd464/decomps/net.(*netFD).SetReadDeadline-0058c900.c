
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).SetReadDeadline(net.netFD * fd, time.Time t, error
   ~r1) */

error net___netFD__SetReadDeadline(net_netFD *fd,time_Time t)

{
  int64 iVar1;
  int in_RSI;
  time_Location *ptVar2;
  long in_FS_OFFSET;
  time_Time t_00;
  error eVar3;
  net_netFD *fd_spill;
  time_Time t_spill;
  undefined8 local_18;
  
  ptVar2 = t.loc;
  iVar1 = t.ext;
  t_00.wall = t.wall;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  t_00.ext = iVar1;
  t_00.loc = ptVar2;
  eVar3 = internal_poll_setDeadlineImpl((internal_poll_FD *)t_spill.loc,t_00,in_RSI);
  eVar3.tab = local_18;
  return eVar3;
}

