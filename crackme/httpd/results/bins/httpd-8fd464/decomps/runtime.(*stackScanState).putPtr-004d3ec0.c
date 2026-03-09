
/* WARNING: Unknown calling convention */

void runtime___stackScanState__putPtr(runtime_stackScanState *s,uintptr p,bool conservative)

{
  int *piVar1;
  ulong uVar2;
  runtime_stackWorkBuf **pprVar3;
  runtime_stackWorkBuf *prVar4;
  long in_FS_OFFSET;
  string s_00;
  runtime_stackScanState *s_spill;
  uintptr p_spill;
  bool conservative_spill;
  runtime_stackWorkBuf *local_20;
  
                    /* Unresolved local var: runtime.stackWorkBuf * * head@[???]
                       Unresolved local var: runtime.stackWorkBuf * buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((p_spill < (s_spill->stack).lo) || ((s_spill->stack).hi <= p_spill)) {
    s_00.len = (int)s_spill;
    s_00.str = &DAT_0029fb61;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  pprVar3 = &s_spill->buf;
  if (conservative_spill) {
    pprVar3 = &s_spill->cbuf;
  }
  prVar4 = *pprVar3;
  if (prVar4 == (runtime_stackWorkBuf *)0x0) {
    runtime_getempty();
    (local_20->stackWorkBufHdr).workbufhdr.nobj = 0;
    (local_20->stackWorkBufHdr).next = (runtime_stackWorkBuf *)0x0;
    *pprVar3 = local_20;
    prVar4 = local_20;
  }
  else if ((prVar4->stackWorkBufHdr).workbufhdr.nobj == 0xfc) {
    prVar4 = s_spill->freeBuf;
    if (prVar4 == (runtime_stackWorkBuf *)0x0) {
      runtime_getempty();
    }
    else {
      s_spill->freeBuf = (runtime_stackWorkBuf *)0x0;
      local_20 = prVar4;
    }
    (local_20->stackWorkBufHdr).workbufhdr.nobj = 0;
    (local_20->stackWorkBufHdr).next = *pprVar3;
    *pprVar3 = local_20;
    prVar4 = local_20;
  }
  uVar2 = (prVar4->stackWorkBufHdr).workbufhdr.nobj;
  if (uVar2 < 0xfc) {
    prVar4->obj[uVar2] = p_spill;
    piVar1 = &(prVar4->stackWorkBufHdr).workbufhdr.nobj;
    *piVar1 = *piVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

