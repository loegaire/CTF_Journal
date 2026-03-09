
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixListener).accept(net.UnixListener * ln, net.UnixConn *
   ~r0, error ~r1) */

multireturn_net_UnixConn___error__conflict net___UnixListener__accept(net_UnixListener *ln)

{
  undefined8 extraout_RAX;
  long in_FS_OFFSET;
  multireturn_net_netFD___error_ mVar1;
  multireturn_net_UnixConn___error__conflict mVar2;
  multireturn_net_UnixConn___error__conflict mVar3;
  net_UnixListener *ln_spill;
  undefined8 local_28;
  void *local_20;
  
                    /* Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar1 = net___netFD__accept(ln_spill->fd);
  mVar2.~r1.tab = mVar1.err.tab;
  if (local_20 == (void *)0x0) {
    runtime_newobject((runtime__type *)&DAT_00243a20);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)local_28 = local_28;
    }
    else {
      runtime_gcWriteBarrier();
      local_28 = extraout_RAX;
    }
    mVar2.~r0 = (net_UnixConn *)local_28;
    mVar2.~r1.data = local_20;
    return mVar2;
  }
  mVar3.~r1.tab = mVar2.~r1.tab;
  mVar3.~r0 = (net_UnixConn *)local_28;
  mVar3.~r1.data = local_20;
  return mVar3;
}

