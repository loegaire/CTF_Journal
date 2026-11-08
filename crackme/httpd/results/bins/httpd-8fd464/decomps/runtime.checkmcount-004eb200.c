
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_checkmcount(void)

{
  int32 iVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  
  while (iVar1 = runtime_sched.maxmcount,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((int)runtime_sched.mnext - (int)runtime_sched.nmfreed <= runtime_sched.maxmcount) {
    return;
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_0029ee84;
  runtime_printstring(s);
  runtime_printint((long)iVar1);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_002964e1;
  runtime_printstring(s_00);
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029a3e3;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

