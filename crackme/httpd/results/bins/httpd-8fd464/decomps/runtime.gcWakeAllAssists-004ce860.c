
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcWakeAllAssists(void)

{
  long in_FS_OFFSET;
  runtime_gList local_10;
  
                    /* Unresolved local var: runtime.gList list@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_work.assistQueue.lock);
                    /* Unresolved local var: runtime.gList stack@[???] */
  local_10.head = runtime_work.assistQueue.q.head;
  runtime_work.assistQueue.q = (runtime_gQueue)ZEXT816(0);
  runtime_injectglist(&local_10);
  runtime_unlock2(&runtime_work.assistQueue.lock);
  return;
}

