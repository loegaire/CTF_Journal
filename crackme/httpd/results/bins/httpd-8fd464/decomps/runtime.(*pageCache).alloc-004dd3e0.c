
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageCache).alloc(runtime.pageCache * c, uintptr npages,
   uintptr ~r1, uintptr ~r2) */

multireturn_uintptr_uintptr__conflict1
runtime___pageCache__alloc(runtime_pageCache *c,uintptr npages)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  multireturn_uintptr_uintptr__conflict1 mVar4;
  multireturn_uintptr_uintptr__conflict1 mVar5;
  multireturn_uintptr_uintptr__conflict1 mVar6;
  runtime_pageCache *c_spill;
  uintptr npages_spill;
  uintptr local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = c_spill->cache;
  if (uVar1 != 0) {
    if (npages_spill == 1) {
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: uint64 scav@[???] */
      uVar2 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar3 = ~(1L << ((byte)uVar2 & 0x3f) & -(ulong)(uVar2 < 0x40));
      c_spill->cache = uVar1 & uVar3;
      c_spill->scav = c_spill->scav & uVar3;
      mVar4.~r2 = uVar2;
      mVar4.~r1 = (uintptr)c_spill;
      return mVar4;
    }
    mVar5 = runtime___pageCache__allocN(c_spill,npages_spill);
    mVar6.~r2 = mVar5.~r2;
    mVar6.~r1 = local_18;
    return mVar6;
  }
  mVar5.~r2 = npages;
  mVar5.~r1 = (uintptr)c_spill;
  return mVar5;
}

