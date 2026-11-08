
/* WARNING: Unknown calling convention */

void runtime_traceProcFree(runtime_p *pp)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  runtime_p *pp_spill;
  
                    /* Unresolved local var: runtime.traceBufPtr buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = (undefined8 *)pp_spill->tracebuf;
  pp_spill->tracebuf = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  runtime_lock2(&runtime_trace.lock);
  *puVar1 = 0;
  puVar2 = puVar1;
  if (runtime_trace.fullHead != 0) {
    *(undefined8 **)runtime_trace.fullTail = puVar1;
    puVar2 = (undefined8 *)runtime_trace.fullHead;
  }
  runtime_trace.fullHead = (runtime_traceBufPtr)puVar2;
  runtime_trace.fullTail = (runtime_traceBufPtr)puVar1;
  runtime_unlock2(&runtime_trace.lock);
  return;
}

