
/* WARNING: Unknown calling convention */

void runtime_freemcache(runtime_mcache *c)

{
  long in_FS_OFFSET;
  runtime_mcache *c_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_systemstack();
  return;
}

