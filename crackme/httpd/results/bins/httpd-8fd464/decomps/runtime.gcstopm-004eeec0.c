
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcstopm(void)

{
  long lVar1;
  uint32 uVar2;
  int iVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  bool bVar4;
  string s;
  string s_00;
  runtime_mutex *local_20;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_sched.gcwaiting != 0) {
    lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    if (*(char *)(lVar1 + 0x11c) != '\0') {
      *(undefined1 *)(lVar1 + 0x11c) = 0;
      LOCK();
      uVar2 = runtime_sched.nmspinning - 1;
      UNLOCK();
      iVar3 = runtime_sched.nmspinning - 1;
      runtime_sched.nmspinning = uVar2;
      if (iVar3 < 0) {
        s.len = unaff_RBX;
        s.str = (uint8 *)0x2a04ec;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
    }
    runtime_releasep();
    runtime_lock2(local_20);
    *(undefined4 *)((long)&local_20->key + 4) = 3;
    iVar3 = runtime_sched.stopwait + -1;
    bVar4 = runtime_sched.stopwait == 1;
    runtime_sched.stopwait = iVar3;
    if (bVar4) {
      runtime_notewakeup(&runtime_sched.stopnote);
    }
    runtime_unlock2(&runtime_sched.lock);
    runtime_stopm();
    return;
  }
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029fc54;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

