
/* WARNING: Unknown calling convention */

void fmt___fmt__pad(fmt_fmt *f,__uint8 b)

{
  ulong uVar1;
  fmt_buffer *pfVar2;
  long n;
  ulong uVar3;
  uint8 *puVar4;
  long in_FS_OFFSET;
  __uint8 p;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  fmt_fmt *f_spill;
  __uint8 b_spill;
  long local_68;
  uint8 *local_58;
  ulong local_48;
  
  p.len = b.array;
                    /* Unresolved local var: int width@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((f_spill->fmtFlags).widPresent != false) && (f_spill->wid != 0)) {
    p.array = b_spill.array;
    p.cap = b_spill.len;
    unicode_utf8_RuneCount(p);
    old.len = (fmt_fmt *)(f_spill->wid - local_68);
    if ((f_spill->fmtFlags).minus == false) {
      fmt___fmt__writePadding(f_spill,(int)p.len);
      pfVar2 = f_spill->buf;
      uVar1 = pfVar2->len + b_spill.len;
      uVar3 = pfVar2->cap;
      puVar4 = pfVar2->array;
      if (uVar3 < uVar1) {
        old_00.len = pfVar2->len;
        old_00.array = (void *)uVar1;
        old_00.cap = (int)pfVar2->array;
        runtime_growslice((runtime__type *)&DAT_00225720,old_00,uVar3);
        uVar3 = local_48;
        puVar4 = local_58;
      }
      runtime_memmove();
      pfVar2->len = uVar1;
      pfVar2->cap = uVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        pfVar2->array = puVar4;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    else {
      pfVar2 = f_spill->buf;
      n = pfVar2->len;
      uVar1 = n + b_spill.len;
      uVar3 = pfVar2->cap;
      puVar4 = pfVar2->array;
      if ((ulong)pfVar2->cap < uVar1) {
        old.array = (void *)n;
        old.cap = uVar1;
        runtime_growslice((runtime__type *)&DAT_00225720,old,b_spill.len);
        uVar3 = local_48;
        puVar4 = local_58;
      }
      runtime_memmove();
      pfVar2->len = uVar1;
      pfVar2->cap = uVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        pfVar2->array = puVar4;
      }
      else {
        runtime_gcWriteBarrier();
      }
      fmt___fmt__writePadding(old.len,n);
    }
    return;
  }
  pfVar2 = f_spill->buf;
  uVar1 = pfVar2->len + b_spill.len;
  uVar3 = pfVar2->cap;
  puVar4 = pfVar2->array;
  if (uVar3 < uVar1) {
    old_01.len = pfVar2->len;
    old_01.array = (void *)uVar1;
    old_01.cap = (int)pfVar2->array;
    runtime_growslice((runtime__type *)&DAT_00225720,old_01,uVar3);
    uVar3 = local_48;
    puVar4 = local_58;
  }
  runtime_memmove();
  pfVar2->len = uVar1;
  pfVar2->cap = uVar3;
  if (runtime_writeBarrier._0_4_ == 0) {
    pfVar2->array = puVar4;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

