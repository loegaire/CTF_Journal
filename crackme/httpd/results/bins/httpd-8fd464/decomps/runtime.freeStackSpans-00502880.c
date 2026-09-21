
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_freeStackSpans(void)

{
  runtime_mspan *prVar1;
  runtime_mheap *span;
  long lVar2;
  runtime_mutex *l;
  runtime_mspan *list;
  runtime_mheap *h;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int order@[???] */
  for (lVar2 = 0; lVar2 < 4; lVar2 = lVar2 + 1) {
    l = (runtime_mutex *)(lVar2 * 0x40);
    runtime_lock2(l);
                    /* Unresolved local var: runtime.mspan * s@[???] */
    span = (runtime_mheap *)l[0x19f541].key;
    while (h = span, h != (runtime_mheap *)0x0) {
                    /* Unresolved local var: runtime.mspan * next@[???] */
      span = (runtime_mheap *)(h->lock).key;
      if ((short)(h->pages).summary[3].cap == 0) {
        runtime___mSpanList__remove((runtime_mSpanList *)h,(runtime_mspan *)span);
        (h->pages).summary[1].len = 0;
        runtime___mheap__freeManual(h,(runtime_mspan *)span,0x40);
      }
    }
    runtime_unlock2(l + 0x19f540);
  }
  runtime_lock2(&runtime_stackLarge.lock);
  for (lVar2 = 0; lVar2 < 0x23; lVar2 = lVar2 + 1) {
                    /* Unresolved local var: runtime.mspan * s@[???] */
    list = runtime_stackLarge.free[lVar2].first;
    while (list != (runtime_mspan *)0x0) {
                    /* Unresolved local var: runtime.mspan * next@[???] */
      prVar1 = list->next;
      runtime___mSpanList__remove
                ((runtime_mSpanList *)list,(runtime_mspan *)(runtime_stackLarge.free + lVar2));
      runtime___mheap__freeManual
                (&runtime_mheap_,(runtime_mspan *)(runtime_stackLarge.free + lVar2),
                 (runtime_spanAllocType)list);
      list = prVar1;
    }
                    /* Unresolved local var: int i@[???] */
  }
  runtime_unlock2(&runtime_stackLarge.lock);
  return;
}

