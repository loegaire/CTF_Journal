
/* WARNING: Unknown calling convention */

void sync___Mutex__unlockSlow(sync_Mutex *m,int32 new)

{
  int iVar1;
  ulong skipframes;
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  bool bVar2;
  string s;
  sync_Mutex *m_spill;
  int32 old;
  
  s.len._4_4_ = unaff_0000001c;
  s.len._0_4_ = new;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((old + 1U & 1) == 0) {
    s.str = (uint8 *)0x2a1ab4;
    sync_throw(s);
  }
  skipframes = (ulong)(uint)old;
  if (((uint)old >> 2 & 1) != 0) {
    sync_runtime_Semrelease(&m_spill->sema,SUB41(new,0),skipframes);
    return;
  }
  while( true ) {
    iVar1 = (int)skipframes;
    if ((iVar1 >> 3 == 0) || ((skipframes & 7) != 0)) {
      return;
    }
    LOCK();
    bVar2 = iVar1 == m_spill->state;
    if (bVar2) {
      m_spill->state = iVar1 - 8U | 2;
    }
    UNLOCK();
    if (bVar2) break;
    skipframes = (ulong)(uint)m_spill->state;
  }
  sync_runtime_Semrelease
            (&m_spill->sema,SUB41(new,0),(ulong)CONCAT31((int3)(iVar1 - 8U >> 8),bVar2));
  return;
}

