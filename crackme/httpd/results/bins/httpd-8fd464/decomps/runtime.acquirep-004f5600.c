
/* WARNING: Unknown calling convention */

void runtime_acquirep(runtime_p *_p_)

{
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_wirep(_p__spill);
  runtime___mcache__prepareForSweep(_p__spill->mcache);
  if (runtime_trace.enabled != false) {
    runtime_traceProcStart();
  }
  return;
}

