
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.inHeapOrStack(uintptr b, bool ~r1) */

bool runtime_inHeapOrStack(uintptr b)

{
  bool bVar1;
  ulong uVar2;
  runtime_mspan *prVar3;
  uintptr b_spill;
  
  uVar2 = b_spill + 0x800000000000 >> 0x1a;
  if (uVar2 < 0x400000) {
    if ((*runtime_mheap_.arenas[0])[uVar2] == (runtime_heapArena *)0x0) {
      prVar3 = (runtime_mspan *)0x0;
    }
    else {
      prVar3 = (*runtime_mheap_.arenas[0])[uVar2]->spans[b_spill >> 0xd & 0x1fff];
    }
  }
  else {
    prVar3 = (runtime_mspan *)0x0;
  }
  bVar1 = SUB81(b_spill,0);
  if ((prVar3 != (runtime_mspan *)0x0) && (prVar3->startAddr <= b_spill)) {
    if ((byte)((prVar3->state).s - 1) < 2) {
      return bVar1;
    }
    return bVar1;
  }
  return bVar1;
}

