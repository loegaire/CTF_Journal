
/* WARNING: Unknown calling convention */

void runtime_advanceEvacuationMark(runtime_hmap *h,runtime_maptype *t,uintptr newbit)

{
  uintptr uVar1;
  ulong uVar2;
  runtime_hmap *extraout_RAX;
  runtime_hmap *extraout_RAX_00;
  ulong uVar3;
  long in_FS_OFFSET;
  runtime_hmap *h_spill;
  runtime_maptype *t_spill;
  uintptr stop;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = h_spill->nevacuate;
  h_spill->nevacuate = uVar1 + 1;
  uVar3 = uVar1 + 0x401;
  if (stop < uVar3) {
    uVar3 = stop;
  }
                    /* Unresolved local var: runtime.bmap * b@[???] */
                    /* Unresolved local var: uint8 h@[???] */
  while ((uVar2 = h_spill->nevacuate, uVar2 != uVar3 &&
         ((byte)(*(char *)(t_spill->bucketsize * uVar2 + (long)h_spill->oldbuckets) - 2U) < 3))) {
    h_spill->nevacuate = uVar2 + 1;
  }
  if (stop == uVar2) {
    if (runtime_writeBarrier._0_4_ == 0) {
      h_spill->oldbuckets = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      h_spill = extraout_RAX;
    }
    if (h_spill->extra != (runtime_mapextra *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        h_spill->extra->oldoverflow = (___runtime_bmap *)0x0;
      }
      else {
        runtime_gcWriteBarrierCX();
        h_spill = extraout_RAX_00;
      }
    }
    h_spill->flags = h_spill->flags & 0xf7;
  }
  return;
}

