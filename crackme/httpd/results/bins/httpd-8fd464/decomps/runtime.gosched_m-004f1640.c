
/* WARNING: Unknown calling convention */

void runtime_gosched_m(runtime_g *gp)

{
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_trace.enabled != false) {
    runtime_traceGoSched();
  }
  runtime_goschedImpl(gp_spill);
  return;
}

