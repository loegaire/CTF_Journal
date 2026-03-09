
/* WARNING: Unknown calling convention */

void runtime___addrRanges__cloneInto(runtime_addrRanges *a,runtime_addrRanges *b)

{
  uintptr align;
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  runtime_addrRanges *a_spill;
  runtime_addrRanges *b_spill;
  runtime_addrRange *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  align = (a_spill->ranges).len;
  if ((b_spill->ranges).cap < (long)align) {
    (b_spill->ranges).len = 0;
    lVar1 = (a_spill->ranges).cap;
    (b_spill->ranges).cap = lVar1;
    runtime_persistentalloc((uintptr)a_spill,align,(runtime_sysMemStat *)(lVar1 << 4));
    (b_spill->ranges).array = local_10;
  }
  uVar2 = (a_spill->ranges).len;
  if (uVar2 <= (ulong)(b_spill->ranges).cap) {
    (b_spill->ranges).len = uVar2;
    b_spill->totalBytes = a_spill->totalBytes;
    if ((b_spill->ranges).array != (a_spill->ranges).array) {
      runtime_memmove();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

