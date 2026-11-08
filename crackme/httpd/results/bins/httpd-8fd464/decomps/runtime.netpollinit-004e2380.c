
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_netpollinit(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  multireturn_int32_int32_int32_ mVar1;
  int local_80;
  int iStack_7c;
  int local_78;
  int local_50;
  
                    /* Unresolved local var: int32 errno@[???]
                       Unresolved local var: int32 n@[???]
                       Unresolved local var: runtime.keventt ev@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_kqueue();
  runtime_kq = local_80;
  if (local_80 < 0) {
    runtime_printlock();
    s_03.len = unaff_RBX;
    s_03.str = (uint8 *)0x2a07c4;
    runtime_printstring(s_03);
    runtime_printint((long)-local_80);
    runtime_printnl();
    runtime_printunlock();
    s_04.len = unaff_RBX;
    s_04.str = &DAT_0029fef7;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
  runtime_closeonexec();
  mVar1 = runtime_nonblockingPipe();
  s.len = CONCAT44((int)((ulong)unaff_RBX >> 0x20),mVar1.w);
  if (local_78 != 0) {
    runtime_printlock();
    s_01.len = s.len;
    s_01.str = &DAT_0029f6ad;
    runtime_printstring(s_01);
    runtime_printint((long)-local_78);
    runtime_printnl();
    runtime_printunlock();
    s_02.len = s.len;
    s_02.str = &DAT_0029c14e;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  runtime_kevent();
  if (-1 < local_50) {
    runtime_netpollBreakRd = (long)local_80;
    runtime_netpollBreakWr = (long)iStack_7c;
    return;
  }
  runtime_printlock();
  s.str = (uint8 *)0x2a07a8;
  runtime_printstring(s);
  runtime_printint((long)-local_50);
  runtime_printnl();
  runtime_printunlock();
  s_00.len = s.len;
  s_00.str = &DAT_0029d43f;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

