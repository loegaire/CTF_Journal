
/* WARNING: Unknown calling convention */

void runtime_markrootBlock(uintptr b0,uintptr n0,uint8 *ptrmask0,runtime_gcWork *gcw,int shard)

{
  long in_FS_OFFSET;
  uintptr b0_spill;
  uintptr n0_spill;
  uint8 *ptrmask0_spill;
  runtime_gcWork *gcw_spill;
  int shard_spill;
  
                    /* Unresolved local var: uintptr b@[???]
                       Unresolved local var: uint8 * ptrmask@[???]
                       Unresolved local var: uintptr n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n0_spill <= (ulong)(shard_spill * 0x40000)) {
    return;
  }
  runtime_scanblock((uintptr)gcw_spill,shard_spill * 0x40000 + 0x40000,
                    (uint8 *)(shard_spill * 0x1000),gcw,(runtime_stackScanState *)n0_spill);
  return;
}

