
/* WARNING: Unknown calling convention */

void fmt___fmt__writePadding(fmt_fmt *f,int n)

{
  runtime__type *cap;
  fmt_buffer *pfVar1;
  runtime__type *prVar2;
  uint8 uVar3;
  long lVar4;
  uint8 *puVar5;
  runtime__type *et;
  long in_FS_OFFSET;
  fmt_fmt *f_spill;
  int n_spill;
  uint8 *local_30;
  
                    /* Unresolved local var: int newLen@[???]
                       Unresolved local var: uint8 padByte@[???]
                       Unresolved local var: fmt.buffer buf@[???]
                       Unresolved local var: fmt.buffer padding@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n_spill < 1) {
    return;
  }
  pfVar1 = f_spill->buf;
  prVar2 = (runtime__type *)pfVar1->len;
  et = (runtime__type *)pfVar1->cap;
  cap = (runtime__type *)((long)&prVar2->size + n_spill);
  puVar5 = pfVar1->array;
  if ((long)et < (long)cap) {
    et = (runtime__type *)(n_spill + (long)et * 2);
    runtime_makeslice(et,n_spill,(int)cap);
    puVar5 = local_30;
    if (f_spill->buf->array != local_30) {
      runtime_memmove();
    }
  }
  if ((f_spill->fmtFlags).zero == false) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0x30;
  }
  if (cap <= et) {
    if (prVar2 <= cap) {
      for (lVar4 = 0; lVar4 < n_spill; lVar4 = lVar4 + 1) {
        puVar5[lVar4 + ((ulong)prVar2 & (long)prVar2 - (long)et >> 0x3f)] = uVar3;
      }
      pfVar1 = f_spill->buf;
      pfVar1->len = (int)cap;
      pfVar1->cap = (int)et;
      if (runtime_writeBarrier._0_4_ == 0) {
        pfVar1->array = puVar5;
      }
      else {
        runtime_gcWriteBarrierR8();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

