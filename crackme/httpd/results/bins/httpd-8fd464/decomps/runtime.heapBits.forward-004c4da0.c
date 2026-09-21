
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.heapBits.forward(runtime.heapBits h, uintptr n,
   runtime.heapBits ~r1) */

runtime_heapBits runtime_heapBits_forward(runtime_heapBits h,uintptr n)

{
  int iVar1;
  uint8 *puVar2;
  runtime_heapBits rVar3;
  runtime_heapBits rVar4;
  runtime_heapBits h_spill;
  uintptr n_spill;
  
                    /* Unresolved local var: uintptr nbitp@[???]
                       Unresolved local var: uintptr past@[???] */
  rVar4.arena = h.arena;
  puVar2 = h_spill.bitp + (n_spill + h_spill.shift >> 2);
  rVar3.last = n_spill + h_spill.shift & 3;
  if (puVar2 <= h_spill.last) {
    rVar4.bitp = (ulong)h_spill.arena;
    rVar4.shift = SUB84(puVar2,0);
    rVar4.last = (uint8 *)rVar3.last;
    return rVar4;
  }
  puVar2 = puVar2 + (-1 - (long)h_spill.last);
  rVar3.bitp = (ulong)(h_spill.arena + (int)((ulong)puVar2 >> 0x15) + 1);
  if (runtime_mheap_.arenas[0] != (runtime_heapArena *(*) [4194304])0x0) {
    if (0x3fffff < rVar3.bitp) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    if ((*runtime_mheap_.arenas[0])[rVar3.bitp] != (runtime_heapArena *)0x0) {
      puVar2 = (uint8 *)((ulong)puVar2 & 0x1fffff);
      iVar1 = (int)(*runtime_mheap_.arenas[0])[rVar3.bitp] + 0x1fffff;
      goto LAB_004c4e2e;
    }
  }
  iVar1 = 0;
LAB_004c4e2e:
  rVar3.shift = SUB84(puVar2,0);
  rVar3.arena = iVar1;
  return rVar3;
}

