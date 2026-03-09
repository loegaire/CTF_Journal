
/* WARNING: Removing unreachable block (ram,0x004c5bca) */
/* WARNING: Unknown calling convention */

void runtime_heapBits_initSpan(runtime_heapBits h,runtime_mspan *s)

{
  uintptr uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  string s_00;
  runtime_heapBits h_00;
  runtime_heapBits h_spill;
  runtime_mspan *s_spill;
  uint8 *local_60;
  uint local_54;
  uint8 *local_50;
  ulong local_48;
  
  s_00.len._4_4_ = (undefined4)((ulong)h._8_8_ >> 0x20);
  s_00.len._0_4_ = h.shift;
                    /* Unresolved local var: uintptr nw@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = (s_spill->npages << 0xd) >> 3;
  if (h_spill.shift == 0) {
    uVar1 = s_spill->elemsize;
                    /* Unresolved local var: uintptr anw@[???] */
    for (; uVar2 != 0; uVar2 = uVar2 - local_48) {
      h_00.shift = SUB84(h_spill.bitp,0);
      h_00.bitp = (uint8 *)uVar1;
      h_00.arena = (undefined4)uVar2;
      h_00.last = h_spill.last;
      runtime_heapBits_forwardOrBoundary(h_00,(ulong)h_spill.arena);
      if (uVar1 == 8) {
                    /* Unresolved local var: uint8 * bitp@[???]
                       Unresolved local var: uintptr i@[???] */
        for (uVar3 = 0; uVar3 < local_48 >> 2; uVar3 = uVar3 + 1) {
          *h_spill.bitp = 0xff;
          h_spill.bitp = h_spill.bitp + 1;
        }
      }
      else {
        runtime_memclrNoHeapPointers();
      }
      h_spill.bitp = local_60;
      h_spill.last = local_50;
      h_spill.arena = local_54;
    }
    return;
  }
  s_00.str = &DAT_0029e6c7;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

