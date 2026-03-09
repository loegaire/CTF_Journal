
/* WARNING: Unknown calling convention */

void runtime_updateTimerPMask(runtime_p *pp)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  runtime_p *pp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (pp_spill->numTimers != 0) {
    return;
  }
  runtime_lock2((runtime_mutex *)pp_spill);
  if (pp_spill->numTimers == 0) {
    iVar1 = pp_spill->id;
                    /* Unresolved local var: int32 word@[???]
                       Unresolved local var: uint32 mask@[???] */
    iVar3 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5;
    uVar2 = iVar1 + iVar3 * -0x20;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    if ((ulong)runtime_timerpMask.len <= (ulong)(long)iVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    LOCK();
    runtime_timerpMask.array[iVar3] =
         runtime_timerpMask.array[iVar3] & ~(1 << ((byte)uVar2 & 0x1f) & -(uint)(uVar2 < 0x20));
    UNLOCK();
  }
  runtime_unlock2(&pp_spill->timersLock);
  return;
}

