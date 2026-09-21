
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).scavenge(runtime.pageAlloc * p, uintptr
   nbytes, bool mayUnlock, uintptr ~r2) */

uintptr runtime___pageAlloc__scavenge(runtime_pageAlloc *p,uintptr nbytes,bool mayUnlock)

{
  runtime_offAddr rVar1;
  long lVar2;
  runtime_offAddr rVar3;
  long lVar4;
  uintptr uVar5;
  runtime_offAddr rVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  runtime_addrRange work;
  runtime_addrRange r;
  runtime_pageAlloc *p_spill;
  uintptr nbytes_spill;
  bool mayUnlock_spill;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
                    /* Unresolved local var: uint32 gen@[???]
                       Unresolved local var: uintptr released@[???]
                       Unresolved local var: runtime.addrRange addrs@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  rVar1.a = 0;
  uVar7 = 0;
  lVar2 = 0;
  rVar6.a = 0;
  do {
    rVar3.a = rVar1.a;
    uVar8 = nbytes_spill;
    if (nbytes_spill <= rVar1.a) {
LAB_004d2ac6:
      r.limit.a = rVar3.a;
      r.base.a = rVar6.a;
      runtime___pageAlloc__scavengeUnreserve(p_spill,r,(uint32)uVar8);
      return rVar1.a;
    }
    if (rVar6.a + 0x800000000000 < lVar2 + 0x800000000000U) {
      lVar4 = lVar2 - rVar6.a;
    }
    else {
      lVar4 = 0;
    }
    uVar5 = rVar6.a;
    lVar9 = lVar2;
    if (lVar4 == 0) {
      runtime___pageAlloc__scavengeReserve(p_spill);
      uVar8 = local_48 + 0x800000000000;
      if (local_50 + 0x800000000000 < uVar8) {
        lVar2 = local_48 - local_50;
      }
      else {
        lVar2 = 0;
      }
      uVar5 = local_50;
      lVar9 = local_48;
      uVar7 = (undefined4)local_40;
      if (lVar2 == 0) {
        rVar3.a = 0;
        rVar6.a = local_50;
        goto LAB_004d2ac6;
      }
    }
                    /* Unresolved local var: uintptr r@[???] */
    local_40 = nbytes_spill - rVar1.a;
    work.base.a._1_7_ = 0;
    work.base.a._0_1_ = mayUnlock_spill;
    work.limit.a = rVar1.a;
    runtime___pageAlloc__scavengeOne(p_spill,work,local_40,SUB41(uVar7,0));
    rVar1.a = rVar1.a + local_30;
    lVar2 = local_20;
    rVar6.a = local_28;
    local_50 = uVar5;
    local_48 = lVar9;
  } while( true );
}

