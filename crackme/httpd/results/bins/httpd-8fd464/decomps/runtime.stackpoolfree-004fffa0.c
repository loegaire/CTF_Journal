
/* WARNING: Unknown calling convention */

void runtime_stackpoolfree(runtime_gclinkptr x,uint8 order)

{
  short sVar1;
  runtime_mheap *h;
  ulong uVar2;
  long in_FS_OFFSET;
  string s;
  runtime_gclinkptr x_spill;
  uint8 order_spill;
  
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: runtime.mspan * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = x_spill + 0x800000000000 >> 0x1a;
  if (uVar2 < 0x400000) {
    h = (runtime_mheap *)(*runtime_mheap_.arenas[0])[uVar2]->spans[x_spill >> 0xd & 0x1fff];
    if (*(char *)((long)&(h->pages).summary[3].cap + 3) != '\x02') {
      s.len = (int)h;
      s.str = (uint8 *)0x2a300d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if ((h->pages).summary[1].len == 0) {
      if (3 < (ulong)order_spill) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      runtime___mSpanList__insert(&runtime_stackpool[order_spill].item.span,(runtime_mspan *)h);
    }
    *(int *)x_spill = (h->pages).summary[1].len;
    (h->pages).summary[1].len = x_spill;
    sVar1 = (short)(h->pages).summary[3].cap;
    *(short *)&(h->pages).summary[3].cap = sVar1 + -1;
    if ((runtime_gcphase == 0) && (sVar1 == 1)) {
      if (3 < (ulong)order_spill) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      runtime___mSpanList__remove(&runtime_stackpool[order_spill].item.span,(runtime_mspan *)h);
      (h->pages).summary[1].len = 0;
      runtime___mheap__freeManual(h,(runtime_mspan *)h,0x40);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

