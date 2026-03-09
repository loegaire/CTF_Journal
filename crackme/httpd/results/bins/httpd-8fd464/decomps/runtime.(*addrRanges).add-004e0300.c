
/* WARNING: Unknown calling convention */

void runtime___addrRanges__add(runtime_addrRanges *a,runtime_addrRange r)

{
  ulong uVar1;
  runtime_sysMemStat *prVar2;
  runtime_sysMemStat *prVar3;
  runtime_addrRange *prVar4;
  runtime_sysMemStat *prVar5;
  uintptr addr;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  bool bVar8;
  runtime_addrRanges *a_spill;
  runtime_addrRange r_spill;
  runtime_sysMemStat *local_48;
  runtime_addrRange *local_40;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: bool coalescesDown@[???]
                       Unresolved local var: bool coalescesUp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (r_spill.base.a + 0x800000000000 < r_spill.limit.a + 0x800000000000) {
    addr = r_spill.limit.a - r_spill.base.a;
  }
  else {
    addr = 0;
  }
  if (addr == 0) {
    runtime_printlock();
    runtime_printstring((string)ZEXT816(0x29acfe));
    runtime_printhex(r_spill.base.a);
    runtime_printstring((string)ZEXT816(0x287787));
    runtime_printhex(r_spill.limit.a);
    runtime_printstring((string)ZEXT816(0x287869));
    runtime_printunlock();
                    /* WARNING: Subroutine does not return */
    runtime_throw((string)ZEXT816(0x2a6abe));
  }
  runtime___addrRanges__findSucc((runtime_addrRanges *)r_spill.base.a,addr);
  if ((long)local_48 < 1) {
    bVar7 = false;
  }
  else {
    if ((ulong)(a_spill->ranges).len <= (long)local_48 - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar7 = (a_spill->ranges).array[(long)local_48 - 1U].limit.a == r_spill.base.a;
  }
  prVar3 = (runtime_sysMemStat *)(a_spill->ranges).len;
  prVar4 = (a_spill->ranges).array;
  prVar5 = (runtime_sysMemStat *)(a_spill->ranges).cap;
  if ((long)local_48 < (long)prVar3) {
    if (prVar3 <= local_48) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar8 = prVar4[(long)local_48].base.a == r_spill.limit.a;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    if (bVar7) {
      if (prVar3 <= local_48) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (prVar3 <= (runtime_sysMemStat *)((long)local_48 - 1U)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar4[(long)((long)local_48 - 1U)].limit.a = prVar4[(long)local_48].limit.a;
      prVar3 = (runtime_sysMemStat *)(a_spill->ranges).len;
      prVar4 = (a_spill->ranges).array;
      if (prVar3 < local_48) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar6 = (a_spill->ranges).cap - (long)local_48;
      if (prVar3 < (runtime_sysMemStat *)((long)local_48 + 1U)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      if ((long)&(prVar4->base).a + (-(lVar6 + -1) >> 0x3f & (long)((long)local_48 + 1U) * 0x10) !=
          (long)&(prVar4->base).a + (-lVar6 >> 0x3f & (long)local_48 * 0x10)) {
        runtime_memmove();
      }
      uVar1 = (a_spill->ranges).len - 1;
      if ((ulong)(a_spill->ranges).cap < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      (a_spill->ranges).len = uVar1;
      goto LAB_004e0768;
    }
  }
  else if (bVar7) {
    if (prVar3 <= (runtime_sysMemStat *)((long)local_48 - 1U)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar4[(long)((long)local_48 - 1U)].limit.a = r_spill.limit.a;
    goto LAB_004e0768;
  }
  if (bVar8) {
    if (prVar3 <= local_48) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar4[(long)local_48].base.a = r_spill.base.a;
  }
  else {
    prVar2 = (runtime_sysMemStat *)((long)prVar3 + 1);
    if ((long)prVar5 < (long)prVar2) {
      (a_spill->ranges).len = (int)prVar2;
      (a_spill->ranges).cap = (long)prVar5 << 1;
      runtime_persistentalloc((long)prVar5 << 5,(uintptr)a_spill,prVar3);
      (a_spill->ranges).array = local_40;
      if ((runtime_sysMemStat *)(a_spill->ranges).cap < local_48) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      if (prVar5 < local_48) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      if (local_40 != prVar4) {
        runtime_memmove();
      }
      if ((ulong)(a_spill->ranges).len < (long)local_48 + 1U) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      if ((long)&(prVar4->base).a + ((long)local_48 - (long)prVar5 >> 0x3f & (long)local_48 << 4) !=
          (long)&(((a_spill->ranges).array)->base).a +
          (-(((a_spill->ranges).cap - (long)local_48) + -1) >> 0x3f & ((long)local_48 + 1U) * 0x10))
      {
        runtime_memmove();
      }
    }
    else {
      if (prVar5 < prVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      (a_spill->ranges).len = (int)prVar2;
      prVar4 = (a_spill->ranges).array;
      if (prVar2 < (runtime_sysMemStat *)((long)local_48 + 1U)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar6 = (a_spill->ranges).cap - (long)local_48;
      if (prVar2 < local_48) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      if ((long)&(prVar4->base).a + (-lVar6 >> 0x3f & (long)local_48 << 4) !=
          (long)&(prVar4->base).a + (-(lVar6 + -1) >> 0x3f & (long)((long)local_48 + 1U) * 0x10)) {
        runtime_memmove();
      }
    }
    prVar4 = (a_spill->ranges).array;
    if ((runtime_sysMemStat *)(a_spill->ranges).len <= local_48) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar4[(long)local_48].base.a = r_spill.base.a;
    prVar4[(long)local_48].limit.a = r_spill.limit.a;
  }
LAB_004e0768:
  if (r_spill.base.a + 0x800000000000 < r_spill.limit.a + 0x800000000000) {
    lVar6 = r_spill.limit.a - r_spill.base.a;
  }
  else {
    lVar6 = 0;
  }
  a_spill->totalBytes = a_spill->totalBytes + lVar6;
  return;
}

