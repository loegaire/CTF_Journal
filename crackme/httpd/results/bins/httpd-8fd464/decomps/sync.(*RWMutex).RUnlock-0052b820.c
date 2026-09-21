
/* WARNING: Unknown calling convention */

void sync___RWMutex__RUnlock(sync_RWMutex *rw)

{
  int32 *piVar1;
  int iVar2;
  int32 unaff_EBX;
  long in_FS_OFFSET;
  sync_RWMutex *rw_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int32 r@[???] */
  LOCK();
  piVar1 = &rw_spill->readerCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((int)(iVar2 - 1U) < 0) {
    sync___RWMutex__rUnlockSlow((sync_RWMutex *)(ulong)(iVar2 - 1U),unaff_EBX);
  }
  return;
}

