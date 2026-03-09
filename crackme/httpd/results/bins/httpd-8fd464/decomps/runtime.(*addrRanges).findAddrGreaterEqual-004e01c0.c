
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*addrRanges).findAddrGreaterEqual(runtime.addrRanges * a,
   uintptr addr, uintptr ~r1, bool ~r2) */

multireturn_uintptr_bool__conflict
runtime___addrRanges__findAddrGreaterEqual(runtime_addrRanges *a,uintptr addr)

{
  ulong uVar1;
  ulong uVar2;
  runtime_addrRange *prVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  multireturn_uintptr_bool__conflict mVar5;
  multireturn_uintptr_bool__conflict mVar6;
  multireturn_uintptr_bool__conflict mVar7;
  multireturn_uintptr_bool__conflict mVar8;
  runtime_addrRanges *a_spill;
  uintptr addr_spill;
  ulong local_10;
  
                    /* Unresolved local var: int i@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___addrRanges__findSucc(a_spill,addr);
  if (local_10 == 0) {
    if ((a_spill->ranges).len != 0) {
      mVar5.~r2 = SUB81(addr,0);
      mVar5.~r1 = (((a_spill->ranges).array)->base).a;
      return mVar5;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar2 = (a_spill->ranges).len;
  prVar3 = (a_spill->ranges).array;
  uVar1 = local_10 - 1;
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar4 = prVar3[uVar1].limit.a;
  if ((prVar3[uVar1].base.a + 0x800000000000 <= addr_spill + 0x800000000000) &&
     (uVar4 = uVar4 + 0x800000000000, addr_spill + 0x800000000000 < uVar4)) {
    mVar6.~r2 = SUB81(uVar4,0);
    mVar6.~r1 = local_10;
    return mVar6;
  }
  mVar7.~r2 = SUB81(uVar4,0);
  if ((long)uVar2 <= (long)local_10) {
    mVar8.~r2 = mVar7.~r2;
    mVar8.~r1 = local_10;
    return mVar8;
  }
  if (local_10 < uVar2) {
    mVar7.~r1 = prVar3[local_10].base.a;
    return mVar7;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

