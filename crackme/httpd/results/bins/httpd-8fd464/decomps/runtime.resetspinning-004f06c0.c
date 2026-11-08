
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_resetspinning(void)

{
  long lVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uint32 nmspinning@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (*(char *)(lVar1 + 0x11c) != '\0') {
    *(undefined1 *)(lVar1 + 0x11c) = 0;
    LOCK();
    UNLOCK();
    if (-1 < (int)(runtime_sched.nmspinning - 1)) {
      runtime_sched.nmspinning = runtime_sched.nmspinning - 1;
      runtime_wakep();
      return;
    }
    s.len = unaff_RBX;
    s.str = (uint8 *)0x2a2fec;
    runtime_sched.nmspinning = runtime_sched.nmspinning - 1;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  s_00.len = unaff_RBX;
  s_00.str = (uint8 *)0x2a207e;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

