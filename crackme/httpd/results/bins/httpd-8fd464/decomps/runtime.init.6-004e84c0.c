
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_init_6(void)

{
  long in_FS_OFFSET;
  runtime_funcInfo rVar1;
  runtime_funcInfo f;
  string s;
  string s_00;
  runtime__func *local_20;
  uint local_18;
  undefined4 uStack_14;
  
                    /* Unresolved local var: int32 total@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1 = runtime_findfunc((uintptr)runtime_asyncPreempt);
  f._func._4_4_ = uStack_14;
  f._func._0_4_ = local_18;
  rVar1._func = local_20;
  runtime_funcMaxSPDelta(rVar1);
  rVar1 = runtime_findfunc((ulong)local_18);
  f.datap = rVar1.datap;
  runtime_funcMaxSPDelta(f);
  runtime_asyncPreemptStack = (long)(int)(local_18 * 2) + 0x40;
  if (runtime_asyncPreemptStack < 0x321) {
    return;
  }
  runtime_printlock();
  s.len = (int)f.datap;
  s.str = &DAT_0029fe8b;
  runtime_printstring(s);
  runtime_printuint(runtime_asyncPreemptStack);
  runtime_printnl();
  runtime_printunlock();
  s_00.len = (int)f.datap;
  s_00.str = &DAT_0029c7cf;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

