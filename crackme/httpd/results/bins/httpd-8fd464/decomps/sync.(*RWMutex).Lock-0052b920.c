
/* WARNING: Unknown calling convention */

void sync___RWMutex__Lock(sync_RWMutex *rw)

{
  int32 *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  sync_Mutex *m;
  bool unaff_BL;
  long in_FS_OFFSET;
  sync_RWMutex *rw_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  m = (sync_Mutex *)0x0;
  LOCK();
  uVar2 = (rw_spill->w).state;
  if (uVar2 == 0) {
    (rw_spill->w).state = 1;
  }
  else {
    m = (sync_Mutex *)(ulong)uVar2;
  }
  UNLOCK();
  if (uVar2 != 0) {
    sync___Mutex__lockSlow(m);
  }
  LOCK();
  piVar1 = &rw_spill->readerCount;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -0x40000000;
  UNLOCK();
  if (iVar3 != 0) {
    LOCK();
    piVar1 = &rw_spill->readerWait;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + iVar3;
    UNLOCK();
    if (iVar3 + iVar4 != 0) {
      sync_runtime_SemacquireMutex(&rw_spill->writerSem,unaff_BL,(int)rw_spill);
    }
  }
  return;
}

