
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*cancelCtx).Done(context.cancelCtx * c, <-chan_struct_{}
   ~r0) */

<_chan_struct___ context___cancelCtx__Done(context_cancelCtx *c)

{
  uint uVar1;
  sync_Mutex *m;
  <_chan_struct___ extraout_RAX;
  <_chan_struct___ extraout_RAX_00;
  long in_FS_OFFSET;
  interface___ val;
  context_cancelCtx *c_spill;
  void *pvStack0000000000000010;
  void *local_58;
  runtime__type *local_38;
  void *pvStack_30;
  runtime__type *local_28;
  runtime__type *prStack_20;
  
                    /* Unresolved local var: interface_{} d@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvStack0000000000000010 = (void *)0x0;
                    /* Unresolved local var: sync/atomic.ifaceWords * vp@[???]
                       Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  local_28 = (c_spill->done).v._type;
  if ((local_28 == (runtime__type *)0x0) || (local_28 == (runtime__type *)0xffffffffffffffff)) {
    local_28 = (runtime__type *)0x0;
    prStack_20 = (runtime__type *)0x0;
  }
  else {
    prStack_20 = (c_spill->done).v.data;
  }
  if (local_28 == (runtime__type *)0x0) {
    m = (sync_Mutex *)0x0;
    LOCK();
    uVar1 = (c_spill->mu).state;
    if (uVar1 == 0) {
      (c_spill->mu).state = 1;
    }
    else {
      m = (sync_Mutex *)(ulong)uVar1;
    }
    UNLOCK();
    prStack_20 = (runtime__type *)&c_spill->mu;
    if (uVar1 != 0) {
      sync___Mutex__lockSlow(m);
                    /* Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
    }
    local_38 = (c_spill->done).v._type;
    if ((local_38 == (runtime__type *)0x0) || (local_38 == (runtime__type *)0xffffffffffffffff)) {
      local_38 = (runtime__type *)0x0;
      pvStack_30 = (void *)0x0;
    }
    else {
      pvStack_30 = (c_spill->done).v.data;
    }
    if (local_38 == (runtime__type *)0x0) {
      runtime_makechan((runtime_chantype *)&DAT_00222ea0,(int)prStack_20);
      val.data = local_58;
      val._type = prStack_20;
      sync_atomic___Value__Store((sync_atomic_Value *)&DAT_00222ea0,val);
      local_38 = (runtime__type *)&DAT_00222ea0;
      pvStack_30 = local_58;
    }
    c_spill = (context_cancelCtx *)&DAT_00222ea0;
    if (local_38 == (runtime__type *)&DAT_00222ea0) {
      pvStack0000000000000010 = pvStack_30;
      sync___Mutex__Unlock((sync_Mutex *)prStack_20);
      return extraout_RAX;
    }
    runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,prStack_20,(runtime__type *)&DAT_00222ea0);
  }
  else if (local_28 == (runtime__type *)&DAT_00222ea0) {
    return (<_chan_struct___)&DAT_00222ea0;
  }
  runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,prStack_20,(runtime__type *)c_spill);
  runtime_deferreturn();
  return extraout_RAX_00;
}

