
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mallocinit(void)

{
  long lVar1;
  int64 v;
  int64 v_00;
  uint16 *unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  runtime_arenaHint *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_class_to_size[2] != 0x10) {
    s_14.len = (int)unaff_RBX;
    s_14.str = &DAT_0029a091;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_14);
  }
  runtime_testdefersizes();
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < 0x44; lVar1 = lVar1 + 1) {
    unaff_RBX = runtime_class_to_size;
    runtime_memstats.by_size[lVar1].size = (uint)runtime_class_to_size[lVar1];
  }
  if (runtime_physPageSize == 0) {
    s_13.len = (int)unaff_RBX;
    s_13.str = (uint8 *)0x2a17a8;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_13);
  }
  if (0x80000 < runtime_physPageSize) {
    runtime_printlock();
    s_09.len = (int)unaff_RBX;
    s_09.str = &DAT_0029ad46;
    runtime_printstring(s_09);
    runtime_printuint(runtime_physPageSize);
    s_10.len = (int)unaff_RBX;
    s_10.str = &DAT_002a47dd;
    runtime_printstring(s_10);
    runtime_printint(v_00);
    s_11.len = (int)unaff_RBX;
    s_11.str = &DAT_00287783;
    runtime_printstring(s_11);
    runtime_printunlock();
    s_12.len = (int)unaff_RBX;
    s_12.str = &DAT_0029be92;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_12);
  }
  if (runtime_physPageSize < 0x1000) {
    runtime_printlock();
    s_05.len = (int)unaff_RBX;
    s_05.str = &DAT_0029ad46;
    runtime_printstring(s_05);
    runtime_printuint(runtime_physPageSize);
    s_06.len = (int)unaff_RBX;
    s_06.str = &DAT_002a5029;
    runtime_printstring(s_06);
    runtime_printint(v);
    s_07.len = (int)unaff_RBX;
    s_07.str = &DAT_00287783;
    runtime_printstring(s_07);
    runtime_printunlock();
    s_08.len = (int)unaff_RBX;
    s_08.str = &DAT_0029be92;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_08);
  }
  if ((runtime_physPageSize & runtime_physPageSize - 1) != 0) {
    runtime_printlock();
    s_02.len = (int)unaff_RBX;
    s_02.str = &DAT_0029ad46;
    runtime_printstring(s_02);
    runtime_printuint(runtime_physPageSize);
    s_03.len = (int)unaff_RBX;
    s_03.str = &DAT_0029d63a;
    runtime_printstring(s_03);
    runtime_printunlock();
    s_04.len = (int)unaff_RBX;
    s_04.str = &DAT_0029be92;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
  if ((runtime_physHugePageSize & runtime_physHugePageSize - 1) != 0) {
    runtime_printlock();
    s.len = (int)unaff_RBX;
    s.str = &DAT_0029e061;
    runtime_printstring(s);
    runtime_printuint(runtime_physHugePageSize);
    s_00.len = (int)unaff_RBX;
    s_00.str = &DAT_0029d63a;
    runtime_printstring(s_00);
    runtime_printunlock();
    s_01.len = (int)unaff_RBX;
    s_01.str = &DAT_0029ebe1;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (0x400000 < runtime_physHugePageSize) {
    runtime_physHugePageSize = 0;
  }
  if (runtime_physHugePageSize != 0) {
    while (runtime_physHugePageSize !=
           (1L << ((byte)runtime_physHugePageShift & 0x3f) &
           -(ulong)(runtime_physHugePageShift < 0x40))) {
      runtime_physHugePageShift = runtime_physHugePageShift + 1;
    }
  }
  runtime___mheap__init(&runtime_mheap_);
  runtime_allocmcache();
  runtime_mcache0 = (runtime_mcache *)&runtime_mheap_;
  for (lVar1 = 0x7f; -1 < lVar1; lVar1 = lVar1 + -1) {
                    /* Unresolved local var: int i@[???] */
                    /* Unresolved local var: uintptr p@[???]
                       Unresolved local var: runtime.arenaHint * hint@[???] */
    runtime___fixalloc__alloc(&runtime_mheap_.arenaHintAlloc);
    local_18->addr = lVar1 << 0x28 | 0xc000000000;
    local_18->next = runtime_mheap_.arenaHints;
    runtime_mheap_.arenaHints = local_18;
  }
  return;
}

