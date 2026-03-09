
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageCache).allocN(runtime.pageCache * c, uintptr npages,
   uintptr ~r1, uintptr ~r2) */

multireturn_uintptr_uintptr__conflict1
runtime___pageCache__allocN(runtime_pageCache *c,uintptr npages)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  multireturn_uintptr_uintptr__conflict1 mVar4;
  multireturn_uintptr_uintptr__conflict1 mVar5;
  runtime_pageCache *c_spill;
  uintptr npages_spill;
  
                    /* Unresolved local var: uint i@[???]
                       Unresolved local var: uint64 mask@[???]
                       Unresolved local var: int scav@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar3 = c_spill->cache;
                    /* Unresolved local var: uint p@[???]
                       Unresolved local var: uint k@[???] */
  uVar1 = npages_spill - 1;
  uVar2 = 1;
  do {
    if (uVar1 == 0) {
LAB_004dd565:
      uVar2 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar1 = 0x40;
      if (uVar3 == 0) {
        uVar2 = 0x40;
      }
LAB_004dd572:
      if (0x3f < uVar2) {
        mVar5.~r2 = uVar1;
        mVar5.~r1 = (uintptr)c_spill;
        return mVar5;
      }
      if (runtime_x86HasPOPCNT == false) {
        runtime_internal_sys_OnesCount64((uint64)c_spill);
      }
      mVar4.~r2 = ~((-(ulong)(npages_spill < 0x40) & 1L << ((byte)npages_spill & 0x3f)) - 1 <<
                   ((byte)uVar2 & 0x3f));
      c_spill->cache = c_spill->cache & mVar4.~r2;
      c_spill->scav = c_spill->scav & mVar4.~r2;
      mVar4.~r1 = (uintptr)c_spill;
      return mVar4;
    }
    if (uVar1 <= uVar2) {
      uVar3 = uVar3 >> ((byte)uVar1 & 0x3f) & uVar3;
      goto LAB_004dd565;
    }
    uVar3 = uVar3 & uVar3 >> ((byte)uVar2 & 0x3f);
    if (uVar3 == 0) {
      uVar2 = 0x40;
      goto LAB_004dd572;
    }
    uVar1 = uVar1 - uVar2;
    uVar2 = uVar2 << 1;
  } while( true );
}

