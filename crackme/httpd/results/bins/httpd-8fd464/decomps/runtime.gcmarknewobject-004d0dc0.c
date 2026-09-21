
/* WARNING: Unknown calling convention */

void runtime_gcmarknewobject(runtime_mspan *span,uintptr obj,uintptr size,uintptr scanSize)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long in_FS_OFFSET;
  string s;
  runtime_mspan *span_spill;
  uintptr obj_spill;
  uintptr size_spill;
  uintptr scanSize_spill;
  
                    /* Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: uintptr pageIdx@[???] */
  if (runtime_useCheckmark) {
    s.len = obj;
    s.str = &DAT_002a7b64;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  uVar4 = (obj_spill - span_spill->startAddr) * (ulong)span_spill->divMul;
                    /* Unresolved local var: uint8 * bytep@[???] */
  LOCK();
  span_spill->gcmarkBits[uVar4 >> 0x23] =
       span_spill->gcmarkBits[uVar4 >> 0x23] | (byte)(1 << ((byte)(uVar4 >> 0x20) & 7));
  UNLOCK();
  uVar4 = span_spill->startAddr;
  uVar3 = uVar4 + 0x800000000000 >> 0x1a;
  if (uVar3 < 0x400000) {
    uVar5 = uVar4 >> 0x10 & 0x3ff;
    bVar6 = (byte)(1 << ((byte)(uVar4 >> 0xd) & 7));
    if ((bVar6 & (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar3]->bitmap + uVar5)]) == 0)
    {
      LOCK();
      (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar3]->bitmap + uVar5)] =
           (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar3]->bitmap + uVar5)] | bVar6;
      UNLOCK();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    plVar1 = (long *)(lVar2 + 0x16a8);
    *plVar1 = *plVar1 + size_spill;
    plVar1 = (long *)(lVar2 + 0x16b0);
    *plVar1 = *plVar1 + scanSize_spill;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

