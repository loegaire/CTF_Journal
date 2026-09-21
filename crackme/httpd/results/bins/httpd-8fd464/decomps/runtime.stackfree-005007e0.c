
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

void runtime_stackfree(runtime_stack stk)

{
  long *plVar1;
  runtime_mspan *list;
  uint64 v;
  long lVar2;
  ulong uVar3;
  uintptr uVar4;
  byte bVar5;
  long lVar6;
  runtime_mcache *c;
  runtime_mcache *prVar7;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_stack stk_spill;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: void * v@[???]
                       Unresolved local var: uintptr n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  c = (runtime_mcache *)(stk_spill.hi - stk_spill.lo);
  if (((ulong)c & (ulong)&c[-1].field_0x4af) != 0) {
    s_01.len = stk_spill.lo;
    s_01.str = &DAT_0029d531;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if ((long)c->alloc + (stk_spill.lo - 0x28) < stk_spill.hi) {
    s_00.len = stk_spill.lo;
    s_00.str = &DAT_00296b2b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (runtime_debug.efence == 0) {
    if (c < (runtime_mcache *)0x8000) {
      bVar5 = 0;
                    /* Unresolved local var: uint8 order@[???]
                       Unresolved local var: uintptr n2@[???] */
      for (prVar7 = c; (runtime_mcache *)0x800 < prVar7;
          prVar7 = (runtime_mcache *)((ulong)prVar7 >> 1)) {
        bVar5 = bVar5 + 1;
      }
      lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
      lVar6 = *(long *)(lVar2 + 0xd8);
      if ((lVar6 == 0) || (*(long *)(lVar2 + 0x108) != 0)) {
        if (3 < (ulong)bVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
                    /* Unresolved local var: runtime.mcache * c@[???] */
        runtime_lock2((runtime_mutex *)(runtime_stackpool + bVar5));
        runtime_stackpoolfree((ulong)bVar5,(uint8)lVar6);
        runtime_unlock2((runtime_mutex *)(runtime_stackpool + bVar5));
      }
      else {
        lVar2 = *(long *)(lVar6 + 0x40);
        if (3 < (ulong)bVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        lVar6 = (ulong)bVar5 * 0x10;
        if (0x7fff < *(ulong *)(lVar2 + 0x470 + lVar6)) {
          runtime_stackcacherelease(c,(uint8)lVar6);
        }
        *(undefined8 *)stk_spill.lo = *(undefined8 *)(lVar2 + 0x468 + lVar6);
        *(uintptr *)(lVar2 + 0x468 + lVar6) = stk_spill.lo;
        plVar1 = (long *)(lVar2 + 0x470 + lVar6);
        *plVar1 = (long)c->alloc + *plVar1 + -0x28;
      }
    }
    else {
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: uintptr ~R0@[???]
                       Unresolved local var: runtime.mspan * ~R0@[???] */
      uVar3 = stk_spill.lo + 0x800000000000 >> 0x1a;
      if (0x3fffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      list = (*runtime_mheap_.arenas[0])[uVar3]->spans[stk_spill.lo >> 0xd & 0x1fff];
      if ((list->state).s != 2) {
        v = list->startAddr;
        runtime_printlock();
        runtime_printhex(v);
        runtime_printsp();
        runtime_printpointer((void *)stk_spill.lo);
        runtime_printnl();
        runtime_printunlock();
        s.len = stk_spill.lo;
        s.str = &DAT_00296b1d;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      if (runtime_gcphase == 0) {
        runtime___mheap__freeManual
                  (&runtime_mheap_,(runtime_mspan *)stk_spill.lo,(runtime_spanAllocType)list);
      }
      else {
        uVar3 = 0;
                    /* Unresolved local var: int log2npage@[???] */
                    /* Unresolved local var: int log2@[???] */
        for (uVar4 = list->npages; 1 < uVar4; uVar4 = uVar4 >> 1) {
          uVar3 = uVar3 + 1;
        }
        runtime_lock2(&runtime_stackLarge.lock);
        if (0x22 < uVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        runtime___mSpanList__insert((runtime_mSpanList *)list,(runtime_mspan *)stk_spill.lo);
        runtime_unlock2(&runtime_stackLarge.lock);
      }
    }
    return;
  }
  runtime_mmap();
  return;
}

