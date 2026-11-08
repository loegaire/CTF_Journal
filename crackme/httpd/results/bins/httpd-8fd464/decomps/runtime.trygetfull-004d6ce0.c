
/* WARNING: Removing unreachable block (ram,0x004d6d1f) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.trygetfull(runtime.workbuf * ~r0) */

runtime_workbuf * runtime_trygetfull(void)

{
  runtime_workbuf *in_RAX;
  runtime_workbuf *extraout_RAX;
  runtime_workbuf *prVar1;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.workbuf * b@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
                    /* Unresolved local var: uint64 old@[???]
                       Unresolved local var: runtime.lfnode * node@[???]
                       Unresolved local var: uint64 next@[???] */
  if (runtime_work.full == 0) {
    prVar1 = (runtime_workbuf *)0x0;
  }
  else {
    prVar1 = (runtime_workbuf *)(((long)runtime_work.full >> 0x13) << 3);
    LOCK();
    UNLOCK();
    in_RAX = (runtime_workbuf *)runtime_work.full;
    runtime_work.full = (prVar1->workbufhdr).node.next;
  }
  if (prVar1 != (runtime_workbuf *)0x0) {
    runtime___workbuf__checknonempty(in_RAX);
    return prVar1;
  }
  return in_RAX;
}

