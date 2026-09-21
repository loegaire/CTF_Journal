
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__sysInit(runtime_pageAlloc *p)

{
  uint uVar1;
  void *v;
  long in_FS_OFFSET;
  string s;
  runtime_pageAlloc *p_spill;
  runtime_pallocSum *local_60;
  uint local_30 [4];
  uint uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: uint shift@[???] */
  local_30[0] = runtime_levelShift[0];
  local_30[1] = runtime_levelShift[1];
  local_30[2] = runtime_levelShift[2];
  local_30[3] = runtime_levelShift[3];
  uStack_10 = runtime_levelShift[4];
  v = (void *)0x0;
  while( true ) {
    if (4 < (long)v) {
      return;
    }
    uVar1 = local_30[(long)v];
                    /* Unresolved local var: int entries@[???]
                       Unresolved local var: uintptr b@[???]
                       Unresolved local var: void * r@[???]
                       Unresolved local var: runtime.notInHeapSlice sl@[???] */
    s.len = -runtime_physPageSize;
    runtime_sysReserve(v,s.len);
    if (local_60 == (runtime_pallocSum *)0x0) break;
    p_spill->summary[(long)v].len = 0;
    p_spill->summary[(long)v].cap =
         1L << ((byte)-(uVar1 - 0x30) & 0x3f) & -(ulong)(-(uVar1 - 0x30) < 0x40);
    if (runtime_writeBarrier._0_4_ == 0) {
      p_spill->summary[(long)v].array = local_60;
    }
    else {
      runtime_gcWriteBarrierR8();
    }
    v = (void *)((long)v + 1);
  }
  s.str = &DAT_002a5357;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

