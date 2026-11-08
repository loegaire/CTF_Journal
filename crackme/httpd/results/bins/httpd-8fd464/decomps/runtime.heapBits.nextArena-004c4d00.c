
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.heapBits.nextArena(runtime.heapBits h, runtime.heapBits
   ~r0) */

runtime_heapBits runtime_heapBits_nextArena(runtime_heapBits h)

{
  runtime_heapArena *prVar1;
  undefined1 auVar2 [12];
  runtime_heapBits rVar3;
  runtime_heapBits rVar4;
  runtime_heapBits h_spill;
  
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  rVar3.last = h.last;
  if (runtime_mheap_.arenas[0] == (runtime_heapArena *(*) [4194304])0x0) {
    return h;
  }
  rVar4.bitp = (ulong)(h_spill.arena + 1);
  if (rVar4.bitp < 0x400000) {
    prVar1 = (*runtime_mheap_.arenas[0])[rVar4.bitp];
    rVar3.arena = SUB84(prVar1,0);
    if (prVar1 != (runtime_heapArena *)0x0) {
      rVar3.shift = h_spill.arena;
      rVar3.bitp = prVar1->bitmap + 0x1fffff;
      return rVar3;
    }
    rVar4.shift = h_spill.arena;
    auVar2._8_4_ = 0;
    auVar2._0_8_ = rVar3.last;
    rVar4.arena = SUB124(auVar2 << 0x20,0);
    rVar4.last = (uint8 *)SUB128(auVar2 << 0x20,4);
    return rVar4;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

