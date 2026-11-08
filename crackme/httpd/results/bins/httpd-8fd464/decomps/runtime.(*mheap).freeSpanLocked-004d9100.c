
/* WARNING: Unknown calling convention */

void runtime___mheap__freeSpanLocked(runtime_mheap *h,runtime_mspan *s,runtime_spanAllocType typ)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  runtime_mlink *prVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  runtime_mheap *h_spill;
  runtime_mlink *v;
  runtime_spanAllocType typ_spill;
  long local_40;
  
                    /* Unresolved local var: runtime.heapStatsDelta * stats@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  cVar1 = *(char *)((long)&v[0xc].next + 3);
                    /* Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: uintptr pageIdx@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  if (cVar1 == '\x01') {
    uVar2 = *(ushort *)&v[0xc].next;
    if ((uVar2 != 0) || (h_spill->sweepgen != *(uint32 *)&v[0xb].next)) {
      uVar3 = *(uint *)&v[0xb].next;
      uVar4 = h_spill->sweepgen;
      prVar5 = v[3].next;
      runtime_printlock();
      s_02.len = (int)v;
      s_02.str = (uint8 *)0x2a0620;
      runtime_printstring(s_02);
      runtime_printuintptr((uintptr)v);
      s_03.len = (int)v;
      s_03.str = &DAT_00288903;
      runtime_printstring(s_03);
      runtime_printhex((uint64)prVar5);
      s_04.len = (int)v;
      s_04.str = &DAT_0029276a;
      runtime_printstring(s_04);
      runtime_printuint((ulong)uVar2);
      s_05.len = (int)v;
      s_05.str = &DAT_0028ec38;
      runtime_printstring(s_05);
      runtime_printuint((ulong)uVar3);
      s_06.len = (int)v;
      s_06.str = &net__stmp_87;
      runtime_printstring(s_06);
      runtime_printuint((ulong)uVar4);
      runtime_printnl();
      runtime_printunlock();
      s_07.len = (int)v;
      s_07.str = &DAT_002a444e;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_07);
    }
    LOCK();
    h_spill->pagesInUse = h_spill->pagesInUse - (long)v[4].next;
    UNLOCK();
    prVar5 = v[3].next;
    if (0x3fffff < (ulong)(prVar5 + 0x100000000000) >> 0x1a) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    LOCK();
    "*net.addrinfoErrno"
    [(long)((*runtime_mheap_.arenas[0])[(ulong)(prVar5 + 0x100000000000) >> 0x1a]->bitmap +
           ((ulong)prVar5 >> 0x10 & 0x3ff) + 2)] =
         "*net.addrinfoErrno"
         [(long)((*runtime_mheap_.arenas[0])[(ulong)(prVar5 + 0x100000000000) >> 0x1a]->bitmap +
                ((ulong)prVar5 >> 0x10 & 0x3ff) + 2)] &
         ~(byte)(1 << ((byte)((ulong)prVar5 >> 0xd) & 7));
    UNLOCK();
  }
  else {
    if (cVar1 != '\x02') {
      s_01.len = (int)v;
      s_01.str = &DAT_002a6cd3;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
    if (*(short *)&v[0xc].next != 0) {
      s_00.len = (int)v;
      s_00.str = &DAT_002a6cfc;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
  }
  prVar5 = v[4].next;
  if (typ_spill == 0) {
    LOCK();
    runtime_memstats.heap_inuse = runtime_memstats.heap_inuse + (long)prVar5 * -0x2000;
    UNLOCK();
  }
  else {
    runtime___sysMemStat__add(&runtime_memstats.heap_sys,(int64)v);
    local_40 = (long)prVar5 * 0x2000;
  }
  runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
  if (typ_spill < 2) {
    if (typ_spill == 0) {
      LOCK();
      *(long *)(local_40 + 0x10) = *(long *)(local_40 + 0x10) + (long)prVar5 * -0x2000;
      UNLOCK();
    }
    else {
      LOCK();
      *(long *)(local_40 + 0x18) = *(long *)(local_40 + 0x18) + (long)prVar5 * -0x2000;
      UNLOCK();
    }
  }
  else if (typ_spill == 2) {
    LOCK();
    *(long *)(local_40 + 0x28) = *(long *)(local_40 + 0x28) + (long)prVar5 * -0x2000;
    UNLOCK();
  }
  else if (typ_spill == 3) {
    LOCK();
    *(long *)(local_40 + 0x20) = *(long *)(local_40 + 0x20) + (long)prVar5 * -0x2000;
    UNLOCK();
  }
  runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
  runtime___pageAlloc__free
            ((runtime_pageAlloc *)h_spill,(uintptr)v[4].next,(uintptr)&h_spill->pages);
  LOCK();
  *(undefined1 *)((long)&v[0xc].next + 3) = 0;
  UNLOCK();
                    /* Unresolved local var: runtime.p * pp@[???] */
  lVar6 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (lVar6 != 0) {
    uVar7 = *(ulong *)(lVar6 + 0x1228);
    if ((long)uVar7 < 0x80) {
      if (uVar7 < 0x80) {
        *(runtime_mlink **)(lVar6 + 0x1230 + uVar7 * 8) = v;
        *(long *)(lVar6 + 0x1228) = *(long *)(lVar6 + 0x1228) + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  (h_spill->spanalloc).inuse = (h_spill->spanalloc).inuse - (h_spill->spanalloc).size;
  v->next = (h_spill->spanalloc).list;
  (h_spill->spanalloc).list = v;
  return;
}

