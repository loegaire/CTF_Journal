
/* WARNING: Unknown calling convention */

void runtime_hashGrow(runtime_maptype *t,runtime_hmap *h)

{
  void *pvVar1;
  runtime_mapextra *prVar2;
  ___runtime_bmap *p_Var3;
  runtime_bmap *extraout_RAX;
  runtime_bmap *extraout_RAX_00;
  runtime_bmap *extraout_RAX_01;
  void *dirtyalloc;
  ulong uVar4;
  runtime_hmap *extraout_RDX;
  runtime_hmap *extraout_RDX_00;
  runtime_hmap *extraout_RDX_01;
  runtime_hmap *prVar5;
  uint8 b;
  byte bVar6;
  long in_FS_OFFSET;
  string s;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  runtime_mapextra *local_40;
  void *local_30;
  runtime_bmap *local_28;
  
                    /* Unresolved local var: uint8 bigger@[???]
                       Unresolved local var: void * oldbuckets@[???]
                       Unresolved local var: void * newbuckets@[???]
                       Unresolved local var: runtime.bmap * nextOverflow@[???]
                       Unresolved local var: uint8 flags@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar4 = h_spill->count + 1;
  if (((long)uVar4 < 9) || (uVar4 <= ((ulong)(1L << (h_spill->B & 0x3f)) >> 1) * 0xd)) {
    h_spill->flags = h_spill->flags | 8;
    dirtyalloc = (void *)0x0;
  }
  else {
    dirtyalloc = (void *)0x1;
  }
  pvVar1 = h_spill->buckets;
  b = h_spill->B + (char)dirtyalloc;
  local_40 = (runtime_mapextra *)CONCAT71(local_40._1_7_,b);
  runtime_makeBucketArray((runtime_maptype *)h_spill,b,dirtyalloc);
  bVar6 = h_spill->flags & 0xfc;
  if ((h_spill->flags & 1) != 0) {
    bVar6 = bVar6 | 2;
  }
  h_spill->B = h_spill->B + (char)dirtyalloc;
  h_spill->flags = bVar6;
  if (runtime_writeBarrier._0_4_ == 0) {
    h_spill->oldbuckets = pvVar1;
    h_spill->buckets = local_30;
    prVar5 = h_spill;
  }
  else {
    runtime_gcWriteBarrierBX();
    runtime_gcWriteBarrierCX();
    local_28 = extraout_RAX;
    prVar5 = extraout_RDX;
  }
  prVar5->nevacuate = 0;
  prVar5->noverflow = 0;
  prVar2 = prVar5->extra;
  if ((prVar2 != (runtime_mapextra *)0x0) &&
     (p_Var3 = prVar2->overflow, p_Var3 != (___runtime_bmap *)0x0)) {
    if (prVar2->oldoverflow != (___runtime_bmap *)0x0) {
      s.len = (int)p_Var3;
      s.str = &DAT_0029d3a5;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar2->oldoverflow = p_Var3;
    }
    else {
      runtime_gcWriteBarrierBX();
      local_28 = extraout_RAX_00;
      prVar5 = extraout_RDX_00;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar5->extra->overflow = (___runtime_bmap *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_28 = extraout_RAX_01;
      prVar5 = extraout_RDX_01;
    }
  }
  if (local_28 != (runtime_bmap *)0x0) {
    if (prVar5->extra == (runtime_mapextra *)0x0) {
      runtime_newobject((runtime__type *)&DAT_002587e0);
      if (runtime_writeBarrier._0_4_ == 0) {
        h_spill->extra = local_40;
        prVar5 = h_spill;
      }
      else {
        runtime_gcWriteBarrier();
        prVar5 = h_spill;
      }
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar5->extra->nextOverflow = local_28;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  return;
}

