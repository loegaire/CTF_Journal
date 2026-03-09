
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*hmap).newoverflow(runtime.hmap * h, runtime.maptype * t,
   runtime.bmap * b, runtime.bmap * ~r2) */

runtime_bmap * runtime___hmap__newoverflow(runtime_hmap *h,runtime_maptype *t,runtime_bmap *b)

{
  runtime_mapextra *prVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  runtime_hmap *extraout_RAX;
  runtime_hmap *extraout_RAX_00;
  runtime_hmap *extraout_RAX_01;
  runtime_hmap *prVar4;
  runtime_hmap *extraout_RAX_02;
  runtime_bmap **extraout_RAX_03;
  runtime_maptype *extraout_RAX_04;
  runtime_bmap *prVar5;
  runtime_bmap *extraout_RAX_05;
  long lVar6;
  ___runtime_bmap *p_Var7;
  runtime_bmap **pprVar8;
  runtime_mapextra *in_RDI;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_hmap *h_spill;
  runtime_maptype *t_spill;
  runtime_bmap *b_spill;
  runtime__type *local_50;
  runtime_bmap *local_40;
  runtime_bmap **local_30;
  long local_28;
  int local_20;
  
                    /* Unresolved local var: runtime.bmap * ovf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = h_spill->extra;
  prVar4 = h_spill;
  if ((prVar1 == (runtime_mapextra *)0x0) ||
     (prVar5 = prVar1->nextOverflow, prVar5 == (runtime_bmap *)0x0)) {
    local_50 = t_spill->bucket;
    runtime_mallocgc((uintptr)t_spill,&t->typ,SUB81(local_50,0));
  }
  else {
    in_RDI = (runtime_mapextra *)(prVar5[-1].tophash + t_spill->bucketsize);
    if (in_RDI->overflow == (___runtime_bmap *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar1->nextOverflow = (runtime_bmap *)(prVar5->tophash + t_spill->bucketsize);
        local_40 = prVar5;
      }
      else {
        in_RDI = (runtime_mapextra *)&prVar1->nextOverflow;
        runtime_gcWriteBarrierDX();
        prVar4 = extraout_RAX_01;
        local_40 = prVar5;
      }
    }
    else {
      if (runtime_writeBarrier._0_4_ == 0) {
        in_RDI->overflow = (___runtime_bmap *)0x0;
      }
      else {
        runtime_gcWriteBarrierCX();
        prVar4 = extraout_RAX;
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->extra->nextOverflow = (runtime_bmap *)0x0;
        local_40 = prVar5;
      }
      else {
        in_RDI = (runtime_mapextra *)&prVar4->extra->nextOverflow;
        runtime_gcWriteBarrierCX();
        prVar4 = extraout_RAX_00;
        local_40 = prVar5;
      }
    }
  }
  runtime___hmap__incrnoverflow(prVar4);
  if (t_spill->bucket->ptrdata == 0) {
    prVar4 = h_spill;
    if (h_spill->extra == (runtime_mapextra *)0x0) {
      runtime_newobject((runtime__type *)&DAT_002587e0);
      if (runtime_writeBarrier._0_4_ == 0) {
        h_spill->extra = (runtime_mapextra *)local_50;
      }
      else {
        in_RDI = (runtime_mapextra *)&h_spill->extra;
        runtime_gcWriteBarrier();
      }
    }
    if (prVar4->extra->overflow == (___runtime_bmap *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0021fba0);
      in_RDI = h_spill->extra;
      if (runtime_writeBarrier._0_4_ == 0) {
        in_RDI->overflow = (___runtime_bmap *)local_50;
        prVar4 = h_spill;
      }
      else {
        runtime_gcWriteBarrierCX();
        prVar4 = extraout_RAX_02;
      }
    }
    p_Var7 = prVar4->extra->overflow;
    uVar2 = p_Var7->array;
    uVar3 = p_Var7->len;
    old.len = uVar3;
    old.array = (void *)uVar2;
    lVar6 = p_Var7->len;
    pprVar8 = p_Var7->array;
    if ((ulong)p_Var7->cap < p_Var7->len + 1U) {
      old.cap = (int)in_RDI;
      runtime_growslice((runtime__type *)&DAT_002410a0,old,p_Var7->cap);
      p_Var7->cap = local_20;
      if (runtime_writeBarrier._0_4_ == 0) {
        p_Var7->array = local_30;
        lVar6 = local_28;
        pprVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrier();
        lVar6 = local_28;
        pprVar8 = extraout_RAX_03;
      }
    }
    p_Var7->len = lVar6 + 1;
    if (runtime_writeBarrier._0_4_ == 0) {
      pprVar8[lVar6] = local_40;
    }
    else {
      runtime_gcWriteBarrierCX();
      t_spill = extraout_RAX_04;
    }
  }
  prVar5 = (runtime_bmap *)(ulong)t_spill->bucketsize;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime_bmap **)(b_spill[-1].tophash + (long)prVar5->tophash) = local_40;
  }
  else {
    runtime_gcWriteBarrierDX();
    prVar5 = extraout_RAX_05;
  }
  return prVar5;
}

