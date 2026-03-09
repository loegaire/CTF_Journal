
/* WARNING: Unknown calling convention */

void sync___Mutex__Unlock(sync_Mutex *m)

{
  int iVar1;
  uint uVar2;
  int32 unaff_EBX;
  long in_FS_OFFSET;
  sync_Mutex *m_spill;
  
                    /* Unresolved local var: int32 new@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  iVar1 = m_spill->state;
  m_spill->state = m_spill->state + -1;
  UNLOCK();
  uVar2 = iVar1 - 1;
  if (uVar2 != 0) {
    sync___Mutex__unlockSlow((sync_Mutex *)(ulong)uVar2,unaff_EBX);
  }
  return;
}

