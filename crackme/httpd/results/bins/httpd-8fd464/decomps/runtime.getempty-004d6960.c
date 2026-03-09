
/* WARNING: Removing unreachable block (ram,0x004d6b5d) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.getempty(runtime.workbuf * ~r0) */

runtime_workbuf * runtime_getempty(void)

{
  runtime_workbuf *in_RAX;
  runtime_workbuf *extraout_RAX;
  runtime_workbuf *prVar1;
  runtime_mspan *unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_mspan *local_48;
  ulong local_40;
  runtime_workbuf *local_38;
  runtime_workbuf *local_30;
  ulong local_28;
  runtime_workbuf *local_20;
  code *local_18;
  runtime_mspan **pprStack_10;
  
                    /* Unresolved local var: runtime.workbuf * b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  if (runtime_work.empty == 0) {
    prVar1 = (runtime_workbuf *)0x0;
  }
  else {
    if (runtime_work.empty == 0) {
      prVar1 = (runtime_workbuf *)0x0;
    }
    else {
      prVar1 = (runtime_workbuf *)(((long)runtime_work.empty >> 0x13) << 3);
      unaff_RBX = (runtime_mspan *)&runtime_work.empty;
      LOCK();
      UNLOCK();
      in_RAX = (runtime_workbuf *)runtime_work.empty;
      runtime_work.empty = (prVar1->workbufhdr).node.next;
    }
    if (prVar1 != (runtime_workbuf *)0x0) {
      local_20 = prVar1;
      runtime___workbuf__checkempty(in_RAX);
      prVar1 = local_20;
    }
  }
  if (prVar1 == (runtime_workbuf *)0x0) {
                    /* Unresolved local var: runtime.mspan * s@[???] */
    local_48 = (runtime_mspan *)0x0;
    local_38 = prVar1;
    if (runtime_work.wbufSpans.free.first != (runtime_mspan *)0x0) {
      runtime_lock2(&runtime_work.wbufSpans.lock);
      local_48 = runtime_work.wbufSpans.free.first;
      if (runtime_work.wbufSpans.free.first != (runtime_mspan *)0x0) {
        runtime___mSpanList__remove
                  ((runtime_mSpanList *)runtime_work.wbufSpans.free.first,unaff_RBX);
        runtime___mSpanList__insert((runtime_mSpanList *)local_48,unaff_RBX);
      }
      runtime_unlock2(&runtime_work.wbufSpans.lock);
    }
    if (local_48 == (runtime_mspan *)0x0) {
      local_18 = runtime_getempty_func1;
      pprStack_10 = &local_48;
      runtime_systemstack();
      if (local_48 == (runtime_mspan *)0x0) {
        s.len = (int)unaff_RBX;
        s.str = &DAT_00295b8f;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      runtime_lock2(&runtime_work.wbufSpans.lock);
      runtime___mSpanList__insert((runtime_mSpanList *)local_48,unaff_RBX);
      runtime_unlock2(&runtime_work.wbufSpans.lock);
    }
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: runtime.workbuf * newb@[???] */
    local_28 = 0;
    prVar1 = local_38;
    while (local_28 + 0x800 < 0x8001) {
      local_20 = (runtime_workbuf *)(local_48->startAddr + local_28);
      (local_20->workbufhdr).nobj = 0;
      local_40 = local_28;
      local_30 = prVar1;
      local_28 = local_28 + 0x800;
      runtime_lfnodeValidate((runtime_lfnode *)local_48);
      prVar1 = local_20;
      if (local_40 != 0) {
        runtime_putempty(local_20);
        prVar1 = local_30;
      }
    }
  }
  return prVar1;
}

