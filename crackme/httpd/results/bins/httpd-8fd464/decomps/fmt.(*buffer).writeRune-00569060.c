
/* WARNING: Unknown calling convention */

void fmt___buffer__writeRune(fmt_buffer *bp,int32 r)

{
  runtime__type *prVar1;
  uint8 *extraout_RAX;
  runtime__type *et;
  long lVar2;
  runtime__type *prVar3;
  uint8 *puVar4;
  runtime__type *prVar5;
  runtime__type *prVar6;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  __uint8 p;
  fmt_buffer *bp_spill;
  int32 r_spill;
  runtime__type *local_48;
  uint8 *local_40;
  long local_38;
  runtime__type *local_30;
  
                    /* Unresolved local var: int w@[???]
                       Unresolved local var: fmt.buffer b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  old.array = (ulong)(uint)r_spill;
  if (r_spill < 0x80) {
    lVar2 = bp_spill->len;
    puVar4 = bp_spill->array;
    if ((ulong)bp_spill->cap < lVar2 + 1U) {
      old.len = lVar2;
      old.cap = lVar2 + 1U;
      runtime_growslice((runtime__type *)&DAT_00225720,old,bp_spill->cap);
      bp_spill->cap = (int)local_30;
      if (runtime_writeBarrier._0_4_ == 0) {
        bp_spill->array = local_40;
        lVar2 = local_38;
        puVar4 = local_40;
      }
      else {
        runtime_gcWriteBarrier();
        lVar2 = local_38;
        puVar4 = extraout_RAX;
      }
    }
    bp_spill->len = lVar2 + 1;
    puVar4[lVar2] = (uint8)r_spill;
    return;
  }
  prVar3 = (runtime__type *)bp_spill->len;
  puVar4 = bp_spill->array;
  prVar5 = (runtime__type *)bp_spill->cap;
  et = prVar3;
  while( true ) {
    old_00.array = (ulong)(uint)r_spill;
    prVar1 = (runtime__type *)((long)&prVar3->size + 4);
    if ((long)prVar1 <= (long)prVar5) break;
    prVar1 = (runtime__type *)((long)&et->size + 1);
    prVar6 = prVar1;
    if (prVar5 < prVar1) {
      old_00.len = (int)&DAT_00225720;
      old_00.cap = (int)puVar4;
      runtime_growslice(et,old_00,(int)bp_spill);
      prVar6 = (runtime__type *)(local_38 + 1);
      puVar4 = local_40;
      prVar5 = local_30;
      local_48 = prVar1;
    }
    *(uint8 *)((long)&et->size + (long)puVar4) = 0;
    et = prVar6;
  }
  if (prVar5 < prVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  if (prVar1 < prVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  p.len._0_4_ = r_spill;
  p.array = (uint8 *)et;
  p.len._4_4_ = 0;
  p.cap = (int)prVar3;
  unicode_utf8_EncodeRune(p,(int32)puVar4);
  prVar3 = (runtime__type *)((long)&local_48->size + (long)&prVar3->size);
  if (prVar5 < prVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  bp_spill->len = (int)prVar3;
  bp_spill->cap = (int)prVar5;
  if (runtime_writeBarrier._0_4_ == 0) {
    bp_spill->array = puVar4;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

