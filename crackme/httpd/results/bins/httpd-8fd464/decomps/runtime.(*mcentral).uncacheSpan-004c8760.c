
/* WARNING: Unknown calling convention */

void runtime___mcentral__uncacheSpan(runtime_mcentral *c,runtime_mspan *s)

{
  uint32 uVar1;
  runtime_mspan *s_00;
  long in_FS_OFFSET;
  string s_01;
  runtime_mcentral *c_spill;
  runtime_mspan *s_spill;
  runtime_sweepLocked local_10;
  
                    /* Unresolved local var: uint32 sg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (s_spill->allocCount == 0) {
    s_01.len = (int)s;
    s_01.str = &DAT_002a4f51;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  uVar1 = s_spill->sweepgen;
  if (uVar1 == runtime_mheap_.sweepgen + 1) {
    LOCK();
    s_spill->sweepgen = runtime_mheap_.sweepgen - 1;
    UNLOCK();
                    /* Unresolved local var: runtime.sweepLocked ss@[???] */
    runtime___sweepLocked__sweep(&local_10,SUB41(uVar1,0));
  }
  else {
    LOCK();
    s_spill->sweepgen = runtime_mheap_.sweepgen;
    UNLOCK();
    s_00 = (runtime_mspan *)(ulong)s_spill->allocCount;
    if ((runtime_mspan *)s_spill->nelems == s_00 || (long)s_spill->nelems - (long)s_00 < 0) {
      runtime___spanSet__push((runtime_spanSet *)s_spill,s_00);
    }
    else {
      runtime___spanSet__push((runtime_spanSet *)s_spill,s_00);
    }
  }
  return;
}

