
/* WARNING: Unknown calling convention */

void net___Resolver__lookupIPAddr_func2
               (<_chan_internal_singleflight_Result ch,context_CancelFunc **lookupGroupCancel)

{
  long in_FS_OFFSET;
  <_chan_internal_singleflight_Result ch_spill;
  context_CancelFunc **lookupGroupCancel_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_chanrecv1((runtime_hchan *)ch_spill,lookupGroupCancel);
  (**lookupGroupCancel_spill)();
  return;
}

