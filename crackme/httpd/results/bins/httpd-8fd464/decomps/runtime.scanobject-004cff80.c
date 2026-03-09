
/* WARNING: Unknown calling convention */

void runtime_scanobject(uintptr b,runtime_gcWork *gcw)

{
  int *piVar1;
  runtime_heapArena *prVar2;
  runtime_workbuf *prVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  runtime_gcWork *prVar7;
  runtime_gcWork *w;
  runtime_mspan *prVar8;
  ulong uVar9;
  runtime_mspan *prVar10;
  runtime_gcWork *refBase;
  runtime_gcWork *gcw_00;
  runtime_mspan *span;
  runtime_gcWork *prVar11;
  long in_FS_OFFSET;
  string s;
  runtime_heapBits h;
  uintptr b_spill;
  runtime_gcWork *gcw_spill;
  runtime_gcWork *local_70;
  runtime_gcWork *local_68;
  runtime_gcWork *local_60;
  
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: uintptr n@[???]
                       Unresolved local var: uintptr i@[???]
                       Unresolved local var: runtime.heapBits hbits@[???]
                       Unresolved local var: runtime.mspan * ~R0@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  prVar7 = (runtime_gcWork *)(b_spill + 0x800000000000 >> 0x1a);
  if ((runtime_gcWork *)&DAT_003fffff < prVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  prVar2 = (*runtime_mheap_.arenas[0])[(long)prVar7];
  if (prVar2 == (runtime_heapArena *)0x0) {
    prVar7 = (runtime_gcWork *)0x0;
    gcw_00 = (runtime_gcWork *)0x0;
    prVar11 = (runtime_gcWork *)0x0;
    refBase = (runtime_gcWork *)0x0;
  }
  else {
    refBase = (runtime_gcWork *)(prVar2->bitmap + (b_spill >> 5 & 0x1fffff));
    gcw_00 = (runtime_gcWork *)(b_spill >> 3 & 3);
    prVar11 = (runtime_gcWork *)(prVar2->bitmap + 0x1fffff);
  }
  prVar8 = prVar2->spans[b_spill >> 0xd & 0x1fff];
  prVar10 = (runtime_mspan *)prVar8->elemsize;
  if (prVar10 == (runtime_mspan *)0x0) {
    s.len = (int)refBase;
    s.str = &DAT_0029a37d;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  w = prVar7;
  if ((runtime_mspan *)0x20000 < prVar10) {
    if (prVar8->startAddr == b_spill) {
      uVar9 = b_spill;
      if ((prVar8->spanclass & 1) != 0) {
        gcw_spill->bytesMarked = (long)&prVar10->next + gcw_spill->bytesMarked;
        return;
      }
                    /* Unresolved local var: uintptr oblet@[???] */
      while (uVar9 = uVar9 + 0x20000, uVar9 < prVar8->elemsize + prVar8->startAddr) {
                    /* Unresolved local var: runtime.workbuf * wbuf@[???] */
        prVar3 = gcw_spill->wbuf1;
        if (prVar3 == (runtime_workbuf *)0x0) {
          bVar6 = false;
        }
        else {
          uVar4 = (prVar3->workbufhdr).nobj;
          if (uVar4 == 0xfd) {
            bVar6 = false;
          }
          else {
            if (0xfc < uVar4) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            prVar3->obj[uVar4] = uVar9;
            piVar1 = &(prVar3->workbufhdr).nobj;
            *piVar1 = *piVar1 + 1;
            bVar6 = true;
          }
        }
        if (!bVar6) {
          runtime___gcWork__put(w,(uintptr)refBase);
          w = (runtime_gcWork *)((ulong)prVar7 & 0xffffffff);
        }
      }
    }
    prVar10 = (runtime_mspan *)((prVar8->elemsize + prVar8->startAddr) - b_spill);
    if ((runtime_mspan *)0x20000 < prVar10) {
      prVar10 = (runtime_mspan *)0x20000;
    }
  }
  for (prVar8 = (runtime_mspan *)0x0; prVar8 < prVar10; prVar8 = (runtime_mspan *)&prVar8->prev) {
    bVar5 = *(byte *)&refBase->wbuf1 >> ((byte)gcw_00 & 0x1f);
    span = (runtime_mspan *)(ulong)bVar5;
                    /* Unresolved local var: uintptr obj@[???] */
    if ((bVar5 >> 4 & 1) == 0) break;
    h.arena = (uint)gcw_00;
    if ((((*(byte *)&refBase->wbuf1 >> (h.arena & 0x1f) & 1) != 0) &&
        (span = *(runtime_mspan **)((long)&prVar8->next + b_spill), span != (runtime_mspan *)0x0))
       && (span = (runtime_mspan *)((long)span - b_spill), prVar10 <= span)) {
      prVar7 = prVar11;
                    /* Unresolved local var: uintptr obj@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr objIndex@[???] */
      runtime_findObject((uintptr)w,(uintptr)refBase,(uintptr)gcw_00);
      if (local_70 != (runtime_gcWork *)0x0) {
        local_70 = local_68;
        local_68 = gcw_spill;
        runtime_greyobject(b_spill,(uintptr)prVar8,(uintptr)gcw_spill,span,gcw_00,(uintptr)prVar7);
      }
      w = (runtime_gcWork *)((ulong)w & 0xffffffff);
    }
    if (h.arena < 3) {
      gcw_00 = (runtime_gcWork *)(ulong)(h.arena + 1);
    }
    else if (prVar11 == refBase) {
      h.shift = SUB84(refBase,0);
      h.bitp = (uint8 *)w;
      h.last = (uint8 *)span;
      runtime_heapBits_nextArena(h);
      gcw_00 = (runtime_gcWork *)((ulong)local_68 & 0xffffffff);
      w = (runtime_gcWork *)((ulong)local_68 >> 0x20);
      refBase = local_70;
      prVar11 = local_60;
    }
    else {
      gcw_00 = (runtime_gcWork *)0x0;
      refBase = (runtime_gcWork *)((long)&refBase->wbuf1 + 1);
    }
  }
  gcw_spill->bytesMarked = (long)&prVar10->next + gcw_spill->bytesMarked;
  gcw_spill->scanWork = (long)&prVar8->next + gcw_spill->scanWork;
  return;
}

