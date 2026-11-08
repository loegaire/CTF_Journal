
/* WARNING: Unknown calling convention */

void net___netFD__connect_func1
               (chan_struct___ done,chan_error interruptRes,error *_ret,net_netFD *fd)

{
  runtime_itab *tab;
  void *y;
  runtime_itab *prVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  chan_struct___ done_spill;
  chan_error interruptRes_spill;
  error *_ret_spill;
  net_netFD *fd_spill;
  char local_30;
  runtime_itab *local_18;
  void *pvStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_closechan((runtime_hchan *)done_spill);
                    /* Unresolved local var: error ctxErr@[???] */
  local_18 = (runtime_itab *)0x0;
  pvStack_10 = (void *)0x0;
  runtime_chanrecv1((runtime_hchan *)&stack0xffffffffffffffe8,interruptRes);
  y = pvStack_10;
  tab = local_18;
  if ((local_18 != (runtime_itab *)0x0) && (_ret_spill->tab == (runtime_itab *)0x0)) {
    if (((context_Canceled.tab != local_18) ||
        (runtime_ifaceeq(local_18,context_Canceled.data,pvStack_10), prVar1 = net_errCanceled.tab,
        pvVar2 = net_errCanceled.data, local_30 == '\0')) &&
       ((prVar1 = tab, pvVar2 = y, context_DeadlineExceeded.tab == tab &&
        (runtime_ifaceeq(tab,context_DeadlineExceeded.data,y), local_30 != '\0')))) {
      prVar1 = net_errTimeout.tab;
      pvVar2 = net_errTimeout.data;
    }
    _ret_spill->tab = prVar1;
    if (runtime_writeBarrier._0_4_ == 0) {
      _ret_spill->data = pvVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    net___netFD__Close(fd_spill);
  }
  return;
}

