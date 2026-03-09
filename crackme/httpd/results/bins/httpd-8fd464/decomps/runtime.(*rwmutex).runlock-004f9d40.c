
/* WARNING: Unknown calling convention */

void runtime___rwmutex__runlock(runtime_rwmutex *rw)

{
  uint32 *puVar1;
  uint32 uVar2;
  long lVar3;
  int iVar4;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_rwmutex *rw_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int32 r@[???] */
  LOCK();
  puVar1 = &rw_spill->readerCount;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar4 = uVar2 - 1;
  if (iVar4 < 0) {
    if ((iVar4 == -1) || (iVar4 == -0x40000001)) {
      s.len = unaff_RBX;
      s.str = &DAT_0029fe70;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    LOCK();
    puVar1 = &rw_spill->readerWait;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      runtime_lock2((runtime_mutex *)0x0);
      if (rw_spill->writer != 0) {
        runtime_notewakeup((runtime_note *)(rw_spill->writer + 0x158));
      }
      runtime_unlock2(&rw_spill->rLock);
    }
  }
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  iVar4 = *(int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *(int *)(*(long *)(lVar3 + 0x30) + 0x110) = iVar4 + -1;
  if ((iVar4 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
  }
  return;
}

