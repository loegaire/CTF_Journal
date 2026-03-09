
/* WARNING: Unknown calling convention */

void runtime_gcMarkDone_func1_1(runtime_p *_p_)

{
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_wbBufFlush1(_p__spill);
  runtime___gcWork__dispose((runtime_gcWork *)_p__spill);
  if ((_p__spill->gcw).flushedWork != false) {
    LOCK();
    runtime_gcMarkDoneFlushed = runtime_gcMarkDoneFlushed + 1;
    UNLOCK();
    (_p__spill->gcw).flushedWork = false;
  }
  return;
}

