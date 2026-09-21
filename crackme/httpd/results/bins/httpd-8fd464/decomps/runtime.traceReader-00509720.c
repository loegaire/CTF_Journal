
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.traceReader(runtime.g * ~r0) */

runtime_g * runtime_traceReader(void)

{
  runtime_guintptr l;
  runtime_g *in_RAX;
  runtime_g *extraout_RAX;
  runtime_g *extraout_RAX_00;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX_00;
  }
  if ((runtime_trace.reader != 0) &&
     ((runtime_trace.fullHead != 0 || (runtime_trace.shutdown != false)))) {
    runtime_lock2(&runtime_trace.lock);
    l = runtime_trace.reader;
    if ((runtime_trace.reader != 0) &&
       ((runtime_trace.fullHead != 0 || (runtime_trace.shutdown != false)))) {
      runtime_trace.reader = 0;
      runtime_unlock2((runtime_mutex *)l);
      return (runtime_g *)l;
    }
    runtime_unlock2(&runtime_trace.lock);
    return extraout_RAX;
  }
  return in_RAX;
}

