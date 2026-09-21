
/* WARNING: Unknown calling convention */

void runtime_gcMarkTermination_func4_1(runtime_p *_p_)

{
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___mcache__prepareForSweep(_p__spill->mcache);
  return;
}

