
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkRootCheck(void)

{
  uint32 uVar1;
  uint32 uVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  undefined8 local_20;
  func__runtime_g_ *local_18;
  undefined8 *puStack_10;
  
                    /* Unresolved local var: int i@[???] */
  while (uVar2 = runtime_work.markrootJobs, uVar1 = runtime_work.markrootNext,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_work.markrootJobs <= runtime_work.markrootNext) {
    local_20 = 0;
    local_18 = runtime_gcMarkRootCheck_func1;
    puStack_10 = &local_20;
    runtime_forEachGRace(&local_18);
    return;
  }
  runtime_printlock();
  runtime_printuint((ulong)uVar1);
  s.len = unaff_RBX;
  s.str = &DAT_00287db9;
  runtime_printstring(s);
  runtime_printuint((ulong)uVar2);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029b91a;
  runtime_printstring(s_00);
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029dd81;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

