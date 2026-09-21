
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.freeSomeWbufs(bool preemptible, bool ~r1) */

bool runtime_freeSomeWbufs(bool preemptible)

{
  runtime_mspan *prVar1;
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  bool preemptible_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_work.wbufSpans.lock);
  if ((runtime_gcphase == 0) && (runtime_work.wbufSpans.free.first != (runtime_mspan *)0x0)) {
    runtime_systemstack();
    prVar1 = runtime_work.wbufSpans.free.first;
    runtime_unlock2((runtime_mutex *)runtime_work.wbufSpans.free.first);
    return SUB81(prVar1,0);
  }
  runtime_unlock2(&runtime_work.wbufSpans.lock);
  return (bool)extraout_AL;
}

