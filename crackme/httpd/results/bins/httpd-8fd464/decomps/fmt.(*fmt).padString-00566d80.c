
/* WARNING: Unknown calling convention */

void fmt___fmt__padString(fmt_fmt *f,string s)

{
  ulong uVar1;
  fmt_buffer *pfVar2;
  long n;
  ulong uVar3;
  uint8 *puVar4;
  long in_FS_OFFSET;
  string s_00;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  fmt_fmt *f_spill;
  string s_spill;
  long local_70;
  uint8 *local_58;
  ulong local_48;
  
  s_00.len = s.str;
                    /* Unresolved local var: int width@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((f_spill->fmtFlags).widPresent != false) && (f_spill->wid != 0)) {
    s_00.str = s_spill.str;
    unicode_utf8_RuneCountInString(s_00);
    old.len = (fmt_fmt *)(f_spill->wid - local_70);
    if ((f_spill->fmtFlags).minus == false) {
      fmt___fmt__writePadding(f_spill,(int)s_00.len);
      pfVar2 = f_spill->buf;
      uVar1 = pfVar2->len + s_spill.len;
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
      uVar1 = n + s_spill.len;
      uVar3 = pfVar2->cap;
      puVar4 = pfVar2->array;
      if ((ulong)pfVar2->cap < uVar1) {
        old.array = (void *)n;
        old.cap = uVar1;
        runtime_growslice((runtime__type *)&DAT_00225720,old,s_spill.len);
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
  uVar1 = pfVar2->len + s_spill.len;
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

