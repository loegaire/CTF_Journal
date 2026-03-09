
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*gcWork).tryGet(runtime.gcWork * w, uintptr ~r0) */

uintptr runtime___gcWork__tryGet(runtime_gcWork *w)

{
  ulong uVar1;
  runtime_workbuf *prVar2;
  long lVar3;
  runtime_gcWork *extraout_RAX;
  runtime_workbuf *b;
  long in_FS_OFFSET;
  runtime_gcWork *w_spill;
  runtime_workbuf *local_28;
  
                    /* Unresolved local var: runtime.workbuf * wbuf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    w = extraout_RAX;
  }
  b = w_spill->wbuf1;
  if (b == (runtime_workbuf *)0x0) {
    local_28 = (runtime_workbuf *)w_spill;
    runtime___gcWork__init(w);
    b = w_spill->wbuf1;
  }
  if ((b->workbufhdr).nobj == 0) {
    b = w_spill->wbuf2;
    prVar2 = w_spill->wbuf1;
    w_spill->wbuf1 = b;
    w_spill->wbuf2 = prVar2;
    if ((b->workbufhdr).nobj == 0) {
      runtime_trygetfull();
      if (local_28 == (runtime_workbuf *)0x0) {
        return 0;
      }
      runtime_putempty(b);
      w_spill->wbuf1 = local_28;
      b = local_28;
    }
  }
  lVar3 = (b->workbufhdr).nobj;
  uVar1 = lVar3 - 1;
  (b->workbufhdr).nobj = uVar1;
  if (uVar1 < 0xfd) {
    return b->obj[lVar3 + -1];
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

