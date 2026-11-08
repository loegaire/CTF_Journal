
/* WARNING: Unknown calling convention */

void runtime___addrRanges__removeGreaterEqual(runtime_addrRanges *a,uintptr addr)

{
  runtime_addrRange *prVar1;
  ulong uVar2;
  uintptr uVar3;
  uintptr uVar4;
  long *plVar5;
  uintptr addr_00;
  long lVar6;
  ulong uVar7;
  runtime_offAddr rVar8;
  long lVar9;
  long in_FS_OFFSET;
  runtime_addrRange a_00;
  runtime_addrRanges *a_spill;
  uintptr addr_spill;
  ulong local_50;
  uintptr local_48;
  uintptr local_40;
  
                    /* Unresolved local var: int pivot@[???]
                       Unresolved local var: uintptr removed@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___addrRanges__findSucc(a_spill,addr);
  if (local_50 == 0) {
    a_spill->totalBytes = 0;
    (a_spill->ranges).len = 0;
    return;
  }
  prVar1 = (a_spill->ranges).array;
  uVar2 = (a_spill->ranges).len;
  if (uVar2 < local_50) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  addr_00 = uVar2 - local_50;
  plVar5 = (long *)((long)&(prVar1->base).a +
                   (local_50 << 4 & (long)(local_50 - (a_spill->ranges).cap) >> 0x3f));
  if ((long)addr_00 < 1) {
    rVar8.a = 0;
  }
  else {
    lVar6 = 0;
    rVar8.a = 0;
    while( true ) {
      if (*plVar5 + 0x800000000000U < plVar5[1] + 0x800000000000U) {
        lVar9 = plVar5[1] - *plVar5;
      }
      else {
        lVar9 = 0;
      }
      lVar6 = lVar6 + 1;
      rVar8.a = rVar8.a + lVar9;
      if ((long)addr_00 <= lVar6) break;
      plVar5 = plVar5 + 2;
    }
  }
  uVar2 = local_50 - 1;
  uVar3 = prVar1[uVar2].base.a;
  uVar4 = prVar1[uVar2].limit.a;
  uVar7 = local_50;
  if ((uVar3 + 0x800000000000 <= addr_spill + 0x800000000000) &&
     (addr_spill + 0x800000000000 < uVar4 + 0x800000000000)) {
    a_00.limit.a = (uintptr)a_spill;
    a_00.base.a = rVar8.a;
    runtime_addrRange_removeGreaterEqual(a_00,addr_00);
    rVar8.a = (uVar4 - uVar3) + rVar8.a;
    if (local_48 + 0x800000000000 < local_40 + 0x800000000000) {
      lVar6 = local_40 - local_48;
    }
    else {
      lVar6 = 0;
    }
    uVar7 = uVar2;
    if (lVar6 != 0) {
      if (local_48 + 0x800000000000 < local_40 + 0x800000000000) {
        lVar6 = local_40 - local_48;
      }
      else {
        lVar6 = 0;
      }
      rVar8.a = rVar8.a - lVar6;
      prVar1 = (a_spill->ranges).array;
      if ((ulong)(a_spill->ranges).len <= uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar1[uVar2].base.a = local_48;
      prVar1[uVar2].limit.a = local_40;
      uVar7 = local_50;
    }
  }
  if ((ulong)(a_spill->ranges).cap < uVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  (a_spill->ranges).len = uVar7;
  a_spill->totalBytes = a_spill->totalBytes - rVar8.a;
  return;
}

