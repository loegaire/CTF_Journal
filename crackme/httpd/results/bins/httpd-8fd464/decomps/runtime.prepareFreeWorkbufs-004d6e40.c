
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_prepareFreeWorkbufs(void)

{
  runtime_mspan *prVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_work.wbufSpans.lock);
  if (runtime_work.full == 0) {
    runtime_work.empty = 0;
                    /* Unresolved local var: runtime.mspan * s@[???] */
    prVar1 = runtime_work.wbufSpans.busy.first;
    if (runtime_work.wbufSpans.busy.first != (runtime_mspan *)0x0) {
      for (; prVar1 != (runtime_mspan *)0x0; prVar1 = prVar1->next) {
        prVar1->list = &runtime_work.wbufSpans.free;
      }
      if (runtime_work.wbufSpans.free.first == (runtime_mspan *)0x0) {
        runtime_work.wbufSpans.free.first = runtime_work.wbufSpans.busy.first;
        runtime_work.wbufSpans.free.last = runtime_work.wbufSpans.busy.last;
      }
      else {
        (runtime_work.wbufSpans.busy.last)->next = runtime_work.wbufSpans.free.first;
        (runtime_work.wbufSpans.free.first)->prev = runtime_work.wbufSpans.busy.last;
        runtime_work.wbufSpans.free.first = runtime_work.wbufSpans.busy.first;
      }
      runtime_work.wbufSpans.busy = (runtime_mSpanList)ZEXT816(0);
    }
    runtime_unlock2(&runtime_work.wbufSpans.lock);
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_002a6447;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

