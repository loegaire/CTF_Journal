
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mcentral).grow(runtime.mcentral * c, runtime.mspan *
   ~r0) */

runtime_mspan * runtime___mcentral__grow(runtime_mcentral *c)

{
  byte spanclass;
  ushort uVar1;
  runtime_heapArena *prVar2;
  ulong uVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  runtime_mspan *s;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  runtime_heapBits h;
  runtime_mcentral *c_spill;
  runtime_mspan *local_30;
  
                    /* Unresolved local var: runtime.mspan * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar3 = (ulong)(char)(c_spill->spanclass >> 1);
  if (0x43 < uVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  spanclass = runtime_class_to_allocnpages[uVar3];
  uVar1 = runtime_class_to_size[uVar3];
  runtime___mheap__alloc
            ((runtime_mheap *)(ulong)uVar1,(ulong)c_spill->spanclass,spanclass,SUB81(in_RDI,0));
  if (local_30 == (runtime_mspan *)0x0) {
    return (runtime_mspan *)0x0;
  }
  local_30->limit =
       (long)(ulong)uVar1 * ((ulong)spanclass * 0x2000 * (ulong)local_30->divMul >> 0x20) +
       local_30->startAddr;
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  s = (runtime_mspan *)(local_30->startAddr + 0x800000000000 >> 0x1a);
  if (s < (runtime_mspan *)&DAT_00400000) {
    prVar2 = (*runtime_mheap_.arenas[0])[(long)s];
    if (prVar2 == (runtime_heapArena *)0x0) {
      s = (runtime_mspan *)0x0;
      puVar4 = (uint8 *)0x0;
      puVar5 = (uint8 *)0x0;
    }
    else {
      puVar5 = prVar2->bitmap + (local_30->startAddr >> 5 & 0x1fffff);
      puVar4 = prVar2->bitmap + 0x1fffff;
    }
    h.shift = SUB84(puVar5,0);
    h.bitp = (uint8 *)local_30;
    h.arena = SUB84(puVar4,0);
    h.last = (uint8 *)in_RDI;
    runtime_heapBits_initSpan(h,s);
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

