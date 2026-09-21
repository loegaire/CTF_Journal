
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*traceAlloc).alloc(runtime.traceAlloc * a, uintptr n,
   void * ~r1) */

void * runtime___traceAlloc__alloc(runtime_traceAlloc *a,uintptr n)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_traceAlloc *a_spill;
  uintptr n_spill;
  runtime_traceAllocBlockPtr *local_18;
  
                    /* Unresolved local var: uint8 * p@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = n_spill + 7 & 0xfffffffffffffff8;
  if ((a_spill->head == 0) || (0xfff8 < a_spill->off + uVar2)) {
                    /* Unresolved local var: runtime.traceAllocBlock * block@[???] */
    if (0xfff8 < uVar2) {
      s_00.len = (int)a_spill;
      s_00.str = &DAT_0029d573;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    runtime_sysAlloc(0xd025c0,&a_spill->head);
    if (local_18 == (runtime_traceAllocBlockPtr *)0x0) {
      s.len = (int)a_spill;
      s.str = &DAT_0029c1c6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    *local_18 = a_spill->head;
    a_spill->head = (runtime_traceAllocBlockPtr)local_18;
    a_spill->off = 0;
  }
  uVar1 = a_spill->off;
  if (uVar1 < 0xfff8) {
    a_spill->off = uVar1 + uVar2;
    return (void *)(a_spill->head + uVar1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

