
/* WARNING: Unknown calling convention */

void sync___RWMutex__Unlock(sync_RWMutex *rw)

{
  int32 *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  sync_RWMutex *rw_spill;
  
                    /* Unresolved local var: int32 r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  piVar1 = &rw_spill->readerCount;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 0x40000000;
  UNLOCK();
  iVar3 = iVar3 + 0x40000000;
  if (0x3fffffff < iVar3) {
    s.len = unaff_RBX;
    s.str = (uint8 *)0x2a2af0;
    sync_throw(s);
                    /* Unresolved local var: int i@[???] */
  }
  for (lVar5 = 0; lVar5 < iVar3; lVar5 = lVar5 + 1) {
    sync_runtime_Semrelease(&rw_spill->readerSem,SUB41(iVar3,0),(int)rw_spill);
  }
                    /* Unresolved local var: int32 new@[???] */
  LOCK();
  iVar2 = (rw_spill->w).state;
  (rw_spill->w).state = (rw_spill->w).state + -1;
  UNLOCK();
  uVar4 = iVar2 - 1;
  if (uVar4 != 0) {
    sync___Mutex__unlockSlow((sync_Mutex *)(ulong)uVar4,iVar3);
  }
  return;
}

