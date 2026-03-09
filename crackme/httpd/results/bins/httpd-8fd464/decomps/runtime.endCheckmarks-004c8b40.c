
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_endCheckmarks(void)

{
  bool bVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_work.full == 0) {
    if (runtime_work.markrootNext < runtime_work.markrootJobs) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    runtime_useCheckmark = false;
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029b0a4;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

