
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.stackalloc(uint32 n, runtime.stack ~r1) */

runtime_stack runtime_stackalloc(uint32 n)

{
  long *plVar1;
  long lVar2;
  ulong n_00;
  runtime_mspan *l;
  runtime_spanAllocType typ;
  byte order;
  runtime_mcache *c;
  runtime_mheap *prVar3;
  runtime_mcache *prVar4;
  runtime_mspan *span;
  long in_FS_OFFSET;
  runtime_stack rVar5;
  string s;
  runtime_stack rVar6;
  string s_00;
  string s_01;
  string s_02;
  uint32 n2;
  runtime_mutex *local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  runtime_mspan *local_58;
  
                    /* Unresolved local var: runtime.g * thisg@[DW_OP_reg1(RDX)]
                       Unresolved local var: void * v@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  span = (runtime_mspan *)(*(runtime_mspan **)(in_FS_OFFSET + -8))->freeindex;
  if (span->next != *(runtime_mspan **)(in_FS_OFFSET + -8)) {
    s_02.len = (int)span;
    s_02.str = (uint8 *)0x2a340c;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  c = (runtime_mcache *)(ulong)n2;
  if ((n2 - 1 & n2) != 0) {
    s_01.len = (int)span;
    s_01.str = (uint8 *)0x29ff99;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (runtime_debug.efence != 0) {
                    /* Unresolved local var: void * v@[???] */
    n_00 = (long)c->alloc + (runtime_physPageSize - 0x29) & -runtime_physPageSize & 0xffffffff;
    runtime_sysAlloc(n_00,(runtime_sysMemStat *)span);
    if (CONCAT71(uStack_5f,local_60) == 0) {
      s.len = (int)span;
      s.str = &DAT_0029f611;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    rVar5.lo = CONCAT71(uStack_5f,local_60) + n_00;
    rVar5.hi = (uintptr)span;
    return rVar5;
  }
  if (n2 < 0x8000) {
    order = 0;
                    /* Unresolved local var: uint8 order@[???]
                       Unresolved local var: runtime.gclinkptr x@[???] */
    for (prVar4 = c; 0x800 < (uint)prVar4; prVar4 = (runtime_mcache *)(ulong)((uint)prVar4 >> 1)) {
      order = order + 1;
    }
    if ((span[1].gcmarkBits == (runtime_gcBits *)0x0) ||
       (span[1].specials != (runtime_special *)0x0)) {
      if (3 < (ulong)order) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
                    /* Unresolved local var: runtime.mcache * c@[???] */
      runtime_lock2((runtime_mutex *)(runtime_stackpool + order));
      runtime_stackpoolalloc(order);
      runtime_unlock2(local_68);
    }
    else {
      lVar2 = *(long *)(span[1].gcmarkBits + 0x40);
      if (3 < (ulong)order) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      span = (runtime_mspan *)((ulong)order * 0x10);
      local_68 = *(runtime_mutex **)((long)&span[8].manualFreeList + lVar2);
      if (local_68 == (runtime_mutex *)0x0) {
        runtime_stackcacherefill(c,(uint8)span);
        local_68 = *(runtime_mutex **)((long)&span[8].manualFreeList + lVar2);
      }
      *(uintptr *)((long)&span[8].manualFreeList + lVar2) = local_68->key;
      plVar1 = (long *)((long)&span[8].freeindex + lVar2);
      *plVar1 = *plVar1 - (ulong)n2;
    }
  }
  else {
    span = (runtime_mspan *)0x0;
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: int log2npage@[???] */
                    /* Unresolved local var: int log2@[???] */
    for (prVar3 = (runtime_mheap *)(ulong)(n2 >> 0xd); (runtime_mheap *)0x1 < prVar3;
        prVar3 = (runtime_mheap *)((ulong)prVar3 >> 1)) {
      span = (runtime_mspan *)((long)&span->next + 1);
    }
    runtime_lock2(&runtime_stackLarge.lock);
    if ((runtime_mspan *)0x22 < span) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    l = runtime_stackLarge.free[(long)span].first;
    if (l == (runtime_mspan *)0x0) {
      l = (runtime_mspan *)0x0;
    }
    else {
      runtime___mSpanList__remove(runtime_stackLarge.free + (long)span,span);
    }
    typ = 0xc0;
    runtime_unlock2((runtime_mutex *)l);
    if (l == (runtime_mspan *)0x0) {
      runtime___mheap__allocManual((runtime_mheap *)(ulong)(n2 >> 0xd),(uintptr)span,typ);
      if (local_58 == (runtime_mspan *)0x0) {
        s_00.len = (int)span;
        s_00.str = &DAT_00295b8f;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      local_58->elemsize = (ulong)n2;
      l = local_58;
    }
    local_68 = (runtime_mutex *)l->startAddr;
  }
  rVar6.lo = (long)&local_68->key + (ulong)n2;
  rVar6.hi = (uintptr)span;
  return rVar6;
}

