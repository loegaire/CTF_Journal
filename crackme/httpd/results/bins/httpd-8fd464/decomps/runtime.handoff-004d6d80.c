
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.handoff(runtime.workbuf * b, runtime.workbuf * ~r1) */

runtime_workbuf * runtime_handoff(runtime_workbuf *b)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  runtime_workbuf *b_spill;
  runtime_workbuf *local_28;
  
                    /* Unresolved local var: runtime.workbuf * b1@[???]
                       Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_getempty();
  lVar1 = (b_spill->workbufhdr).nobj;
  lVar2 = lVar1 / 2;
  (b_spill->workbufhdr).nobj = lVar1 - lVar2;
  (local_28->workbufhdr).nobj = lVar2;
  if ((ulong)(b_spill->workbufhdr).nobj < 0xfd) {
    runtime_memmove();
    runtime_putfull(b_spill);
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

