
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*stackScanState).getPtr(runtime.stackScanState * s,
   uintptr p, bool conservative) */

multireturn_uintptr_bool_ runtime___stackScanState__getPtr(runtime_stackScanState *s)

{
  ulong uVar1;
  runtime_stackWorkBuf **pprVar2;
  long lVar3;
  runtime_workbuf *b;
  runtime_stackScanState *prVar4;
  runtime_stackWorkBuf *prVar5;
  long in_FS_OFFSET;
  multireturn_uintptr_bool_ mVar6;
  multireturn_uintptr_bool_ mVar7;
  runtime_stackScanState *s_spill;
  runtime_stackWorkBuf **local_18 [2];
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.stackWorkBuf * * head@[???] */
  local_18[0] = &s_spill->buf;
  local_18[1] = &s_spill->cbuf;
  b = (runtime_workbuf *)0x0;
  do {
    mVar6.conservative = SUB81(&s_spill->cbuf,0);
    if (1 < (long)b) {
      prVar4 = (runtime_stackScanState *)0x0;
      if (s_spill->freeBuf != (runtime_stackWorkBuf *)0x0) {
        runtime_putempty((runtime_workbuf *)s_spill->freeBuf);
        s_spill->freeBuf = (runtime_stackWorkBuf *)0x0;
        prVar4 = s_spill;
      }
      mVar7.conservative = mVar6.conservative;
      mVar7.p = (uintptr)prVar4;
      return mVar7;
    }
    pprVar2 = local_18[(long)b];
                    /* Unresolved local var: runtime.stackWorkBuf * buf@[???] */
    prVar5 = *pprVar2;
    if (prVar5 != (runtime_stackWorkBuf *)0x0) {
      if ((prVar5->stackWorkBufHdr).workbufhdr.nobj != 0) {
LAB_004d40d1:
        lVar3 = (prVar5->stackWorkBufHdr).workbufhdr.nobj;
        uVar1 = lVar3 - 1;
        (prVar5->stackWorkBufHdr).workbufhdr.nobj = uVar1;
        if (uVar1 < 0xfc) {
          mVar6.p = prVar5->obj[lVar3 + -1];
          return mVar6;
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (s_spill->freeBuf != (runtime_stackWorkBuf *)0x0) {
        runtime_putempty(b);
      }
      s_spill->freeBuf = prVar5;
      prVar5 = (prVar5->stackWorkBufHdr).next;
      *pprVar2 = prVar5;
      if (prVar5 != (runtime_stackWorkBuf *)0x0) goto LAB_004d40d1;
    }
    b = (runtime_workbuf *)((long)&(b->workbufhdr).node.next + 1);
  } while( true );
}

