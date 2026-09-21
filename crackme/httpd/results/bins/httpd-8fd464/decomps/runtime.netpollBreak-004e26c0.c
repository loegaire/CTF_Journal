
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_netpollBreak(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  bool bVar1;
  string s;
  string s_00;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  bVar1 = runtime_netpollWakeSig == 0;
  if (bVar1) {
    runtime_netpollWakeSig = 1;
  }
  UNLOCK();
  if (bVar1) {
    while ((runtime_write1(), local_18 != 1 && (local_18 != -0x23))) {
      if (local_18 != -4) {
        runtime_printlock();
        s.len = unaff_RBX;
        s.str = &DAT_002a66ef;
        runtime_printstring(s);
        runtime_printint((long)-local_18);
        runtime_printnl();
        runtime_printunlock();
        s_00.len = unaff_RBX;
        s_00.str = &DAT_002a3e32;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
    }
  }
  return;
}

