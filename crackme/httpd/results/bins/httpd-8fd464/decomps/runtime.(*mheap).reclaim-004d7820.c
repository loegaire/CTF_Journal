
/* WARNING: Unknown calling convention */

void runtime___mheap__reclaim(runtime_mheap *h,uintptr npage)

{
  int *piVar1;
  uint64 *puVar2;
  int iVar3;
  long lVar4;
  ulong pageIdx;
  runtime_arenaIdx *prVar5;
  uintptr n;
  ulong uVar6;
  long lVar7;
  runtime_mheap *extraout_RAX;
  ulong uVar8;
  runtime_mheap *h_00;
  long in_FS_OFFSET;
  bool bVar9;
  __runtime_arenaIdx arenas;
  runtime_mheap *h_spill;
  uintptr npage_spill;
  ulong local_40;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: bool locked@[???]
                       Unresolved local var: []runtime.arenaIdx arenas@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0x7fffffffffffffff < h_spill->reclaimIndex) {
    return;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar4 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar4 = *(long *)(lVar4 + 0x30);
  if (runtime_trace.enabled != false) {
    runtime_traceGCSweepStart();
                    /* Unresolved local var: runtime.g * _g_@[???] */
  }
  pageIdx = (h_spill->sweepArenas).len;
  prVar5 = (h_spill->sweepArenas).array;
  n = (h_spill->sweepArenas).cap;
  h_00 = (runtime_mheap *)0x0;
LAB_004d78e0:
  do {
    if (npage_spill == 0) {
LAB_004d7a0c:
      if ((char)h_00 != '\0') {
        runtime_unlock2(&h_00->lock);
      }
      if (runtime_trace.enabled != false) {
        runtime_traceGCSweepDone();
      }
      lVar7 = *(long *)(in_FS_OFFSET + -8);
      iVar3 = *(int *)(lVar4 + 0x110);
      *(int *)(lVar4 + 0x110) = iVar3 + -1;
      if ((iVar3 == 1) && (*(char *)(lVar7 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffade;
      }
      return;
    }
                    /* Unresolved local var: uintptr credit@[???] */
    uVar6 = h_spill->reclaimCredit;
    if (uVar6 != 0) {
                    /* Unresolved local var: uintptr take@[???] */
      uVar8 = uVar6;
      if (npage_spill < uVar6) {
        uVar8 = npage_spill;
      }
      LOCK();
      bVar9 = uVar6 == h_spill->reclaimCredit;
      if (bVar9) {
        h_spill->reclaimCredit = uVar6 - uVar8;
      }
      UNLOCK();
      if (bVar9) {
        npage_spill = npage_spill - uVar8;
      }
      goto LAB_004d78e0;
    }
    LOCK();
    puVar2 = &h_spill->reclaimIndex;
    uVar6 = *puVar2;
    *puVar2 = *puVar2 + 0x200;
    UNLOCK();
    if (pageIdx <= uVar6 >> 0xd) {
      LOCK();
      h_spill->reclaimIndex = 0x8000000000000000;
      UNLOCK();
      goto LAB_004d7a0c;
    }
    if ((char)h_00 == '\0') {
      runtime_lock2(&h_00->lock);
      h_00 = extraout_RAX;
    }
    arenas.len = (int)h_spill;
    arenas.array = (runtime_arenaIdx *)0x8000000000000000;
    arenas.cap = (int)prVar5;
    runtime___mheap__reclaimChunk(h_00,arenas,pageIdx,n);
    if (npage_spill < local_40) {
      LOCK();
      h_spill->reclaimCredit = h_spill->reclaimCredit + (local_40 - npage_spill);
      UNLOCK();
      npage_spill = 0;
    }
    else {
      npage_spill = npage_spill - local_40;
    }
    h_00 = (runtime_mheap *)0x1;
  } while( true );
}

