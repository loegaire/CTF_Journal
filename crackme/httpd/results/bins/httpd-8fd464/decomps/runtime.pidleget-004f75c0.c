
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pidleget(runtime.p * ~r0) */

runtime_p * runtime_pidleget(void)

{
  int iVar1;
  runtime_puintptr rVar2;
  runtime_p *in_RAX;
  uint uVar3;
  int iVar4;
  
                    /* Unresolved local var: runtime.p * _p_@[???] */
  rVar2 = runtime_sched.pidle;
  if (runtime_sched.pidle != 0) {
    iVar1 = *(int *)runtime_sched.pidle;
                    /* Unresolved local var: int32 word@[???]
                       Unresolved local var: uint32 mask@[???] */
    iVar4 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5;
    uVar3 = iVar1 + iVar4 * -0x20;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    if ((ulong)runtime_timerpMask.len <= (ulong)(long)iVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    LOCK();
    runtime_timerpMask.array[iVar4] =
         runtime_timerpMask.array[iVar4] | 1 << ((byte)uVar3 & 0x1f) & -(uint)(uVar3 < 0x20);
    UNLOCK();
    iVar1 = *(int *)rVar2;
                    /* Unresolved local var: uint32 mask@[???] */
    iVar4 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5;
    uVar3 = iVar1 + iVar4 * -0x20;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    if ((ulong)runtime_idlepMask.len <= (ulong)(long)iVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    LOCK();
    runtime_idlepMask.array[iVar4] =
         runtime_idlepMask.array[iVar4] & ~(1 << ((byte)uVar3 & 0x1f) & -(uint)(uVar3 < 0x20));
    UNLOCK();
    runtime_sched.pidle = *(runtime_puintptr *)(rVar2 + 8);
    LOCK();
    in_RAX = (runtime_p *)(ulong)runtime_sched.npidle;
    UNLOCK();
    runtime_sched.npidle = runtime_sched.npidle - 1;
  }
  return in_RAX;
}

