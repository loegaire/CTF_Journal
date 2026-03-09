
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mReserveID(int64 ~r0) */

int64 runtime_mReserveID(void)

{
  int64 iVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
  while (iVar1 = runtime_sched.mnext,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_sched.mnext <= runtime_sched.mnext + 1) {
    runtime_sched.mnext = runtime_sched.mnext + 1;
    runtime_checkmcount();
    return iVar1;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029ff12;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

