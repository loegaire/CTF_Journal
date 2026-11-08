
/* WARNING: Unknown calling convention */

void runtime___mheap__freeSpan(runtime_mheap *h,runtime_mspan *s)

{
  long in_FS_OFFSET;
  runtime_mheap *h_spill;
  runtime_mspan *s_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_systemstack();
  return;
}

