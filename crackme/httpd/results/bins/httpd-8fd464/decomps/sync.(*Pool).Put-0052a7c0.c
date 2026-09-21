
/* WARNING: Unknown calling convention */

void sync___Pool__Put(sync_Pool *p,interface___ x)

{
  long *extraout_RAX;
  long in_FS_OFFSET;
  interface___ val;
  multireturn_sync_poolLocal___int_ mVar1;
  sync_Pool *p_spill;
  interface___ x_spill;
  long *local_18;
  
                    /* Unresolved local var: sync.poolLocal * l@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (x_spill._type == (runtime__type *)0x0) {
    return;
  }
  mVar1 = sync___Pool__pin(p_spill);
  val._type = (runtime__type *)mVar1.~r1;
  if (*local_18 == 0) {
    *local_18 = (long)x_spill._type;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_18[1] = (long)x_spill.data;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_18 = extraout_RAX;
    }
    x_spill._type = (runtime__type *)0x0;
  }
  if (x_spill._type != (runtime__type *)0x0) {
    val.data = x_spill._type;
    sync___poolChain__pushHead((sync_poolChain *)(local_18 + 2),val);
  }
  sync_runtime_procUnpin();
  return;
}

