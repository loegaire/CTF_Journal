
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pallocBits).find(runtime.pallocBits * b, uintptr npages,
   uint searchIdx, uint ~r2, uint ~r3) */

multireturn_uint_uint__conflict
runtime___pallocBits__find(runtime_pallocBits *b,uintptr npages,uint searchIdx)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  multireturn_uint_uint__conflict mVar5;
  multireturn_uint_uint__conflict mVar6;
  multireturn_uint_uint__conflict mVar7;
  runtime_pallocBits *b_spill;
  uintptr npages_spill;
  uint searchIdx_spill;
  uint local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (npages_spill != 1) {
    if (npages_spill < 0x41) {
      mVar5 = runtime___pallocBits__findSmallN
                        ((runtime_pallocBits *)searchIdx_spill,npages,(uint)b_spill);
      mVar6.~r3 = mVar5.~r3;
      mVar6.~r2 = local_18;
      return mVar6;
    }
    mVar5 = runtime___pallocBits__findLargeN
                      ((runtime_pallocBits *)searchIdx_spill,npages,(uint)b_spill);
    mVar5.~r2 = local_18;
    return mVar5;
  }
                    /* Unresolved local var: uint i@[???]
                       Unresolved local var: uint64 x@[???] */
  uVar3 = searchIdx_spill >> 6;
  do {
    if (7 < uVar3) {
      uVar2 = 0xffffffffffffffff;
LAB_004de32c:
      mVar7.~r3 = npages;
      mVar7.~r2 = uVar2;
      return mVar7;
    }
    uVar4 = ~(*b_spill)[uVar3];
    if (uVar4 != 0) {
      lVar1 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      uVar2 = lVar1 + uVar3 * 0x40;
                    /* Unresolved local var: uint addr@[???] */
      goto LAB_004de32c;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

