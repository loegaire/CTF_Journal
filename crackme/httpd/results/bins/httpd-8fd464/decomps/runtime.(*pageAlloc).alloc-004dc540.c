
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).alloc(runtime.pageAlloc * p, uintptr npages,
   uintptr addr, uintptr scav) */

multireturn_uintptr_uintptr__conflict
runtime___pageAlloc__alloc(runtime_pageAlloc *p,uintptr npages)

{
  runtime_offAddr rVar1;
  uintptr npages_00;
  ulong npages_01;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  multireturn_uint_uint__conflict mVar4;
  multireturn_uintptr_runtime_offAddr_ mVar5;
  multireturn_uintptr_uintptr__conflict mVar6;
  multireturn_uintptr_uintptr__conflict mVar7;
  multireturn_uintptr_uintptr__conflict mVar8;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_pageAlloc *p_spill;
  uintptr npages_spill;
  runtime_pageAlloc *local_38;
  uintptr local_30;
  long local_28;
  
                    /* Unresolved local var: runtime.offAddr searchAddr@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar2 = (p_spill->searchAddr).a;
  mVar8.addr = (runtime_pageAlloc *)(uVar2 + 0x800000000000 >> 0x16);
  if ((runtime_pageAlloc *)p_spill->end <= mVar8.addr) {
    mVar8.scav = uVar2;
    return mVar8;
  }
  npages_01 = (uVar2 & 0x3fffff) >> 0xd;
  if (npages_spill <= -(npages_01 - 0x200)) {
                    /* Unresolved local var: uint max@[???]
                       Unresolved local var: uint ~R0@[???] */
    if ((runtime_pageAlloc *)p_spill->summary[4].len <= mVar8.addr) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    uVar3 = p_spill->summary[4].array[(long)mVar8.addr];
    if ((long)uVar3 < 0) {
      uVar3 = 0x200000;
    }
    else {
      uVar3 = uVar3 >> 0x15 & 0x1fffff;
    }
    if (npages_spill <= uVar3) {
      uVar2 = uVar2 + 0x800000000000 >> 0x23;
      if (0x1fff < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
                    /* Unresolved local var: uint j@[???]
                       Unresolved local var: uint searchIdx@[???] */
      mVar4 = runtime___pallocBits__find
                        ((*p_spill->chunks[uVar2])[(ulong)mVar8.addr & 0x1fff].pallocBits,npages_01,
                         (uint)p_spill->chunks[uVar2]);
      s.len = mVar4.~r3;
      if (local_30 == 0xffffffffffffffff) {
        runtime_printlock();
        s.str = &DAT_00298ffb;
        runtime_printstring(s);
        runtime_printuint(uVar3);
        s_00.len = s.len;
        s_00.str = &DAT_00290995;
        runtime_printstring(s_00);
        runtime_printuint(npages_spill);
        runtime_printnl();
        runtime_printunlock();
        uVar2 = (p_spill->searchAddr).a;
        runtime_printlock();
        s_01.len = s.len;
        s_01.str = &DAT_0029ca99;
        runtime_printstring(s_01);
        runtime_printuint((uVar2 & 0x3fffff) >> 0xd);
        s_02.len = s.len;
        s_02.str = &DAT_00299bb8;
        runtime_printstring(s_02);
        runtime_printhex(uVar2);
        runtime_printnl();
        runtime_printunlock();
        s_03.len = s.len;
        s_03.str = &DAT_00299865;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_03);
      }
      local_38 = (runtime_pageAlloc *)
                 (local_30 * 0x2000 + (long)mVar8.addr * 0x400000 + -0x800000000000);
      npages_00 = (local_28 * 0x2000 + (long)mVar8.addr * 0x400000) - 0x800000000000;
      goto LAB_004dc6d5;
    }
  }
  mVar5 = runtime___pageAlloc__find(mVar8.addr,npages_01);
  rVar1 = runtime_maxSearchAddr;
  mVar6.scav = mVar5.~r2.a;
  npages_00 = local_30;
  if (local_38 == (runtime_pageAlloc *)0x0) {
    if (npages_spill == 1) {
      (p_spill->searchAddr).a = runtime_maxSearchAddr.a;
      npages_spill = rVar1.a;
    }
    mVar6.addr = npages_spill;
    return mVar6;
  }
LAB_004dc6d5:
  runtime___pageAlloc__allocRange(local_38,npages_spill,npages_00);
  mVar7.scav = npages_00 + 0x800000000000;
  if ((p_spill->searchAddr).a + 0x800000000000 < mVar7.scav) {
    (p_spill->searchAddr).a = npages_00;
  }
  mVar7.addr = local_30;
  return mVar7;
}

