
/* WARNING: Removing unreachable block (ram,0x0050a43e) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*traceStackTable).put(runtime.traceStackTable * tab,
   []uintptr pcs, uint32 ~r1) */

uint32 runtime___traceStackTable__put(runtime_traceStackTable *tab,__uintptr pcs)

{
  void *new;
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  __uintptr pcs_00;
  __uintptr pcs_01;
  runtime_traceStackTable *tab_spill;
  __uintptr pcs_spill;
  runtime_traceStackTable *local_38;
  uint32 local_28;
  
  iVar1 = pcs.cap;
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: runtime.traceStack * stk@[???]
                       Unresolved local var: int part@[???]
                       Unresolved local var: []uintptr stkpc@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (pcs_spill.len == 0) {
    return 0;
  }
  runtime_memhash();
  pcs_00.len = (int)tab_spill;
  pcs_00.array = (uintptr *)pcs_spill.len;
  pcs_00.cap = iVar1;
                    /* Unresolved local var: uint32 id@[???] */
  runtime___traceStackTable__find(local_38,pcs_00,pcs_spill.cap);
  if (local_28 != 0) {
    return local_28;
  }
  runtime_lock2(&tab_spill->lock);
  pcs_01.len = pcs_spill.len;
  pcs_01.array = (uintptr *)pcs_spill.len;
  pcs_01.cap = iVar1;
                    /* Unresolved local var: uint32 id@[???] */
  runtime___traceStackTable__find(tab_spill,pcs_01,pcs_spill.cap);
  tab_spill->seq = tab_spill->seq + 1;
  runtime___traceStackTable__newStack(tab_spill,pcs_spill.len);
  *(runtime_traceStackTable **)(pcs_spill.len + 8) = local_38;
  *(uint32 *)(pcs_spill.len + 0x10) = tab_spill->seq;
  *(int *)(pcs_spill.len + 0x18) = pcs_spill.len;
  if (0x80 < (ulong)pcs_spill.len) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: int i@[???] */
  for (lVar2 = 0; lVar2 < pcs_spill.len; lVar2 = lVar2 + 1) {
    *(uintptr *)(pcs_spill.len + 0x20 + lVar2 * 8) = pcs_spill.array[lVar2];
  }
  new = (void *)tab_spill->tab[(ulong)local_38 & 0x1fff];
  *(void **)pcs_spill.len = new;
  runtime_atomicstorep((void *)pcs_spill.len,new);
  runtime_unlock2(&tab_spill->lock);
  return *(uint32 *)(pcs_spill.len + 0x10);
}

