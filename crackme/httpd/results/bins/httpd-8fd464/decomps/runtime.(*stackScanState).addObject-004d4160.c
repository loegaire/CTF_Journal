
/* WARNING: Unknown calling convention */

void runtime___stackScanState__addObject
               (runtime_stackScanState *s,uintptr addr,runtime_stackObjectRecord *r)

{
  long lVar1;
  ulong uVar2;
  runtime_stackObjectBuf *prVar3;
  long in_FS_OFFSET;
  string s_00;
  runtime_stackScanState *s_spill;
  uintptr addr_spill;
  runtime_stackObjectRecord *r_spill;
  runtime_stackObjectBuf *local_20;
  
                    /* Unresolved local var: runtime.stackObjectBuf * x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar3 = s_spill->tail;
  if (s_spill->tail == (runtime_stackObjectBuf *)0x0) {
    runtime_getempty();
    (local_20->stackObjectBufHdr).next = (runtime_stackObjectBuf *)0x0;
    s_spill->head = local_20;
    s_spill->tail = local_20;
    prVar3 = local_20;
  }
  lVar1 = (prVar3->stackObjectBufHdr).workbufhdr.nobj;
  if (0 < lVar1) {
    if (0x3e < lVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((uint)((int)addr_spill - (int)(s_spill->stack).lo) <
        prVar3->obj[lVar1 + -1].off + prVar3->obj[lVar1 + -1].size) {
      s_00.len = (int)prVar3;
      s_00.str = &DAT_002a6d4e;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    if (lVar1 == 0x3f) {
                    /* Unresolved local var: runtime.stackObjectBuf * y@[???] */
      runtime_getempty();
      (local_20->stackObjectBufHdr).next = (runtime_stackObjectBuf *)0x0;
      (prVar3->stackObjectBufHdr).next = local_20;
      s_spill->tail = local_20;
      prVar3 = local_20;
    }
  }
  uVar2 = (prVar3->stackObjectBufHdr).workbufhdr.nobj;
  if (0x3e < uVar2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  (prVar3->stackObjectBufHdr).workbufhdr.nobj = uVar2 + 1;
  prVar3->obj[uVar2].off = (int)addr_spill - (int)(s_spill->stack).lo;
  prVar3->obj[uVar2].size = r_spill->size;
  prVar3->obj[uVar2].r = r_spill;
  s_spill->nobjs = s_spill->nobjs + 1;
  return;
}

