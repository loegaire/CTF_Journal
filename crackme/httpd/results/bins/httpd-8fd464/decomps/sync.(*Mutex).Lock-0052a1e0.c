
/* WARNING: Unknown calling convention */

void sync___Mutex__Lock(sync_Mutex *m)

{
  uint uVar1;
  sync_Mutex *m_00;
  long in_FS_OFFSET;
  sync_Mutex *m_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  m_00 = (sync_Mutex *)0x0;
  LOCK();
  uVar1 = m_spill->state;
  if (uVar1 == 0) {
    m_spill->state = 1;
  }
  else {
    m_00 = (sync_Mutex *)(ulong)uVar1;
  }
  UNLOCK();
  if (uVar1 == 0) {
    return;
  }
  sync___Mutex__lockSlow(m_00);
  return;
}

