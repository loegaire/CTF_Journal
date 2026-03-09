
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.spanOfHeap(uintptr p, runtime.mspan * ~r1) */

runtime_mspan * runtime_spanOfHeap(uintptr p)

{
  ulong uVar1;
  runtime_mspan *prVar2;
  bool bVar3;
  uintptr p_spill;
  
  uVar1 = p_spill + 0x800000000000 >> 0x1a;
  if (uVar1 < 0x400000) {
    if ((*runtime_mheap_.arenas[0])[uVar1] == (runtime_heapArena *)0x0) {
      prVar2 = (runtime_mspan *)0x0;
    }
    else {
      prVar2 = (*runtime_mheap_.arenas[0])[uVar1]->spans[p_spill >> 0xd & 0x1fff];
    }
  }
  else {
    prVar2 = (runtime_mspan *)0x0;
  }
  if (prVar2 == (runtime_mspan *)0x0) {
    bVar3 = true;
  }
  else {
    bVar3 = (prVar2->state).s != 1;
  }
  if (((!bVar3) && (prVar2->startAddr <= p_spill)) && (p_spill < prVar2->limit)) {
    return (runtime_mspan *)p_spill;
  }
  return (runtime_mspan *)p_spill;
}

