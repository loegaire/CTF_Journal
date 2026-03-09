
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).scavengeReserve(runtime.pageAlloc * p,
   runtime.addrRange ~r0, uint32 ~r1) */

multireturn_runtime_addrRange_uint32_ runtime___pageAlloc__scavengeReserve(runtime_pageAlloc *p)

{
  runtime_offAddr addr;
  long lVar1;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  multireturn_runtime_addrRange_uint32_ mVar2;
  multireturn_runtime_addrRange_uint32_ mVar3;
  runtime_pageAlloc *p_spill;
  runtime_offAddr local_30;
  long local_28;
  
                    /* Unresolved local var: uintptr newBase@[???]
                       Unresolved local var: runtime.addrRange r@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  runtime___addrRanges__removeLast((runtime_addrRanges *)p_spill,unaff_RBX);
  addr.a = local_30.a + 0x800000000000;
  if (addr.a < local_28 + 0x800000000000U) {
    lVar1 = local_28 - local_30.a;
  }
  else {
    lVar1 = 0;
  }
  if (lVar1 == 0) {
    mVar2.~r0.limit.a = addr.a;
    mVar2.~r0.base.a = local_30.a;
    mVar2.~r1 = (p_spill->scav).gen;
    return mVar2;
  }
  runtime___addrRanges__removeGreaterEqual
            ((runtime_addrRanges *)(local_30.a & 0xffffffffffc00000),addr.a);
  mVar3.~r0.base.a._4_4_ = 0;
  mVar3.~r0.base.a._0_4_ = (p_spill->scav).gen;
  mVar3.~r0.limit.a = addr.a;
  mVar3.~r1 = (uint32)local_28;
  return mVar3;
}

