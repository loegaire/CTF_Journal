
/* WARNING: Unknown calling convention */

void runtime_growWork_fast64(runtime_maptype *t,runtime_hmap *h,uintptr bucket)

{
  uint uVar1;
  long in_FS_OFFSET;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uintptr bucket_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uint8 oldB@[???] */
  uVar1 = (uint)h_spill->B;
  if ((h_spill->flags & 8) == 0) {
    uVar1 = h_spill->B - 1;
  }
  runtime_evacuate_fast64((runtime_maptype *)h_spill,(runtime_hmap *)t_spill,(ulong)uVar1);
  if (h_spill->oldbuckets != (void *)0x0) {
    runtime_evacuate_fast64((runtime_maptype *)h_spill,(runtime_hmap *)t_spill,h_spill->nevacuate);
  }
  return;
}

