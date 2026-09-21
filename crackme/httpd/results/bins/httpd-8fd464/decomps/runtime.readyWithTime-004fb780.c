
/* WARNING: Unknown calling convention */

void runtime_readyWithTime(runtime_sudog *s,int traceskip)

{
  long in_FS_OFFSET;
  runtime_sudog *s_spill;
  int traceskip_spill;
  int64 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (s_spill->releasetime != 0) {
    runtime_cputicks();
    s_spill->releasetime = local_18;
  }
  runtime_goready((runtime_g *)traceskip_spill,traceskip);
  return;
}

